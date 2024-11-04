#include "Implicits/MyImplicitSurf.h"
//Improved Sphere Tracing Algorithm
bool MyImplicitSurf::Intersect(const Ray& ray, double& t) const {
    // Global lambda 
    const double lambda = 1.0;
    const double kappa = 0.2;
    const double epsilon = 1e-6; //Numerical error
    t = 0.0f; 
    float b = 0.0f; //secure Step
    int maxSteps = 1000; //Avoid infinite loop
    
    for (int i=0;i<maxSteps;i++) 
    {
        // p = origin + t * direction
        Vector p =ray.Origin() + t * ray.Direction();
        
        // f(p)
        double value=this->Value(p);
        
        //Next step
        float step = std::fabs(value) / lambda;
        if (step < kappa * b) {
            t = t - kappa * b;
            b = 0; 
        } else {
            if (value < epsilon ) {
            return true;
            }
            t = t + (1.0f + kappa) * step;
            b = step;
        }
        //std::cout << "t = " << t << std::endl;
    }
    return false;
}

void MyImplicitSurf::applyErosion(const std::shared_ptr<Node>& node) {
    this->rootNode = std::make_shared<Diff>(this->rootNode,node);
}
void MyImplicitSurf::applyErosion(const std::vector<std::shared_ptr<Node>>& nodes) {
    for (const auto& node : nodes) {
        this->rootNode = std::make_shared<Diff>(this->rootNode, node);
    }
}


//Random double Generator
double randomDouble(double min, double max) {
    static std::mt19937 rng(std::random_device{}());
    std::uniform_real_distribution<double> dist(min, max);
    return dist(rng);
}

//Random vector on Bounding Box

Vector randomPointInBoundingBox(const Box& bbox) {
    Vector p ;
    for (int i = 0; i < 3; i++){
        if(bbox[0][i] > bbox[1][i])
        std::swap(bbox[1][i], bbox[0][i]);
         p[i] = randomDouble(bbox[0][i], bbox[1][i]);
    }
    return p;
}