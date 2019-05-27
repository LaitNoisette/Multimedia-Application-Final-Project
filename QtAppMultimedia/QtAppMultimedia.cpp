#include "QtAppMultimedia.h"
#include "QtDialogErosion.h"
#include "QtDialogDilatation.h"

QtAppMultimedia::QtAppMultimedia(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtAppMultimedia::onPushButtonClick() {
	
	ui.PictureApp->setPixmap(QPixmap("loyalty.svg"));
}

void QtAppMultimedia::onDilatationClick() {
	QtDialogDilatation dialogDilatation;
	dialogDilatation.setModal(false);
	dialogDilatation.exec();
}

void QtAppMultimedia::onErosionClick() {
	QtDialogErosion dialogErosion;
	dialogErosion.setModal(false);
	dialogErosion.exec();
}