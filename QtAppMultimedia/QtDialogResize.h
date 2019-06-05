#pragma once

#include <QDialog>
#include "ui_QtDialogResize.h"

class QtDialogResize : public QDialog
{
	Q_OBJECT

public:
	QtDialogResize(QWidget *parent = Q_NULLPTR);
	~QtDialogResize();

	QDoubleSpinBox * scaleXY;

	QDoubleSpinBox * scaleX;
	QDoubleSpinBox * scaleY;

	QDialogButtonBox * buttonBox;

	public slots:
	void checkXYDimensionFill();
	void checkXYFactorFill();

	signals:
	void changeXYDimension(double scaleXY=0,double scaleX=0, double scaleY=0);
	void changeXYFactor(double scaleXY=0,double scaleX=0,double scaleY=0);
	

private:
	Ui::QtDialogResize ui;
};
