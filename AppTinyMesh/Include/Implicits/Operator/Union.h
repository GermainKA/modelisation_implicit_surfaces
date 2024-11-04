#include "Implicits/Node.h"


class Union : public Node {
public:
    std::shared_ptr<Node> left;
    std::shared_ptr<Node> right;

    Union(const std::shared_ptr<Node> &l, const std::shared_ptr<Node> &r)
        : left(std::move(l)), right(std::move(r)) {}

    double Value(const Vector& point) const override {
        return std::min(left->Value(point), right->Value(point));
    }
};