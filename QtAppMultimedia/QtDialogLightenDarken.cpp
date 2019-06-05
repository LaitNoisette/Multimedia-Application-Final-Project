#include "QtDialogLightenDarken.h"

QtDialogLightenDarken::QtDialogLightenDarken(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	buttonBox= this->ui.buttonBox;
	lightDarkFactor = this->ui.doubleSpinBox;
}

QtDialogLightenDarken::~QtDialogLightenDarken()
{
}

void QtDialogLightenDarken::checkLightDarkFactor() {
	emit changeLightenDarkenFactor(lightDarkFactor->value());
}