
#pragma once
#include "Node.h"

class TransformedNode : public Node { //Only Translation Here
public:
    std::shared_ptr<Node> child;
    Vector transform;

    TransformedNode(const std::shared_ptr<Node>& node, const Vector& t)
        : child(node), transform(t) {}

    double Value(const Vector& point) const override {
        // Apply Inverse transformation
        Vector localPoint = point - transform ;
        return child->Value(localPoint);
    }
};