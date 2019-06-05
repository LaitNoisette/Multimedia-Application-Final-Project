#pragma once

#include <QDialog>
#include "ui_QtDialogLightenDarken.h"

class QtDialogLightenDarken : public QDialog
{
	Q_OBJECT

public:
	QtDialogLightenDarken(QWidget *parent = Q_NULLPTR);
	~QtDialogLightenDarken();

	QDoubleSpinBox * lightDarkFactor;
	QDialogButtonBox * buttonBox;

	public slots:
	void checkLightDarkFactor();

signals:
	void changeLightenDarkenFactor(double lightDarkFactor);

private:
	Ui::QtDialogLightenDarken ui;
};
