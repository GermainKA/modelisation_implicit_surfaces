#pragma once
#include "Node.h"

class Torus : public Node {
public:
    Vector center;
    Vector axis;        // axis (normal to core plane)
    double majorRadius; // Major radius R
    double minorRadius; // Minor raduis r

    Torus(const Vector& c, const Vector& a, double R, double r)
        : center(c), axis(Normalized(a)), majorRadius(R), minorRadius(r) {}

    double Value(const Vector& point) const override {
        Vector p = point - center;
        // Projection on the plane perpendicular to the axis
        Vector pProjected = p - axis * p * axis;
        double distToAxis = Norm(pProjected);
        double q = distToAxis - majorRadius;
        double distance = sqrt(q * q + pow((std::move(p) * axis), 2)) - minorRadius;
        return distance;
    }
};