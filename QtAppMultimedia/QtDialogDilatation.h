#pragma once

#include <QDialog>
#include "ui_QtDialogDilatation.h"

class QtDialogDilatation : public QDialog
{
	Q_OBJECT

public:
	QtDialogDilatation(QWidget *parent = Q_NULLPTR);
	~QtDialogDilatation();
	
	QDoubleSpinBox * doubleSpinBox;
	QDialogButtonBox * buttonBox;

	public slots:
	

private:
	Ui::QtDialogDilatation ui;
	
};
