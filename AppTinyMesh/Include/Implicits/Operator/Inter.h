#pragma once
#include "Implicits/Node.h"

class Inter : public Node {
public:
    std::shared_ptr<Node> left;
    std::shared_ptr<Node> right;

    Inter(const std::shared_ptr<Node> &l,const std::shared_ptr<Node> &r)
        : left(std::move(l)), right(std::move(r)) {}

    double Value(const Vector& point) const override {
        return std::max(left->Value(point), right->Value(point));
    }
};