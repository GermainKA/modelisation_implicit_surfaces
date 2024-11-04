#pragma once
#include <random>
#include "implicits.h"
#include "Node.h"
#include "box.h"
#include "Implicits/Sphere.h"
#include "Implicits/Operator/Diff.h"



class MyImplicitSurf : public AnalyticScalarField {
public:
    // Ptr to sdf root node
    std::shared_ptr<Node> rootNode;

    // Constructor
    MyImplicitSurf(const std::shared_ptr<Node>& root) : rootNode(std::move(root)) {}
    // Destructor
    ~MyImplicitSurf() {}
    // Copy constructor
    MyImplicitSurf(const MyImplicitSurf& other) : rootNode(other.rootNode) {}
    // Assignment operator
    MyImplicitSurf& operator=(const MyImplicitSurf& other) {
        if (this!= &other) {
            rootNode = other.rootNode;
        }
        return *this;
    }
    bool Intersect(const Ray& ray, double& t) const ;
    // Evaluate
    double Value(const Vector& p) const override {
        return rootNode->Value(p);
    }
    void applyErosion(const std::shared_ptr<Node>& node) ;
    void applyErosion(const std::vector<std::shared_ptr<Node>>& node) ;
};

Vector randomPointInBoundingBox(const Box& bbox);
double randomDouble(double min, double max);
