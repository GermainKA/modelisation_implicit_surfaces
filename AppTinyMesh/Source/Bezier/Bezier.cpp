#include "Bezier/Bezier.h"
#include "mathematics.h"
#include <vector>
Bezier::Bezier() : p_ij(0), result(0), normals(0), resolution(0), m(0), n(0) {}

Bezier::Bezier(std::vector<Vector> &p_ij, std::vector<Vector> &result,
               std::vector<Vector> &normals, int resolution, int m, int n)
    : p_ij(p_ij), result(result), normals(normals), resolution(resolution),
      m(m), n(n) {}



//DeCasteljau2D Based on 1D 
void Bezier::deCasteljau2D(std::vector<Vector>& p_ij, std::vector<Vector>& result, std::vector<Vector>& normals, int resolution, int m, int n) {
    for (int uStep = 0; uStep < resolution; ++uStep) {
        for (int vStep = 0; vStep < resolution; ++vStep) {
            double u = double(uStep) / (resolution - 1);
            double v = double(vStep) / (resolution - 1);

            // use one of the parameters u to evaluate each of these curves
            std::vector<Vector> Q_j(n + 1);
            std::vector<Vector> dQ_j_du(n + 1);
            for (int j = 0; j <= n; ++j) {
                 //Get Each Line of Control Points
                std::vector<Vector> P_i(m + 1);
                for (int i = 0; i <= m; ++i) {
                    P_i[i] = p_ij[i * (n + 1) + j];
                }
                // Compute 1D deCaseljau of each grid line
                Q_j[j] = deCasteljau1D(P_i, u);
                //Normal
                dQ_j_du[j] = deCasteljau1DDerivative(P_i, u);
            }

            //  Use the second parameter v evaluate the final position along this curve
            Vector p_uv = deCasteljau1D(Q_j, v);

            Vector dp_du = deCasteljau1D(dQ_j_du, v);

            Vector dp_dv = deCasteljau1DDerivative(Q_j, v);

            Vector normal = Normalized(dp_du/dp_dv);

            result[uStep * resolution + vStep] = p_uv;
            normals[uStep * resolution + vStep] = normal;
        }
    }
}

//DeCasteljau 1D
Vector Bezier::deCasteljau1D(const std::vector<Vector>& P, double t) {
    int degree = P.size() - 1;
    std::vector<Vector> tmp = P;
    for (int r = 1; r <= degree; ++r) {
        for (int i = 0; i <= degree - r; ++i) {
            tmp[i] = (1 - t) * tmp[i] + t * tmp[i + 1];
        }
    }
    return tmp[0];
}

// DeCasteljau 1D derivative
Vector Bezier::deCasteljau1DDerivative(const std::vector<Vector>& P, double t) {
    int degree = P.size() - 1;
    if (degree == 0) {
        return Vector(0, 0, 0);
    }
    std::vector<Vector> D(degree);
    for (int i = 0; i < degree; ++i) {
        D[i] = degree * (P[i + 1] - P[i]);
    }
    if (degree == 1) {
        return D[0];
    }
    std::vector<Vector> tmp = D;
    for (int r = 1; r <= degree - 1; ++r) {
        for (int i = 0; i <= degree - r - 1; ++i) {
            tmp[i] = (1 - t) * tmp[i] + t * tmp[i + 1];
        }
    }
    return tmp[0];
}

//Bernstein
void Bezier::bernstein2D(std::vector<Vector>& p_ij, std::vector<Vector>& result, std::vector<Vector>& normals, int resolution, int m, int n) {
    for (int uStep = 0; uStep < resolution; ++uStep) {
        for (int vStep = 0; vStep < resolution; ++vStep) {
            double u = double(uStep) / (resolution -1);
            double v = double(vStep) / (resolution -1);
            //Init
            Vector p_uv(0, 0, 0); 
            Vector dp_du(0, 0, 0); 
            Vector dp_dv(0, 0, 0); 

            // compute p(u, v), dp/du, et dp/dv
            for (int i = 0; i <= m; ++i) {
                for (int j = 0; j <= n; ++j) {
                    double Bm_i_u = bernstein(i, m, u);
                    double Bn_j_v = bernstein(j, n, v);

                    // contribution at uv
                    p_uv += Bm_i_u * Bn_j_v * p_ij[i * (n+1) + j];

                    // dp/du, et dp/dv
                    if (i < m) {
                        double dBm_i_u = m * bernstein(i, m - 1, u);
                        dp_du += dBm_i_u * Bn_j_v * (p_ij[(i + 1) * (n+1) + j] - p_ij[i * (n+1) + j]);
                    }
                    if (j < n) {
                        double dBn_j_v = n * bernstein(j, n - 1, v);
                        dp_dv += Bm_i_u * dBn_j_v * (p_ij[i * (n+1) + j + 1] - p_ij[i * (n+1) + j]);
                    }
                }
            }

            Vector normal = Normalized(dp_du/dp_dv);

            result[uStep * resolution  + vStep] = p_uv;
            normals[uStep * resolution  + vStep] = normal;
        }
    }
}

double Bezier::bernstein(int i, int n, double t) {
  return Bezier::binCoeff[n][i] * pow(t, i) * pow(1 - t, n - i);
}



Mesh Bezier::Polygonize() const {

  std::vector<Vector> m_vertices;
  std::vector<Vector> m_normals;

  std::vector<int> varray; //!< Vertex indexes.
  std::vector<int> narray; //!< Normal indexes.
  m_vertices.clear();
  m_normals.clear();
  varray.clear();
  narray.clear();

  for (int i = 0; i < resolution; ++i) {
    for (int j = 0; j < resolution; ++j) {
      m_vertices.push_back(result[i * resolution + j]);
      m_normals.push_back(normals[i * resolution + j]);
    }
  }

  for (int i = 0; i < resolution - 1; ++i) {
    for (int j = 0; j < resolution - 1; ++j) {
      int idx1 = i * resolution + j;
      int idx2 = idx1 + 1;
      int idx3 = idx1 + resolution;
      int idx4 = idx3 + 1;

      varray.push_back(idx1);
      varray.push_back(idx3);
      varray.push_back(idx2);

      varray.push_back(idx2);
      varray.push_back(idx3);
      varray.push_back(idx4);
    }
  }
  narray = varray;
  return Mesh(m_vertices, m_normals, varray, narray);
}

void Bezier::bernstein2D() {
  bernstein2D(p_ij, result, normals, resolution, m, n);
}

void Bezier::deCasteljau2D() {
  deCasteljau2D(p_ij, result, normals, resolution, m, n);
}

void Bezier::setControlPoints(std::vector<Vector> &p_ij) { this->p_ij = p_ij; }

void Bezier::setResults(std::vector<Vector> &result) { this->result = result; }

void Bezier::setResolution(int resolution) { this->resolution = resolution; }

void Bezier::setDegrees(int m, int n) {
  this->m = m;
  this->n = n;
}

const std::vector<Vector> &Bezier::getControlPoints() const { return p_ij; }

const std::vector<Vector> &Bezier::getResults() const { return result; }

int Bezier::getResolution() const { return resolution; }

int Bezier::getDegreeM() const { return m; }

int Bezier::getDegreeN() const { return n; }


//Read only Formatted Data
std::vector<std::vector<Vector>> readControlPoints(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<std::vector<Vector>> control_points;
    std::vector<Vector> current_group;
    double x, y, z;

    if (!file.is_open()) {
        std::cerr << "ERREUR : Impossible d'ouvrir le fichier : " << filename << std::endl;
        return control_points;
    }
    while (file >> x >> y >> z) {
        current_group.emplace_back(x, y, z);
        if (current_group.size()==16) {
                control_points.push_back(current_group);
                current_group.clear();
            }
        }

    file.close();
    return control_points;
}


void generateControlPoints(std::vector<Vector>& p_ij, int m, int n) {
    p_ij.resize((m + 1) * (n + 1));
    double size = 10.0; //Grid Size 
    double dx = size / m;
    double dy = size / n;
    
    for (int i = 0; i <= m; ++i) {
        double x = -size / 2 + i * dx;
        for (int j = 0; j <= n; ++j) {
            double y = -size / 2 + j * dy;
            double z =  4 * sin(x) * 4 *cos(y); //Sinusoidal Surface
            p_ij[i * (n + 1) + j] = Vector(x, y, z);
        }
    }
}