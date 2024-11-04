#pragma once
#include "Implicits/Node.h"

class Blend : public Node {
private:
    std::shared_ptr<Node> left;
    std::shared_ptr<Node> right;
    double blendRadius; 

public:
    Blend(const std::shared_ptr<Node> &l, const std::shared_ptr<Node> &r, double radius)
        : left(std::move(l)), right(std::move(r)), blendRadius(radius) {}

    double Value(const Vector& p) const override {
        double d1 = left->Value(p);
        double d2 = right->Value(p);

        //Union
        double unionValue = std::min(d1, d2);

        // Offset correction
        double h = std::max(blendRadius - std::abs(d1 - d2), 0.0) / blendRadius;
        double correction = (1.0 / 6.0) * blendRadius * std::pow(h, 3);

        // Blended result
        return unionValue - correction;
    }
};