#include "QtDialogCannyEdgeDetection.h"

QtDialogCannyEdgeDetection::QtDialogCannyEdgeDetection(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	kernel = this->ui.doubleSpinBox;
	lowThreshold = this->ui.doubleSpinBox_2;
	highThreshold = this->ui.doubleSpinBox_3;

	buttonBox = this->ui.buttonBox;
}

QtDialogCannyEdgeDetection::~QtDialogCannyEdgeDetection()
{
}

void QtDialogCannyEdgeDetection::checkCannyEdgeParameters() {
	if (kernel->value() != 0 && (lowThreshold->value() != 0 || highThreshold->value() != 0)) {
		emit changeCannyEdgeParameters(kernel->value(), lowThreshold->value(), highThreshold->value());
	}
}