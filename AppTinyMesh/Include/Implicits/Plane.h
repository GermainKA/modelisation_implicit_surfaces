#pragma once
#include "Node.h"

class Plane : public Node {
public:
    Vector pointOnPlane; 
    Vector normal;      

    Plane(const Vector& p0, const Vector& n)
        : pointOnPlane(p0), normal(Normalized(n)) {}

    double Value(const Vector& point) const override {
        return (point - pointOnPlane)* normal;
    }
};