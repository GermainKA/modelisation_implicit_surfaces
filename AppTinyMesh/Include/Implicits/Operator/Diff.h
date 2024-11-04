#pragma once
#include "Implicits/Node.h"

class Diff : public Node {
public:
    std::shared_ptr<Node> left;  //Base
    std::shared_ptr<Node> right; // To differentiate

    Diff(const std::shared_ptr<Node> &l, const std::shared_ptr<Node> &r)
        : left(std::move(l)), right(std::move(r)) {}

    double Value(const Vector& point) const override {
        return std::max(left->Value(point), -right->Value(point));
    }
};