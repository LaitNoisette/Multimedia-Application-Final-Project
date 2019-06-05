#pragma once

#include <QtWidgets/QMainWindow>
#include <QDialog>
#include<qobject.h>
#include "ui_QtAppMultimedia.h"
#include"OpenCV_wrapper.h"

class QtAppMultimedia : public QMainWindow
{
	Q_OBJECT

public:
	QtAppMultimedia(QWidget *parent = Q_NULLPTR);
	void displayPicture(QString fileNameString);

	public slots:
void onPushButtonClick();
void onDilatationClick();
void onErosionClick();
void onPictureFileClick();

void onDilatationSizeChange(double dilatationSize);
void onDilatationValidation();

void onErosionSizeChange(double erosionSize);
void onErosionValidation();

void onResizingClick();
void onResizingSizeChange(double scaleXY=0,double scaleX=0,double scaleY=0);
void onResizingValidation();

void onLightenDarkenClick();
void onLightenDarkenSizeChange(double lightDarkFactor);
void onLightenDarkenValidation();

void createTempPictureFileDirectory();

private:
	Ui::QtAppMultimediaClass ui;
	QDialog secDialog;
	OpenCV_wrapper modelOpenCV;
	QString pictureFileDirectory;
	QString tempPictureFileDirectory;
};
