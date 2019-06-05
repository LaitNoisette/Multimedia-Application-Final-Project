#pragma once

#include <QDialog>
#include "ui_QtDialogErosion.h"

class QtDialogErosion : public QDialog
{
	Q_OBJECT

public:
	QtDialogErosion(QWidget *parent = Q_NULLPTR);
	~QtDialogErosion();

	QDoubleSpinBox * doubleSpinBox;
	QDialogButtonBox * buttonBox;

private:
	Ui::QtDialogErosion ui;
};
