#include "QtDialogDilatation.h"

QtDialogDilatation::QtDialogDilatation(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	doubleSpinBox = this->ui.doubleSpinBox;
	buttonBox=this->ui.buttonBox;
}

QtDialogDilatation::~QtDialogDilatation()
{
}
