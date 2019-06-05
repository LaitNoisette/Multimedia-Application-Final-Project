#include "QtDialogErosion.h"

QtDialogErosion::QtDialogErosion(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	doubleSpinBox = this->ui.doubleSpinBox;
	buttonBox = this->ui.buttonBox;
}

QtDialogErosion::~QtDialogErosion()
{
}
