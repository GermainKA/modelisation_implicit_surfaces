#pragma once
#include "Node.h"

class Capsule : public Node {
public:
    Vector a; // Frist Point
    Vector b; // Second Point
    double radius;

    Capsule(const Vector& pointA, const Vector& pointB, double r)
        : a(pointA), b(pointB), radius(r) {}

    double Value(const Vector& point) const override {
        Vector pa = point - a;
        Vector ba = b - a;
        double h = Math::Clamp((std::move(pa) * std::move(ba)) / (std::move(ba) * std::move(ba)), 0.0, 1.0);
        return Norm(pa - ba * h) - radius;
    }
};