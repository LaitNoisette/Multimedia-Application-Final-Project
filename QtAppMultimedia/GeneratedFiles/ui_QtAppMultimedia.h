/********************************************************************************
** Form generated from reading UI file 'QtAppMultimedia.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTAPPMULTIMEDIA_H
#define UI_QTAPPMULTIMEDIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtAppMultimediaClass
{
public:
    QAction *actionPictureFile;
    QAction *actionDilatation;
    QAction *actionErosion;
    QAction *actionLighten;
    QAction *actionDarken;
    QAction *actionPanorama;
    QAction *actionStitching;
    QAction *actionResizing;
    QAction *actionCanny_Edge_Detection;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *PictureApp;
    QMenuBar *menuBar;
    QMenu *menutoto;
    QMenu *menuDilatation_Erosion;
    QMenu *menuResizing;
    QMenu *menuLighten_Darken;
    QMenu *menuPanorama_Stitching;
    QMenu *menuCanny_Edge_Detection;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtAppMultimediaClass)
    {
        if (QtAppMultimediaClass->objectName().isEmpty())
            QtAppMultimediaClass->setObjectName(QString::fromUtf8("QtAppMultimediaClass"));
        QtAppMultimediaClass->resize(1400, 780);
        actionPictureFile = new QAction(QtAppMultimediaClass);
        actionPictureFile->setObjectName(QString::fromUtf8("actionPictureFile"));
        actionPictureFile->setCheckable(false);
        actionDilatation = new QAction(QtAppMultimediaClass);
        actionDilatation->setObjectName(QString::fromUtf8("actionDilatation"));
        actionErosion = new QAction(QtAppMultimediaClass);
        actionErosion->setObjectName(QString::fromUtf8("actionErosion"));
        actionLighten = new QAction(QtAppMultimediaClass);
        actionLighten->setObjectName(QString::fromUtf8("actionLighten"));
        actionDarken = new QAction(QtAppMultimediaClass);
        actionDarken->setObjectName(QString::fromUtf8("actionDarken"));
        actionPanorama = new QAction(QtAppMultimediaClass);
        actionPanorama->setObjectName(QString::fromUtf8("actionPanorama"));
        actionStitching = new QAction(QtAppMultimediaClass);
        actionStitching->setObjectName(QString::fromUtf8("actionStitching"));
        actionResizing = new QAction(QtAppMultimediaClass);
        actionResizing->setObjectName(QString::fromUtf8("actionResizing"));
        actionCanny_Edge_Detection = new QAction(QtAppMultimediaClass);
        actionCanny_Edge_Detection->setObjectName(QString::fromUtf8("actionCanny_Edge_Detection"));
        centralWidget = new QWidget(QtAppMultimediaClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 72, 23));
        PictureApp = new QLabel(centralWidget);
        PictureApp->setObjectName(QString::fromUtf8("PictureApp"));
        PictureApp->setGeometry(QRect(110, 10, 1280, 720));
        PictureApp->setAlignment(Qt::AlignCenter);
        QtAppMultimediaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtAppMultimediaClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1400, 21));
        menutoto = new QMenu(menuBar);
        menutoto->setObjectName(QString::fromUtf8("menutoto"));
        menuDilatation_Erosion = new QMenu(menuBar);
        menuDilatation_Erosion->setObjectName(QString::fromUtf8("menuDilatation_Erosion"));
        menuResizing = new QMenu(menuBar);
        menuResizing->setObjectName(QString::fromUtf8("menuResizing"));
        menuLighten_Darken = new QMenu(menuBar);
        menuLighten_Darken->setObjectName(QString::fromUtf8("menuLighten_Darken"));
        menuPanorama_Stitching = new QMenu(menuBar);
        menuPanorama_Stitching->setObjectName(QString::fromUtf8("menuPanorama_Stitching"));
        menuCanny_Edge_Detection = new QMenu(menuBar);
        menuCanny_Edge_Detection->setObjectName(QString::fromUtf8("menuCanny_Edge_Detection"));
        QtAppMultimediaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtAppMultimediaClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtAppMultimediaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtAppMultimediaClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtAppMultimediaClass->setStatusBar(statusBar);

        menuBar->addAction(menutoto->menuAction());
        menuBar->addAction(menuDilatation_Erosion->menuAction());
        menuBar->addAction(menuResizing->menuAction());
        menuBar->addAction(menuLighten_Darken->menuAction());
        menuBar->addAction(menuPanorama_Stitching->menuAction());
        menuBar->addAction(menuCanny_Edge_Detection->menuAction());
        menutoto->addAction(actionPictureFile);
        menuDilatation_Erosion->addAction(actionDilatation);
        menuDilatation_Erosion->addAction(actionErosion);
        menuResizing->addAction(actionResizing);
        menuLighten_Darken->addAction(actionLighten);
        menuLighten_Darken->addAction(actionDarken);
        menuPanorama_Stitching->addAction(actionPanorama);
        menuPanorama_Stitching->addAction(actionStitching);
        menuCanny_Edge_Detection->addAction(actionCanny_Edge_Detection);

        retranslateUi(QtAppMultimediaClass);
        QObject::connect(pushButton, SIGNAL(clicked()), QtAppMultimediaClass, SLOT(onPushButtonClick()));
        QObject::connect(PictureApp, SIGNAL(linkHovered(QString)), QtAppMultimediaClass, SLOT(test(QString)));
        QObject::connect(actionDilatation, SIGNAL(triggered()), QtAppMultimediaClass, SLOT(onDilatationClick()));
        QObject::connect(actionErosion, SIGNAL(triggered()), QtAppMultimediaClass, SLOT(onErosionClick()));
        QObject::connect(actionPictureFile, SIGNAL(triggered()), QtAppMultimediaClass, SLOT(onPictureFileClick()));
        QObject::connect(actionResizing, SIGNAL(triggered()), QtAppMultimediaClass, SLOT(onResizingClick()));
        QObject::connect(actionLighten, SIGNAL(triggered()), QtAppMultimediaClass, SLOT(onLightenDarkenClick()));
        QObject::connect(actionCanny_Edge_Detection, SIGNAL(triggered()), QtAppMultimediaClass, SLOT(onCannyEdgeClick()));

        QMetaObject::connectSlotsByName(QtAppMultimediaClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtAppMultimediaClass)
    {
        QtAppMultimediaClass->setWindowTitle(QApplication::translate("QtAppMultimediaClass", "QtAppMultimedia", nullptr));
        actionPictureFile->setText(QApplication::translate("QtAppMultimediaClass", "Picture File", nullptr));
        actionDilatation->setText(QApplication::translate("QtAppMultimediaClass", "Dilatation", nullptr));
        actionErosion->setText(QApplication::translate("QtAppMultimediaClass", "Erosion", nullptr));
        actionLighten->setText(QApplication::translate("QtAppMultimediaClass", "Lighten", nullptr));
        actionDarken->setText(QApplication::translate("QtAppMultimediaClass", "Darken", nullptr));
        actionPanorama->setText(QApplication::translate("QtAppMultimediaClass", "Panorama", nullptr));
        actionStitching->setText(QApplication::translate("QtAppMultimediaClass", "Stitching", nullptr));
        actionResizing->setText(QApplication::translate("QtAppMultimediaClass", "Resizing", nullptr));
        actionCanny_Edge_Detection->setText(QApplication::translate("QtAppMultimediaClass", "Canny Edge Detection", nullptr));
        pushButton->setText(QApplication::translate("QtAppMultimediaClass", "Save", nullptr));
        PictureApp->setText(QString());
        menutoto->setTitle(QApplication::translate("QtAppMultimediaClass", "Settings", nullptr));
        menuDilatation_Erosion->setTitle(QApplication::translate("QtAppMultimediaClass", "Dilatation/Erosion", nullptr));
        menuResizing->setTitle(QApplication::translate("QtAppMultimediaClass", "Resizing", nullptr));
        menuLighten_Darken->setTitle(QApplication::translate("QtAppMultimediaClass", "Lighten/Darken", nullptr));
        menuPanorama_Stitching->setTitle(QApplication::translate("QtAppMultimediaClass", "Panorama/Stitching", nullptr));
        menuCanny_Edge_Detection->setTitle(QApplication::translate("QtAppMultimediaClass", "Canny Edge Detection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtAppMultimediaClass: public Ui_QtAppMultimediaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTAPPMULTIMEDIA_H
