#pragma once
#include "Node.h"
#include "Implicits/Sphere.h"
#include "Implicits/Torus.h"
#include "Implicits/M_Box.h"
#include "Implicits/Capsule.h"
#include "Implicits/Cylinder.h"
#include "Implicits/Plane.h"
#include "Implicits/MyImplicitSurf.h"
#include "Implicits/Operator/Union.h"
#include "Implicits/Operator/Blend.h"
#include "Implicits/Operator/Inter.h"
#include "Implicits/Operator/Diff.h"
#include "Implicits/TransformedNode.h"


const Vector CAR_POSITION(0.0, 0.0, 0.0);
const Vector CAR_SIZE(5.0, 2.0, 3.0); 

const Vector WHEEL_HOLE_SIZE(0.75, 0.5, 0.3);
const Vector WHEEL_HOLE_BASE_POSITION(0.95, 0.40, 0.15);

const double WHEEL_RADIUS = 0.60;
const double WHEEL_WIDTH = 0.3;
const double WHEEL_TORUS_MAJOR_RADIUS = 0.600;
const double WHEEL_TORUS_MINOR_RADIUS = 0.30;
const Vector WHEEL_AXIS(0.0, 0.0, 1.0);
const Vector WHEEL_OFFSET(0.0, -0.2, 0.0);

const Vector WHEEL_POSITIONS[4] = {
    WHEEL_HOLE_BASE_POSITION,
    WHEEL_HOLE_BASE_POSITION + Vector(2.7, 0.0, 0.0),
    WHEEL_HOLE_BASE_POSITION + Vector(0.0, 0.0, 2.7),
    WHEEL_HOLE_BASE_POSITION + Vector(2.7, 0.0, 2.7)
};

std::shared_ptr<Node> CreateCarBody() {
    // Car Body
    auto carBox = std::make_shared<Box_NA>(CAR_POSITION, CAR_SIZE);

    // ROof cut Plane 
    auto backSplitPlane = std::make_shared<Plane>(Vector(2.0, 1.8, 0.0), Vector(-0.24, -0.97, 0.0));
    auto frontSplitPlane = std::make_shared<Plane>(Vector(2.0, 1.8, 0.0), Vector(0.30, -0.70, 0.0));
    auto roofSplitPlane = std::make_shared<Union>(backSplitPlane, frontSplitPlane);

    // Side cut Plane 
    auto leftSplitPlane = std::make_shared<Plane>(Vector(0.5, 1.8, 0.2), Vector(0.0, -0.20, 0.80));
    auto rightSplitPlane = std::make_shared<Plane>(Vector(4.5, 1.8, 2.8), Vector(0.0, -0.20, -0.80));
    auto sideSplitPlane = std::make_shared<Union>(leftSplitPlane, rightSplitPlane);

    // Roof and Side cut
    auto roofSidePlane = std::make_shared<Union>(roofSplitPlane, sideSplitPlane);

    // Rear  cut Plane
    auto rearSplitPlane = std::make_shared<Plane>(Vector(5.0, 1.0, 0.0), Vector(-0.80, 0.20, 0.0));

    // Final Plane
    auto finalSplitPlane = std::make_shared<Union>(roofSidePlane, rearSplitPlane);

    // Diff plane with Final Plane
    auto carBody = std::make_shared<Diff>(carBox, finalSplitPlane);

    return carBody;
}

// Whell Hole
std::shared_ptr<Node> CreateWheelHole() {
    // Box
    auto wheelHoleBox = std::make_shared<Box_A>(Vector(0.0, 0.0, 0.0), WHEEL_HOLE_SIZE);

    // Cut plane 
    auto frontWheelHoleCut = std::make_shared<Plane>(Vector(-0.75, -0.2, 0.0), Vector(0.70, -0.30, 0.0));
    auto backWheelHoleCut = std::make_shared<Plane>(Vector(0.75, -0.2, 0.0), Vector(-0.70, -0.30, 0.0));
    auto wheelHoleCutPlanes = std::make_shared<Union>(frontWheelHoleCut, backWheelHoleCut);

    // Final Whell Hole
    auto finalWheelHole = std::make_shared<Diff>(wheelHoleBox, wheelHoleCutPlanes);

    return finalWheelHole;
}

// Wheel 
std::shared_ptr<Node> CreateWheel() {
    // Whell COmponents
    auto wheelCylinder = std::make_shared<Cylinder>(Vector(0.0, 0.0, 0.0), WHEEL_RADIUS, WHEEL_WIDTH);
    auto wheelTorus = std::make_shared<Torus>(Vector(0.0, 0.0, 0.0), WHEEL_AXIS, WHEEL_TORUS_MAJOR_RADIUS, WHEEL_TORUS_MINOR_RADIUS);
    auto wheelSphere = std::make_shared<Sphere>(Vector(0.0, 0.0, 0.0), WHEEL_TORUS_MINOR_RADIUS);

    // Union of Components
    auto wheelExterior = std::make_shared<Inter>(wheelCylinder, wheelTorus);
    auto wheelInterior = std::make_shared<Inter>(wheelCylinder, wheelSphere);
    auto wheel = std::make_shared<Union>(wheelExterior, wheelInterior);

    return wheel;
}

// Create Car
std::shared_ptr<Node> CreateCar() {
    // Body
    auto carBody = CreateCarBody();

    // Whell Hole
    auto wheelHole = CreateWheelHole();

    // Translate wheel Hole
    std::shared_ptr<Node> allWheelHoles = nullptr;
    for (size_t i = 0; i < 4; ++i) {
        auto transformedWheelHole = std::make_shared<TransformedNode>(wheelHole, WHEEL_POSITIONS[i]);
        if (allWheelHoles == nullptr) {
            allWheelHoles = transformedWheelHole;
        } else {
            allWheelHoles = std::make_shared<Union>(allWheelHoles, transformedWheelHole);
        }
    }

    // Diff Whell Body
    auto carWithHoles = std::make_shared<Diff>(carBody, allWheelHoles);

    // Wheel
    auto wheel = CreateWheel();

    // Translate wheel
    std::shared_ptr<Node> allWheels = nullptr;
    for (size_t i = 0; i < 4; ++i) {
        Vector wheelPosition = WHEEL_POSITIONS[i] + WHEEL_OFFSET;
        auto transformedWheel = std::make_shared<TransformedNode>(wheel, wheelPosition);
        if (allWheels == nullptr) {
            allWheels = transformedWheel;
        } else {
            allWheels = std::make_shared<Blend>(allWheels, transformedWheel, 1);
        }
    }

    // Add whell to body
    auto car = std::make_shared<Union>(carWithHoles, allWheels);

    return car;
}
