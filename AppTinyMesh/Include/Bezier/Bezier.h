#pragma once
#include "mathematics.h"
#include "mesh.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
class Bezier 
{

    
public:

    Bezier();

    Bezier(std::vector<Vector>& p_ij, std::vector<Vector>& result,std::vector<Vector>& normals, int resolution, int m, int n);


    static void bernstein2D(std::vector<Vector>&  p_ij, std::vector<Vector>&  result, std::vector<Vector>& normals, int resolution, int m, int n);
    static void deCasteljau2D(std::vector<Vector>& p_ij, std::vector<Vector>& result, std::vector<Vector>& normals, int resolution, int m, int n);

    void bernstein2D();
    void deCasteljau2D() ;

    static Vector deCasteljau1D(const std::vector<Vector>& P, double t);
    static Vector deCasteljau1DDerivative(const std::vector<Vector>& P, double t);

    

    Mesh Polygonize() const ;

    void setControlPoints(std::vector<Vector>&  p_ij);
    void setResults(std::vector<Vector>&  result);
    void setResolution(int resolution);
    void setDegrees(int m, int n);

    const std::vector<Vector>&  getControlPoints() const;
    const std::vector<Vector>&  getResults() const;
    int getResolution() const;
    int getDegreeM() const;
    int getDegreeN() const;

    ~Bezier() {} ;

private:

    std::vector<Vector>  p_ij;     
    std::vector<Vector> result;   
    std::vector<Vector> normals;   
    int resolution;   
    int m, n;         
inline static int binCoeff[16][16] = {
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 4, 6, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 5, 10, 10, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 6, 15, 20, 15, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 7, 21, 35, 35, 21, 7, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 8, 28, 56, 70, 56, 28, 8, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 9, 36, 84, 126, 126, 84, 36, 9, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 10, 45, 120, 210, 252, 210, 120, 45, 10, 1, 0, 0, 0, 0, 0 },
    { 1, 11, 55, 165, 330, 462, 462, 330, 165, 55, 11, 1, 0, 0, 0, 0 },
    { 1, 12, 66, 220, 495, 792, 924, 792, 495, 220, 66, 12, 1, 0, 0, 0 },
    { 1, 13, 78, 286, 715, 1287, 1716, 1716, 1287, 715, 286, 78, 13, 1, 0, 0 },
    { 1, 14, 91, 364, 1001, 2002, 3003, 3432, 3003, 2002, 1001, 364, 91, 14, 1, 0 },
    { 1, 15, 105, 455, 1365, 3003, 5005, 6435, 6435, 5005, 3003, 1365, 455, 105, 15, 1 }
};

    
    static double bernstein(int i, int n, double t);


};

std::vector<std::vector<Vector>> readControlPoints(const std::string &filename) ;
void generateControlPoints(std::vector<Vector>& p_ij, int m, int n) ;