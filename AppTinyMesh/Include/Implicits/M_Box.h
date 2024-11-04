#pragma once
#include "Node.h"
#include "mathematics.h"
//Axis-aligned boxes
class Box_A : public Node {
public:
    Vector center;
    Vector halfSize; // HalfSize on each components X, Y, Z

    Box_A(const Vector& c, const Vector& h) : center(c), halfSize(h) {}



    double Value(const Vector& point) const override {
        Vector d = Abs(point - center) - halfSize;
        double outsideDistance = Norm( Vector::Max(d, Vector(0, 0, 0)));
        double insideDistance = std::min(std::max(d[0], std::max(d[1], d[2])), 0.0);
        return outsideDistance + insideDistance;
    }
};
// No Axis-aligned boxes
class Box_NA : public Node {
public:
    Vector A; // Pos of the Lower Conner of the Box
    Vector B; // Pos of the Upper Conner of the Box

    Box_NA(const Vector& pointA, const Vector& pointB) 
        : A(pointA), B(pointB) {}

    double Value(const Vector& point) const override {
        //Compute Center and HalfSize values
        Vector center = (A + B) * 0.5;
        Vector halfSize = Abs(B - A) * 0.5;

        // compute sd values
        Vector d = Abs(point - center) - halfSize;
        double outsideDistance = Norm(Vector::Max(d, Vector(0, 0, 0)));
        double insideDistance = std::min(std::max(d[0], std::max(d[1], d[2])), 0.0);
        return outsideDistance + insideDistance;
    }
};