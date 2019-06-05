#include "QtDialogResize.h"

QtDialogResize::QtDialogResize(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	scaleXY = this->ui.doubleSpinBox;
	scaleX = this->ui.doubleSpinBox_2;
	scaleY = this->ui.doubleSpinBox_3;

	buttonBox = this->ui.buttonBox;

}

QtDialogResize::~QtDialogResize()
{
}

void QtDialogResize::checkXYDimensionFill() {
	double X = scaleX->value();
	double Y = scaleY->value();

	if (X != 0 && Y != 0) {
		emit changeXYDimension(0,X, Y);
	}
}

void QtDialogResize::checkXYFactorFill() {
	double XY = scaleXY->value();

	if (XY != 0) {
		emit changeXYFactor(XY,0,0);
	}
}

