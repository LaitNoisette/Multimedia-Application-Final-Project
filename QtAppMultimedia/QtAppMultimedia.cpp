#include "QtAppMultimedia.h"
#include "QtDialogErosion.h"
#include "QtDialogDilatation.h"
#include "QtDialogFileDirectory.h"
#include "QtDialogResize.h"
#include "QtDialogLightenDarken.h"

#define CONNECTCAST(OBJECT,TYPE,FUNC) static_cast<void(OBJECT::*)(TYPE)>(&OBJECT::FUNC)

QtAppMultimedia::QtAppMultimedia(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtAppMultimedia::displayPicture(QString fileNameString) {
	QPixmap displayPicture(fileNameString);
	displayPicture.scaled(ui.PictureApp->width(), ui.PictureApp->height(),Qt::AspectRatioMode::KeepAspectRatio,Qt::TransformationMode::SmoothTransformation);
	ui.PictureApp->setPixmap(displayPicture);
}

void QtAppMultimedia::createTempPictureFileDirectory() {
	QString tempBasis = QString("_temp.jpg");
	tempPictureFileDirectory = QString(pictureFileDirectory);
	tempPictureFileDirectory.chop(4);
	tempPictureFileDirectory.append(tempBasis);
	
}

void QtAppMultimedia::onPushButtonClick() {
	ui.PictureApp->setPixmap(QPixmap("loyalty.svg"));
}


//DILATATION


void QtAppMultimedia::onDilatationClick() {
	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);

	QtDialogDilatation* dialogDilatation=new QtDialogDilatation();
	connect(dialogDilatation->doubleSpinBox,CONNECTCAST(QDoubleSpinBox,double,valueChanged), this, &QtAppMultimedia::onDilatationSizeChange);
	connect(dialogDilatation->buttonBox, &QDialogButtonBox::accepted, this, &QtAppMultimedia::onDilatationValidation);
	dialogDilatation->setModal(false);
	dialogDilatation->exec();
}

void QtAppMultimedia::onDilatationSizeChange(double dilatationSize) {
	modelOpenCV.dilatation(dilatationSize, false);
	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);
}

void QtAppMultimedia::onDilatationValidation() {
	modelOpenCV.setImage(tempPictureFileDirectory.toStdString());
	modelOpenCV.savePicture(pictureFileDirectory.toStdString());
	displayPicture(pictureFileDirectory);

	modelOpenCV.deleteCopyImage(tempPictureFileDirectory.toStdString());
}


//EROSION


void QtAppMultimedia::onErosionClick() {
	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);

	QtDialogErosion* dialogErosion=new QtDialogErosion();
	connect(dialogErosion->doubleSpinBox, CONNECTCAST(QDoubleSpinBox, double, valueChanged), this, &QtAppMultimedia::onDilatationSizeChange);
	connect(dialogErosion->buttonBox, &QDialogButtonBox::accepted, this, &QtAppMultimedia::onDilatationValidation);
	dialogErosion->setModal(false);
	dialogErosion->exec();
}

void QtAppMultimedia::onErosionSizeChange(double erosionSize) {
	modelOpenCV.erosion(erosionSize, false);

	//Handling temp picture
	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);
}

void QtAppMultimedia::onErosionValidation() {
	modelOpenCV.setImage(tempPictureFileDirectory.toStdString());
	modelOpenCV.savePicture(pictureFileDirectory.toStdString());
	displayPicture(pictureFileDirectory);

	//Delete temp picture 
	modelOpenCV.deleteCopyImage(tempPictureFileDirectory.toStdString());
}


//RESIZING


void QtAppMultimedia::onResizingClick() {
	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);

	QtDialogResize * dialogResize = new QtDialogResize();
	//Scale XY Factor
	connect(dialogResize, &QtDialogResize::changeXYFactor, this, &QtAppMultimedia::onResizingSizeChange);
	//Scale XY Dimension
	connect(dialogResize, &QtDialogResize::changeXYDimension, this, &QtAppMultimedia::onResizingSizeChange);

	connect(dialogResize->buttonBox, &QDialogButtonBox::accepted, this, &QtAppMultimedia::onResizingValidation);

	dialogResize->setModal(false);
	dialogResize->exec();
}

void QtAppMultimedia::onResizingSizeChange(double scaleXY,double scaleX,double scaleY) {
	bool changePicture = false;

	if(scaleXY!=0){
		modelOpenCV.resizeFactor(scaleXY,false);
		changePicture = true;
	}
	else if (scaleX !=0 && scaleY !=0)
	{
		modelOpenCV.resize2Dimension(scaleX, scaleY,false);
		changePicture = true;
	}

	if (changePicture) {
		modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
		displayPicture(tempPictureFileDirectory);
	}
}

void QtAppMultimedia::onResizingValidation() {
	modelOpenCV.setImage(tempPictureFileDirectory.toStdString());
	modelOpenCV.savePicture(pictureFileDirectory.toStdString());
	displayPicture(pictureFileDirectory);

	modelOpenCV.deleteCopyImage(tempPictureFileDirectory.toStdString());
}


//LiGHTEN/DARKEN

void QtAppMultimedia::onLightenDarkenClick() {
	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);

	QtDialogLightenDarken * dialogLightenDarken = new QtDialogLightenDarken();
	//Scale Factor
	connect(dialogLightenDarken, &QtDialogLightenDarken::changeLightenDarkenFactor, this, &QtAppMultimedia::onLightenDarkenSizeChange);

	connect(dialogLightenDarken->buttonBox, &QDialogButtonBox::accepted, this, &QtAppMultimedia::onLightenDarkenValidation);

	dialogLightenDarken->setModal(false);
	dialogLightenDarken->exec();
}

void QtAppMultimedia::onLightenDarkenSizeChange(double lightDarkFactor) {
	modelOpenCV.lightenDarken(lightDarkFactor, false);

	modelOpenCV.saveTempPicture(tempPictureFileDirectory.toStdString());
	displayPicture(tempPictureFileDirectory);
}

void QtAppMultimedia::onLightenDarkenValidation() {
	modelOpenCV.setImage(tempPictureFileDirectory.toStdString());
	modelOpenCV.savePicture(pictureFileDirectory.toStdString());
	displayPicture(pictureFileDirectory);

	modelOpenCV.deleteCopyImage(tempPictureFileDirectory.toStdString());
}

//FILEHANDLE


void QtAppMultimedia::onPictureFileClick() {
	QtDialogFileDirectory dialogFileDirectory;
	dialogFileDirectory.setModal(false);
	pictureFileDirectory = dialogFileDirectory.getOpenFileName(this, "Choose Picture File to edit");
	//dialogFileDirectory.exec();
	
	displayPicture(pictureFileDirectory);
	modelOpenCV.setImage(pictureFileDirectory.toStdString());


	createTempPictureFileDirectory();
	modelOpenCV.createCopyImage();

}
