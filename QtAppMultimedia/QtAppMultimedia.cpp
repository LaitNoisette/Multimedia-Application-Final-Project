#include "QtAppMultimedia.h"

QtAppMultimedia::QtAppMultimedia(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtAppMultimedia::onPushButtonClick() {
	
	ui.PictureApp->setPixmap(QPixmap("loyalty.svg"));
}

void QtAppMultimedia::onDilatationClick() {

}