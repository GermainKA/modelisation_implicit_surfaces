/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Assets
{
public:
    QAction *actionExit;
    QAction *actionNew_Scene;
    QAction *actionExport_obj;
    QAction *actionExport_ma;
    QAction *actionLoad_ma;
    QAction *actionGL;
    QAction *actionVectorized;
    QAction *actionExport_svg;
    QAction *actionSphere_Tracing_png;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QGroupBox *Objects_groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *tpVerticalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSpinBox *degreespinBox;
    QLabel *label_8;
    QSpinBox *resolutionspinBox;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *bezierPerfLine;
    QPushButton *deCastelJauBtn;
    QPushButton *BersteinBtn;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *teapotBtn;
    QPushButton *teacupBtn;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *spoonBtn;
    QPushButton *gumboBtn;
    QLineEdit *bezierExempleComputeTime;
    QLabel *label_6;
    QLabel *label_11;
    QFormLayout *formLayout_2;
    QPushButton *evalUnitSphereBtn;
    QLineEdit *evalSphereLine;
    QPushButton *evalUnitBoxBtn;
    QLineEdit *evalBoxLine;
    QPushButton *evalTorusBtn;
    QLineEdit *evalTorusLine;
    QPushButton *evalCapsuleBtn;
    QLineEdit *evalCapsLine;
    QPushButton *evamCylinderBtn;
    QLineEdit *evalCylinderLine;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *implHeraBuildBtn;
    QLineEdit *implConstLine;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QSpinBox *nbRayIncspinBox;
    QLineEdit *incEroLine;
    QPushButton *incEroBtn;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QSpinBox *nbRayPacketspinBox;
    QLineEdit *addPacketLine;
    QPushButton *addPacketEroBtn;
    QLabel *label_5;
    QPushButton *baseSurfBtn;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *applyDeformationBtn;
    QLineEdit *addPacketLine_2;
    QPushButton *addPacketEroBtn_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetcameraButton;
    QPushButton *boxMesh;
    QPushButton *sphereImplicit;
    QLabel *label;
    QWidget *widget_GL;
    QGroupBox *Parameters_groupBox;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_13;
    QRadioButton *radioShadingButton_1;
    QCheckBox *wireframe;
    QRadioButton *radioShadingButton_2;
    QPushButton *addPacketEroBtn_3;
    QPushButton *applyDeformationBtn_2;
    QLabel *label_16;
    QLineEdit *addPacketLine_3;
    QPushButton *baseSurfBtn_2;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *Assets)
    {
        if (Assets->objectName().isEmpty())
            Assets->setObjectName("Assets");
        Assets->resize(1200, 1000);
        Assets->setMinimumSize(QSize(420, 300));
        actionExit = new QAction(Assets);
        actionExit->setObjectName("actionExit");
        actionNew_Scene = new QAction(Assets);
        actionNew_Scene->setObjectName("actionNew_Scene");
        actionExport_obj = new QAction(Assets);
        actionExport_obj->setObjectName("actionExport_obj");
        actionExport_ma = new QAction(Assets);
        actionExport_ma->setObjectName("actionExport_ma");
        actionLoad_ma = new QAction(Assets);
        actionLoad_ma->setObjectName("actionLoad_ma");
        actionGL = new QAction(Assets);
        actionGL->setObjectName("actionGL");
        actionVectorized = new QAction(Assets);
        actionVectorized->setObjectName("actionVectorized");
        actionExport_svg = new QAction(Assets);
        actionExport_svg->setObjectName("actionExport_svg");
        actionSphere_Tracing_png = new QAction(Assets);
        actionSphere_Tracing_png->setObjectName("actionSphere_Tracing_png");
        centralwidget = new QWidget(Assets);
        centralwidget->setObjectName("centralwidget");
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        Objects_groupBox = new QGroupBox(centralwidget);
        Objects_groupBox->setObjectName("Objects_groupBox");
        Objects_groupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Objects_groupBox->sizePolicy().hasHeightForWidth());
        Objects_groupBox->setSizePolicy(sizePolicy);
        Objects_groupBox->setMinimumSize(QSize(350, 250));
        verticalLayoutWidget = new QWidget(Objects_groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 60, 331, 729));
        tpVerticalLayout = new QVBoxLayout(verticalLayoutWidget);
        tpVerticalLayout->setObjectName("tpVerticalLayout");
        tpVerticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);

        degreespinBox = new QSpinBox(verticalLayoutWidget);
        degreespinBox->setObjectName("degreespinBox");
        degreespinBox->setMinimum(3);
        degreespinBox->setMaximum(15);

        horizontalLayout_3->addWidget(degreespinBox);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_3->addWidget(label_8);

        resolutionspinBox = new QSpinBox(verticalLayoutWidget);
        resolutionspinBox->setObjectName("resolutionspinBox");
        resolutionspinBox->setMaximum(200);

        horizontalLayout_3->addWidget(resolutionspinBox);


        verticalLayout->addLayout(horizontalLayout_3);


        tpVerticalLayout->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        bezierPerfLine = new QLineEdit(verticalLayoutWidget);
        bezierPerfLine->setObjectName("bezierPerfLine");
        bezierPerfLine->setReadOnly(true);

        horizontalLayout_5->addWidget(bezierPerfLine);

        deCastelJauBtn = new QPushButton(verticalLayoutWidget);
        deCastelJauBtn->setObjectName("deCastelJauBtn");

        horizontalLayout_5->addWidget(deCastelJauBtn);

        BersteinBtn = new QPushButton(verticalLayoutWidget);
        BersteinBtn->setObjectName("BersteinBtn");

        horizontalLayout_5->addWidget(BersteinBtn);


        tpVerticalLayout->addLayout(horizontalLayout_5);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName("label_10");

        tpVerticalLayout->addWidget(label_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        teapotBtn = new QPushButton(verticalLayoutWidget);
        teapotBtn->setObjectName("teapotBtn");

        horizontalLayout_6->addWidget(teapotBtn);

        teacupBtn = new QPushButton(verticalLayoutWidget);
        teacupBtn->setObjectName("teacupBtn");

        horizontalLayout_6->addWidget(teacupBtn);


        tpVerticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        spoonBtn = new QPushButton(verticalLayoutWidget);
        spoonBtn->setObjectName("spoonBtn");

        horizontalLayout_8->addWidget(spoonBtn);

        gumboBtn = new QPushButton(verticalLayoutWidget);
        gumboBtn->setObjectName("gumboBtn");

        horizontalLayout_8->addWidget(gumboBtn);


        tpVerticalLayout->addLayout(horizontalLayout_8);

        bezierExempleComputeTime = new QLineEdit(verticalLayoutWidget);
        bezierExempleComputeTime->setObjectName("bezierExempleComputeTime");

        tpVerticalLayout->addWidget(bezierExempleComputeTime);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        tpVerticalLayout->addWidget(label_6);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName("label_11");

        tpVerticalLayout->addWidget(label_11);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        evalUnitSphereBtn = new QPushButton(verticalLayoutWidget);
        evalUnitSphereBtn->setObjectName("evalUnitSphereBtn");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, evalUnitSphereBtn);

        evalSphereLine = new QLineEdit(verticalLayoutWidget);
        evalSphereLine->setObjectName("evalSphereLine");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, evalSphereLine);

        evalUnitBoxBtn = new QPushButton(verticalLayoutWidget);
        evalUnitBoxBtn->setObjectName("evalUnitBoxBtn");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, evalUnitBoxBtn);

        evalBoxLine = new QLineEdit(verticalLayoutWidget);
        evalBoxLine->setObjectName("evalBoxLine");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, evalBoxLine);

        evalTorusBtn = new QPushButton(verticalLayoutWidget);
        evalTorusBtn->setObjectName("evalTorusBtn");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, evalTorusBtn);

        evalTorusLine = new QLineEdit(verticalLayoutWidget);
        evalTorusLine->setObjectName("evalTorusLine");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, evalTorusLine);

        evalCapsuleBtn = new QPushButton(verticalLayoutWidget);
        evalCapsuleBtn->setObjectName("evalCapsuleBtn");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, evalCapsuleBtn);

        evalCapsLine = new QLineEdit(verticalLayoutWidget);
        evalCapsLine->setObjectName("evalCapsLine");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, evalCapsLine);

        evamCylinderBtn = new QPushButton(verticalLayoutWidget);
        evamCylinderBtn->setObjectName("evamCylinderBtn");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, evamCylinderBtn);

        evalCylinderLine = new QLineEdit(verticalLayoutWidget);
        evalCylinderLine->setObjectName("evalCylinderLine");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, evalCylinderLine);


        tpVerticalLayout->addLayout(formLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        tpVerticalLayout->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        implHeraBuildBtn = new QPushButton(verticalLayoutWidget);
        implHeraBuildBtn->setObjectName("implHeraBuildBtn");

        horizontalLayout_4->addWidget(implHeraBuildBtn);


        tpVerticalLayout->addLayout(horizontalLayout_4);

        implConstLine = new QLineEdit(verticalLayoutWidget);
        implConstLine->setObjectName("implConstLine");

        tpVerticalLayout->addWidget(implConstLine);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName("label_12");

        tpVerticalLayout->addWidget(label_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName("label_13");

        horizontalLayout_10->addWidget(label_13);

        nbRayIncspinBox = new QSpinBox(verticalLayoutWidget);
        nbRayIncspinBox->setObjectName("nbRayIncspinBox");
        nbRayIncspinBox->setMinimum(1);
        nbRayIncspinBox->setMaximum(200);

        horizontalLayout_10->addWidget(nbRayIncspinBox);

        incEroLine = new QLineEdit(verticalLayoutWidget);
        incEroLine->setObjectName("incEroLine");

        horizontalLayout_10->addWidget(incEroLine);

        incEroBtn = new QPushButton(verticalLayoutWidget);
        incEroBtn->setObjectName("incEroBtn");

        horizontalLayout_10->addWidget(incEroBtn);


        tpVerticalLayout->addLayout(horizontalLayout_10);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName("label_14");

        tpVerticalLayout->addWidget(label_14);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName("label_15");

        horizontalLayout_18->addWidget(label_15);

        nbRayPacketspinBox = new QSpinBox(verticalLayoutWidget);
        nbRayPacketspinBox->setObjectName("nbRayPacketspinBox");
        nbRayPacketspinBox->setMinimum(1);
        nbRayPacketspinBox->setMaximum(200);

        horizontalLayout_18->addWidget(nbRayPacketspinBox);

        addPacketLine = new QLineEdit(verticalLayoutWidget);
        addPacketLine->setObjectName("addPacketLine");

        horizontalLayout_18->addWidget(addPacketLine);

        addPacketEroBtn = new QPushButton(verticalLayoutWidget);
        addPacketEroBtn->setObjectName("addPacketEroBtn");

        horizontalLayout_18->addWidget(addPacketEroBtn);


        tpVerticalLayout->addLayout(horizontalLayout_18);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        tpVerticalLayout->addWidget(label_5);

        baseSurfBtn = new QPushButton(verticalLayoutWidget);
        baseSurfBtn->setObjectName("baseSurfBtn");

        tpVerticalLayout->addWidget(baseSurfBtn);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        applyDeformationBtn = new QPushButton(verticalLayoutWidget);
        applyDeformationBtn->setObjectName("applyDeformationBtn");

        horizontalLayout_20->addWidget(applyDeformationBtn);

        addPacketLine_2 = new QLineEdit(verticalLayoutWidget);
        addPacketLine_2->setObjectName("addPacketLine_2");

        horizontalLayout_20->addWidget(addPacketLine_2);

        addPacketEroBtn_2 = new QPushButton(verticalLayoutWidget);
        addPacketEroBtn_2->setObjectName("addPacketEroBtn_2");

        horizontalLayout_20->addWidget(addPacketEroBtn_2);


        tpVerticalLayout->addLayout(horizontalLayout_20);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);


        tpVerticalLayout->addLayout(verticalLayout_3);

        resetcameraButton = new QPushButton(Objects_groupBox);
        resetcameraButton->setObjectName("resetcameraButton");
        resetcameraButton->setGeometry(QRect(120, 20, 91, 23));
        resetcameraButton->setCheckable(true);
        resetcameraButton->setAutoDefault(false);
        resetcameraButton->setFlat(false);
        boxMesh = new QPushButton(Objects_groupBox);
        boxMesh->setObjectName("boxMesh");
        boxMesh->setGeometry(QRect(230, 20, 101, 23));
        boxMesh->setCheckable(false);
        sphereImplicit = new QPushButton(Objects_groupBox);
        sphereImplicit->setObjectName("sphereImplicit");
        sphereImplicit->setGeometry(QRect(10, 20, 101, 23));
        sphereImplicit->setCheckable(false);
        label = new QLabel(Objects_groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 0, 74, 16));

        hboxLayout->addWidget(Objects_groupBox);

        widget_GL = new QWidget(centralwidget);
        widget_GL->setObjectName("widget_GL");

        hboxLayout->addWidget(widget_GL);

        Parameters_groupBox = new QGroupBox(centralwidget);
        Parameters_groupBox->setObjectName("Parameters_groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Parameters_groupBox->sizePolicy().hasHeightForWidth());
        Parameters_groupBox->setSizePolicy(sizePolicy1);
        Parameters_groupBox->setMinimumSize(QSize(450, 141));
        groupBox_4 = new QGroupBox(Parameters_groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 20, 171, 121));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 61, 21));
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(70, 50, 81, 20));
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 50, 61, 21));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 20, 81, 20));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        groupBox_13 = new QGroupBox(Parameters_groupBox);
        groupBox_13->setObjectName("groupBox_13");
        groupBox_13->setGeometry(QRect(190, 20, 251, 121));
        radioShadingButton_1 = new QRadioButton(groupBox_13);
        radioShadingButton_1->setObjectName("radioShadingButton_1");
        radioShadingButton_1->setGeometry(QRect(20, 20, 61, 20));
        radioShadingButton_1->setChecked(true);
        wireframe = new QCheckBox(groupBox_13);
        wireframe->setObjectName("wireframe");
        wireframe->setGeometry(QRect(90, 20, 81, 17));
        wireframe->setChecked(true);
        radioShadingButton_2 = new QRadioButton(groupBox_13);
        radioShadingButton_2->setObjectName("radioShadingButton_2");
        radioShadingButton_2->setGeometry(QRect(20, 50, 61, 20));
        radioShadingButton_2->setChecked(false);
        addPacketEroBtn_3 = new QPushButton(Parameters_groupBox);
        addPacketEroBtn_3->setObjectName("addPacketEroBtn_3");
        addPacketEroBtn_3->setGeometry(QRect(210, 200, 129, 24));
        applyDeformationBtn_2 = new QPushButton(Parameters_groupBox);
        applyDeformationBtn_2->setObjectName("applyDeformationBtn_2");
        applyDeformationBtn_2->setGeometry(QRect(12, 200, 130, 24));
        label_16 = new QLabel(Parameters_groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(11, 147, 329, 16));
        addPacketLine_3 = new QLineEdit(Parameters_groupBox);
        addPacketLine_3->setObjectName("addPacketLine_3");
        addPacketLine_3->setGeometry(QRect(148, 200, 56, 24));
        baseSurfBtn_2 = new QPushButton(Parameters_groupBox);
        baseSurfBtn_2->setObjectName("baseSurfBtn_2");
        baseSurfBtn_2->setGeometry(QRect(11, 169, 329, 24));

        hboxLayout->addWidget(Parameters_groupBox);

        Assets->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Assets);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        Assets->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());

        retranslateUi(Assets);

        resetcameraButton->setDefault(false);


        QMetaObject::connectSlotsByName(Assets);
    } // setupUi

    void retranslateUi(QMainWindow *Assets)
    {
        Assets->setWindowTitle(QCoreApplication::translate("Assets", "Implicit Terrain", nullptr));
        actionExit->setText(QCoreApplication::translate("Assets", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Assets", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Scene->setText(QCoreApplication::translate("Assets", "New Scene", nullptr));
        actionExport_obj->setText(QCoreApplication::translate("Assets", "OBJ File (.obj)", nullptr));
        actionExport_ma->setText(QCoreApplication::translate("Assets", "Maya File (.ma)", nullptr));
        actionLoad_ma->setText(QCoreApplication::translate("Assets", "Load", nullptr));
        actionGL->setText(QCoreApplication::translate("Assets", "GL", nullptr));
        actionVectorized->setText(QCoreApplication::translate("Assets", "Vectorized", nullptr));
        actionExport_svg->setText(QCoreApplication::translate("Assets", "SVG File (.svg)", nullptr));
        actionSphere_Tracing_png->setText(QCoreApplication::translate("Assets", "Sphere Tracing (.png)", nullptr));
        Objects_groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("Assets", "                             BEZIER SURFACES", nullptr));
        label_7->setText(QCoreApplication::translate("Assets", "Performance Tests", nullptr));
        label_9->setText(QCoreApplication::translate("Assets", "Degrees", nullptr));
        label_8->setText(QCoreApplication::translate("Assets", "Resolution", nullptr));
        bezierPerfLine->setText(QString());
        bezierPerfLine->setPlaceholderText(QCoreApplication::translate("Assets", "Compute Time", nullptr));
        deCastelJauBtn->setText(QCoreApplication::translate("Assets", "DeCastelJau", nullptr));
        BersteinBtn->setText(QCoreApplication::translate("Assets", "Bernstein", nullptr));
        label_10->setText(QCoreApplication::translate("Assets", "Exemple of Bezier Surfaces", nullptr));
        teapotBtn->setText(QCoreApplication::translate("Assets", "Teapot", nullptr));
        teacupBtn->setText(QCoreApplication::translate("Assets", "TeaCup", nullptr));
        spoonBtn->setText(QCoreApplication::translate("Assets", "Spoon", nullptr));
        gumboBtn->setText(QCoreApplication::translate("Assets", "Gumbo", nullptr));
        bezierExempleComputeTime->setPlaceholderText(QCoreApplication::translate("Assets", "Exemple Compute Time", nullptr));
        label_6->setText(QCoreApplication::translate("Assets", "                           IMPLICIT SURFACES", nullptr));
        label_11->setText(QCoreApplication::translate("Assets", "Performance Evaluation (10e7 Call)", nullptr));
        evalUnitSphereBtn->setText(QCoreApplication::translate("Assets", "Eval Sphere ", nullptr));
        evalUnitBoxBtn->setText(QCoreApplication::translate("Assets", "Eval Box       ", nullptr));
        evalTorusBtn->setText(QCoreApplication::translate("Assets", "Eval Torus    ", nullptr));
        evalCapsuleBtn->setText(QCoreApplication::translate("Assets", "Eval Capsule", nullptr));
        evamCylinderBtn->setText(QCoreApplication::translate("Assets", "Eval Cylinder", nullptr));
        implHeraBuildBtn->setText(QCoreApplication::translate("Assets", "Hirachique Construction", nullptr));
        implConstLine->setPlaceholderText(QCoreApplication::translate("Assets", "Construction Time", nullptr));
        label_12->setText(QCoreApplication::translate("Assets", "Incremental Erosion", nullptr));
        label_13->setText(QCoreApplication::translate("Assets", "Nbrs of Rays", nullptr));
        incEroBtn->setText(QCoreApplication::translate("Assets", "Apply Inc erosion  ", nullptr));
        label_14->setText(QCoreApplication::translate("Assets", "Packet Erosion (10 / Rays )", nullptr));
        label_15->setText(QCoreApplication::translate("Assets", "Nbrs of Rays", nullptr));
        addPacketEroBtn->setText(QCoreApplication::translate("Assets", "Apply Pck Erosion", nullptr));
        label_5->setText(QCoreApplication::translate("Assets", "                             DEFORMATION", nullptr));
        baseSurfBtn->setText(QCoreApplication::translate("Assets", "Base Surfaces", nullptr));
        applyDeformationBtn->setText(QCoreApplication::translate("Assets", "Apply Local Deform", nullptr));
        addPacketEroBtn_2->setText(QCoreApplication::translate("Assets", "Apply Glob Deform ", nullptr));
#if QT_CONFIG(tooltip)
        resetcameraButton->setToolTip(QCoreApplication::translate("Assets", "<html><head/><body><p><span style=\" color:#5500ff;\">Callback #03</span></p><p><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bird</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        resetcameraButton->setText(QCoreApplication::translate("Assets", "Reset Camera", nullptr));
#if QT_CONFIG(tooltip)
        boxMesh->setToolTip(QCoreApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        boxMesh->setText(QCoreApplication::translate("Assets", "Box Mesh", nullptr));
#if QT_CONFIG(tooltip)
        sphereImplicit->setToolTip(QCoreApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sphereImplicit->setText(QCoreApplication::translate("Assets", "Sphere Implicit", nullptr));
        label->setText(QCoreApplication::translate("Assets", "Default APP", nullptr));
        Parameters_groupBox->setTitle(QString());
        groupBox_4->setTitle(QCoreApplication::translate("Assets", " Statistics", nullptr));
        label_2->setText(QCoreApplication::translate("Assets", "Vertex", nullptr));
        label_3->setText(QCoreApplication::translate("Assets", "Triangles", nullptr));
        lineEdit->setText(QString());
        groupBox_13->setTitle(QCoreApplication::translate("Assets", "Shading", nullptr));
        radioShadingButton_1->setText(QCoreApplication::translate("Assets", "Normal", nullptr));
        wireframe->setText(QCoreApplication::translate("Assets", "Wireframe", nullptr));
        radioShadingButton_2->setText(QCoreApplication::translate("Assets", "Color", nullptr));
        addPacketEroBtn_3->setText(QCoreApplication::translate("Assets", "Apply Glob Deform ", nullptr));
        applyDeformationBtn_2->setText(QCoreApplication::translate("Assets", "Apply Local Deform", nullptr));
        label_16->setText(QCoreApplication::translate("Assets", "                             DEFORMATION", nullptr));
        baseSurfBtn_2->setText(QCoreApplication::translate("Assets", "Base Surfaces", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Assets", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Assets: public Ui_Assets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
