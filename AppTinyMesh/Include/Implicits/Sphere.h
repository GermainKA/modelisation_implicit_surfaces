#pragma once
#include "Node.h"

class Sphere : public Node {
private:
    Vector center;
    double radius; 

public:
    Sphere(const Vector& c, double r) : center(c), radius(r) {}

    double Value(const Vector& p) const override {
        return Norm(p - center)- radius;
    }
};