#pragma once
#include "Node.h"
#include "mathematics.h"

class Cylinder : public Node {
public:
    Vector center;   
    double radius;   
    double height;   

    Cylinder(const Vector& c, double r, double h)
        : center(c), radius(r), height(h) {}

    double Value(const Vector& point) const override {
        Vector p = point - center;
        double dxy = sqrt(p[0]* p[0] + p[1] * p[1]) - radius;
        double dz = fabs(p[2]) - height / 2.0;
        double insideDistance = std::min(std::max(dxy, dz), 0.0);
        double outsideDistance = Norm(Vector::Max(Vector(dxy, dz, 0.0), Vector(0.0, 0.0, 0.0)));
        return insideDistance + outsideDistance;
    }
};