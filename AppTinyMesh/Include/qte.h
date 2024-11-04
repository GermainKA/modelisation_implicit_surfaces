#ifndef __Qte__
#define __Qte__

#include <QtWidgets/qmainwindow.h>
#include "realtime.h"
#include "meshcolor.h"

QT_BEGIN_NAMESPACE
	namespace Ui { class Assets; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT
private:
  Ui::Assets* uiw;           //!< Interface

  MeshWidget* meshWidget;   //!< Viewer
  MeshColor meshColor;		//!< Mesh.

public:
  MainWindow();
  ~MainWindow();
  void CreateActions();
  void UpdateGeometry();

public slots:
  void editingSceneLeft(const Ray&);
  void editingSceneRight(const Ray&);
  void BoxMeshExample();
  void SphereImplicitExample();
  void ResetCamera();
  void UpdateMaterial();

//TP
  void bernsteinEval();
  void deCastelJauEval();
  void displaySpoon();
  void displayTeapot();
  void displayTeacup();
  void displayGumbo();
  // void displayBaseSurfaces();
  // void applyDeformation();
  void evaluateSphere();
  void evaluateUnitBox();
  void evaluateTorus();
  void evaluateCapsule();
  void evaluateCylinder();
  void hierarchicalConstruction();
  void addPacketErosion();
  void incrementalErosion();
};

#endif
