#include "Bezier/Bezier.h"
#include "Implicits/HierachicalConst.h"
#include "implicits.h"
#include "qte.h"
#include "ui_interface.h"
#include <algorithm>
#include <chrono>
#include <memory>


// Fonction pour normaliser les coordonnées afin de créer une grille régulière

MainWindow::MainWindow() : QMainWindow(), uiw(new Ui::Assets) {
  // Chargement de l'interface
  uiw->setupUi(this);

  // Chargement du GLWidget
  meshWidget = new MeshWidget;
  QGridLayout *GLlayout = new QGridLayout;
  GLlayout->addWidget(meshWidget, 0, 0);
  GLlayout->setContentsMargins(0, 0, 0, 0);
  uiw->widget_GL->setLayout(GLlayout);

  // Creation des connect
  CreateActions();

  meshWidget->SetCamera(Camera(Vector(10, 0, 0), Vector(0.0, 0.0, 0.0)));
}

MainWindow::~MainWindow() { delete meshWidget; }

void MainWindow::CreateActions() {
  // Buttons
  connect(uiw->boxMesh, SIGNAL(clicked()), this, SLOT(BoxMeshExample()));
  connect(uiw->sphereImplicit, SIGNAL(clicked()), this,SLOT(SphereImplicitExample()));
  connect(uiw->resetcameraButton, SIGNAL(clicked()), this, SLOT(ResetCamera()));
  connect(uiw->wireframe, SIGNAL(clicked()), this, SLOT(UpdateMaterial()));
  connect(uiw->radioShadingButton_1, SIGNAL(clicked()), this,SLOT(UpdateMaterial()));
  connect(uiw->radioShadingButton_2, SIGNAL(clicked()), this, SLOT(UpdateMaterial()));

  // Widget edition
  connect(meshWidget, SIGNAL(_signalEditSceneLeft(const Ray &)), this,
          SLOT(editingSceneLeft(const Ray &)));
  connect(meshWidget, SIGNAL(_signalEditSceneRight(const Ray &)), this,
          SLOT(editingSceneRight(const Ray &)));

  // New Btn
   connect(uiw->BersteinBtn, SIGNAL(clicked()), this, SLOT(bernsteinEval()));
   connect(uiw->deCastelJauBtn, SIGNAL(clicked()), this, SLOT(deCastelJauEval()));
   connect(uiw->spoonBtn, SIGNAL(clicked()), this, SLOT(displaySpoon()));
   connect(uiw->teapotBtn, SIGNAL(clicked()), this, SLOT(displayTeapot()));
   connect(uiw->teacupBtn, SIGNAL(clicked()), this, SLOT(displayTeacup()));
   connect(uiw->gumboBtn, SIGNAL(clicked()), this, SLOT(displayGumbo()));
  // connect(uiw->baseSurfBtn, SIGNAL(clicked()), this, SLOT(displayBaseSurfaces()));
  // connect(uiw->applyDeformationBtn, SIGNAL(clicked()), this, SLOT(applyDeformationBosjesChapel()));
  connect(uiw->evalUnitSphereBtn, SIGNAL(clicked()), this, SLOT(evaluateSphere()));
  connect(uiw->evamCylinderBtn, SIGNAL(clicked()), this, SLOT(evaluateCylinder()));
  connect(uiw->evalUnitBoxBtn, SIGNAL(clicked()), this, SLOT(evaluateUnitBox()));
  connect(uiw->evalTorusBtn, SIGNAL(clicked()), this, SLOT(evaluateTorus()));
  connect(uiw->evalCapsuleBtn, SIGNAL(clicked()), this, SLOT(evaluateCapsule()));
  connect(uiw->implHeraBuildBtn, SIGNAL(clicked()), this, SLOT(hierarchicalConstruction()));
  connect(uiw->addPacketEroBtn, SIGNAL(clicked()), this, SLOT(addPacketErosion()));
  connect(uiw->incEroBtn, SIGNAL(clicked()), this, SLOT(incrementalErosion()));
}

void MainWindow::editingSceneLeft(const Ray &) {}

void MainWindow::editingSceneRight(const Ray &) {}

void MainWindow::BoxMeshExample() {
  Mesh boxMesh = Mesh(Box(1.0));

  std::vector<Color> cols;
  cols.resize(boxMesh.Vertexes());
  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(double(i) / 6.0, fmod(double(i) * 39.478378, 1.0), 0.0);

  meshColor = MeshColor(boxMesh, cols, boxMesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow::bernsteinEval() {
    int m = uiw->degreespinBox->value();
    int n = m;
    int resolution = uiw->resolutionspinBox->value();
    
    
    std::vector<Vector> p_ij;
    generateControlPoints(p_ij, m, n);
    
    // Results Vertices & Normal
    std::vector<Vector> result(resolution * resolution);
    std::vector<Vector> normals(resolution * resolution);
    
    // Compute Surface
    Bezier bezier(p_ij, result, normals, resolution, m, n);
    auto startTime = std::chrono::high_resolution_clock::now();
    bezier.bernstein2D();
    auto endTime = std::chrono::high_resolution_clock::now();
    double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
    uiw->bezierPerfLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
    //Polygonize Surface
    Mesh m_BezierSurf = bezier.Polygonize();
    
    meshColor = MeshColor(m_BezierSurf);
    UpdateGeometry();
}

void MainWindow::deCastelJauEval() {
    int m = uiw->degreespinBox->value();
    int n = m;
    int resolution = uiw->resolutionspinBox->value();
    
    
    std::vector<Vector> p_ij;
    generateControlPoints(p_ij, m, n);
    
    // Results Vertices & Normal
    std::vector<Vector> result(resolution * resolution);
    std::vector<Vector> normals(resolution * resolution);
    
    // Compute Surface
    Bezier bezier(p_ij, result, normals, resolution, m, n);
    auto startTime = std::chrono::high_resolution_clock::now();
    bezier.deCasteljau2D();
    auto endTime = std::chrono::high_resolution_clock::now();
    double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
    uiw->bezierPerfLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
    //Polygonize Surface
    Mesh m_BezierSurf = bezier.Polygonize();
    
    meshColor = MeshColor(m_BezierSurf);
    UpdateGeometry();
}
//TEASPOON BEZIER
void MainWindow::displaySpoon()
{
  int M = 3;
  int N = M;
  int R = uiw->resolutionspinBox->value();
  uiw->degreespinBox->setValue(3);
  auto startTime = std::chrono::high_resolution_clock::now();
  std::vector<Vector> result(R * R, Vector(0, 0, 0));
  std::vector<Vector> normals(R * R, Vector(0, 0, 0));
  Mesh teaspoonMesh = Mesh();
  auto control_points = readControlPoints("../AppTinyMesh/Data/formatted_teaspoon.dat");
  for (int i = 0; i < control_points.size(); i++)
  {
    Bezier bezier(control_points[i], result, normals, R, M, N);
    bezier.deCasteljau2D();
    teaspoonMesh.Merge(bezier.Polygonize());
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->bezierExempleComputeTime->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  meshColor = MeshColor(teaspoonMesh);
  UpdateGeometry();
}

//TEAPOT BEZIER
void MainWindow::displayTeapot()
{
  int M = 3;
  int N = M;
  int R = uiw->resolutionspinBox->value();
  uiw->degreespinBox->setValue(3);
  auto startTime = std::chrono::high_resolution_clock::now();
  std::vector<Vector> result(R * R, Vector(0, 0, 0));
  std::vector<Vector> normals(R * R, Vector(0, 0, 0));
  Mesh teapotMesh = Mesh();
  auto control_points = readControlPoints("../AppTinyMesh/Data/formatted_teapot.dat");
  for (int i = 0; i < control_points.size(); i++)
  {
    Bezier bezier(control_points[i], result, normals, R, M, N);
    bezier.deCasteljau2D();
    teapotMesh.Merge(bezier.Polygonize());
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->bezierExempleComputeTime->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  std::cout<<"Nombre de Patch\n"<< control_points.size() <<std::endl;
  meshColor = MeshColor(teapotMesh);
  UpdateGeometry();
}

//TEACUP BEZIER
void MainWindow::displayTeacup()
{
  int M = 3;
  int N = M;
  int R = uiw->resolutionspinBox->value();
  uiw->degreespinBox->setValue(3);
  auto startTime = std::chrono::high_resolution_clock::now();
  std::vector<Vector> result(R * R, Vector(0, 0, 0));
  std::vector<Vector> normals(R * R, Vector(0, 0, 0));
  Mesh teacupMesh = Mesh();
  auto control_points = readControlPoints("../AppTinyMesh/Data/formatted_teacup.dat");
  for (int i = 0; i < control_points.size(); i++)
  {
    Bezier bezier(control_points[i], result, normals, R, M, N);
    bezier.deCasteljau2D();
    teacupMesh.Merge(bezier.Polygonize());
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->bezierExempleComputeTime->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  std::cout<<"Nombre de Patch\n"<< control_points.size() <<std::endl;
  meshColor = MeshColor(teacupMesh);
  UpdateGeometry();
}

//GUMBO BEZIER
void MainWindow::displayGumbo()
{
  int M = 3;
  int N = M;
  int R = uiw->resolutionspinBox->value();
  auto startTime = std::chrono::high_resolution_clock::now();
  std::vector<Vector> result(R * R, Vector(0, 0, 0));
  std::vector<Vector> normals(R * R, Vector(0, 0, 0));
  Mesh gumboMesh = Mesh();
  auto control_points = readControlPoints("../AppTinyMesh/Data/formatted_gumbo.dat");
  for (int i = 0; i < control_points.size(); i++)
  {
    Bezier bezier(control_points[i], result, normals, R, M, N);
    bezier.deCasteljau2D();
    gumboMesh.Merge(bezier.Polygonize());
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->bezierExempleComputeTime->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  meshColor = MeshColor(gumboMesh);
  ResetCamera();
  UpdateGeometry();
}

void MainWindow::SphereImplicitExample() {
  AnalyticScalarField implicit;

  Mesh implicitMesh;
  implicit.Polygonize(31, implicitMesh, Box(2.0));

  std::vector<Color> cols;
  cols.resize(implicitMesh.Vertexes());
  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);

  meshColor = MeshColor(implicitMesh, cols, implicitMesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow::hierarchicalConstruction() {
    //Create Car
    auto startTime = std::chrono::high_resolution_clock::now();
    auto Tesla = CreateCar();
    
    MyImplicitSurf mySurface(Tesla);

    // Meshing
    Mesh mesh;
    Box boundingBox(Vector(-1, -1, -1), Vector(10, 10, 10));
    int resolution = 200;
    double epsilon = 1e-6;
    mySurface.Polygonize(resolution, mesh, boundingBox, epsilon);
    auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
   uiw->implConstLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));

  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());
  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}

//EVAL BOX THOUSAND CALL
void MainWindow:: evaluateUnitBox(){

  Box bbox(Vector(-3, -3, -3), Vector(3, 3, 3));
  auto box = std::make_shared<Box_A>(Vector(-0, 0, 0), Vector(1, 1, 1));
  auto sdf = MyImplicitSurf(box);
  auto numEval = 10e7;

  int numIntersections = 0;
  Vector p = Vector(1, 1, 1);
  auto startTime = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < numEval; ++i) {
    box->Value(p);
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
   uiw->evalBoxLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  
  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-3,-3 ,-3),Vector(3,3,3));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow:: evaluateCapsule(){

  Box bbox(Vector(-2, -2, -2), Vector(2, 2, 2));
  auto capsule = std::make_shared<Capsule>(Vector(-1, 0, 0), Vector(1, 0, 0), 0.5);
  auto sdf = MyImplicitSurf(capsule);
  auto numEval = 10e7;

  int numIntersections = 0;
  Vector p = Vector(1, 1, 1);
  auto startTime = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < numEval; ++i) {
    capsule->Value(p);
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->evalCapsLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  
  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-3,-3 ,-3),Vector(3,3,3));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow::evaluateSphere(){

  Box bbox(Vector(-2, -2, -2), Vector(2, 2, 2));
  auto sphere = std::make_shared<Sphere>(Vector(1, 0, 0), 0.5);
  auto sdf = MyImplicitSurf(sphere);
  auto numEval = 10e7;

  int numIntersections = 0;
  Vector p = Vector(1, 1, 1);
  auto startTime = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < numEval; ++i) {
    sphere->Value(p);
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->evalSphereLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  
  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-3,-3 ,-3),Vector(3,3,3));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}


void MainWindow::evaluateCylinder(){

  Box bbox(Vector(-2, -2, -2), Vector(2, 2, 2));
  auto cylinder = std::make_shared<Cylinder>(Vector(0, 0, 0),1,0.5);
  auto sdf = MyImplicitSurf(cylinder);
  auto numEval = 10e7;

  int numIntersections = 0;
  Vector p = Vector(1, 1, 1);
  auto startTime = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < numEval; ++i) {
    cylinder->Value(p);
  }
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->evalCylinderLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  
  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-3,-3 ,-3),Vector(3,3,3));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow::evaluateTorus(){

  Box bbox(Vector(-2, -2, -2), Vector(2, 2, 2));
  auto torus = std::make_shared<Torus>(Vector(0, 0, 0),Vector(0, 1, 0),1,0.5);
  auto sdf = MyImplicitSurf(torus);
  auto numEval = 10e7;

  int numIntersections = 0;
  Vector p = Vector(1, 1, 1);
  auto startTime = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < numEval; ++i) {
    torus->Value(p);
  }
  
  
  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-3,-3 ,-3),Vector(3,3,3));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
  auto endTime = std::chrono::high_resolution_clock::now();
  double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
  uiw->evalTorusLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow:: incrementalErosion() {

  auto car = CreateCar();
  auto sphere = std::make_shared<Sphere>(Vector(0),1);
  auto sdf = MyImplicitSurf(car);
  auto numRays = uiw->nbRayIncspinBox->value();

  Box bbox(Vector(-2),Vector(10));

  int numIntersections = 0;
  auto startTime = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < numRays; ++i) {
      Vector origin = randomPointInBoundingBox(bbox);
      Vector direction = Normalized((Vector(2.5,1,1.5) - origin)); //to center 
      Ray ray(origin, direction);
      double t = 0.0;
      if (sdf.Intersect(ray, t)) {
          Vector intersectionPoint = origin + t * direction;
          double erosionRadius = randomDouble(0.05, 0.1);
          auto erodsphere = std::make_shared<Sphere>(intersectionPoint,erosionRadius);
          sdf.applyErosion(erodsphere);
          numIntersections++;
      }
  }


  




  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-2),Vector(10));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
      auto endTime = std::chrono::high_resolution_clock::now();
    double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
    uiw->incEroLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));
  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}


void MainWindow:: addPacketErosion() {

  auto car = CreateCar();
  auto sphere = std::make_shared<Sphere>(Vector(0),1);
  auto sdf = MyImplicitSurf(car);
  std::shared_ptr<Node> erodeSphere = nullptr;
  Box bbox(Vector(-2),Vector(10));

  auto numRays = uiw->nbRayPacketspinBox->value();
  int numIntersections = 0;
             int numSpheres = 10; 
        double maxOffset = 1; 
  auto startTime = std::chrono::high_resolution_clock::now();


  for (int i = 0; i < numRays; ++i) {
      Vector origin = randomPointInBoundingBox(bbox);
     Vector direction = Normalized((Vector(2.5,1,1.5) - origin)); //to center 
      Ray ray(origin, direction);
      double t = 0.0;
      if (sdf.Intersect(ray, t)) {
          Vector intersectionPoint = origin + t * direction;
          double erosionRadius = randomDouble(0.05, 0.1);

        for (int i = 0; i < numSpheres; ++i) {
            Vector offset (
                randomDouble(-maxOffset, maxOffset),
                randomDouble(-maxOffset, maxOffset),
                randomDouble(-maxOffset, maxOffset)
            );
            Vector erosionCenter = intersectionPoint + offset;
            double erosionRadius = randomDouble(0.05, 0.1);
            if(i==1){
              erodeSphere = nullptr;
              erodeSphere = std::make_shared<Sphere>(intersectionPoint,erosionRadius );
            }
            erodeSphere = std::make_shared<Union>(erodeSphere,std::make_shared<Sphere>(erosionCenter,erosionRadius));
            }
          sdf.applyErosion(erodeSphere);
          numIntersections++;
      }
  }    


  

  int resolution = 100 ;
  double epsilon = 1e-6;
  Box boundindBox = Box(Vector(-2),Vector(10));
  Mesh mesh;
  sdf.Polygonize(resolution,mesh,boundindBox,epsilon);
      auto endTime = std::chrono::high_resolution_clock::now();
    double elapsedTime = std::chrono::duration<double>(endTime - startTime).count();
    uiw->addPacketLine->setText(QString("%1 s").arg(elapsedTime, 0, 'f', 3));

  std::vector<Color> cols;
  cols.resize(mesh.Vertexes());  for (size_t i = 0; i < cols.size(); i++)
    cols[i] = Color(0.8, 0.8, 0.8);
  meshColor = MeshColor(mesh, cols, mesh.VertexIndexes());
  UpdateGeometry();
}

void MainWindow::UpdateGeometry() {

  meshWidget->ClearAll();
  meshWidget->AddMesh("BoxMesh", meshColor);

  uiw->lineEdit->setText(QString::number(meshColor.Vertexes()));
  uiw->lineEdit_2->setText(QString::number(meshColor.Triangles()));

  UpdateMaterial();
}

void MainWindow::UpdateMaterial() {
  meshWidget->UseWireframeGlobal(uiw->wireframe->isChecked());

  if (uiw->radioShadingButton_1->isChecked())
    meshWidget->SetMaterialGlobal(MeshMaterial::Normal);
  else
    meshWidget->SetMaterialGlobal(MeshMaterial::Color);
}

void MainWindow::ResetCamera() {
  meshWidget->SetCamera(Camera(Vector(-10.0), Vector(0.0)));
}
