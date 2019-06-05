#pragma once

#include <QDialog>
#include "ui_QtDialogCannyEdgeDetection.h"

class QtDialogCannyEdgeDetection : public QDialog
{
	Q_OBJECT

public:
	QtDialogCannyEdgeDetection(QWidget *parent = Q_NULLPTR);
	~QtDialogCannyEdgeDetection();

	QDoubleSpinBox * kernel;

	QDoubleSpinBox * lowThreshold;
	QDoubleSpinBox * highThreshold;

	QDialogButtonBox * buttonBox;


	public slots:
	void checkCannyEdgeParameters();

signals:
	void changeCannyEdgeParameters(int kernel, double lowThres,double highThres);

private:
	Ui::QtDialogCannyEdgeDetection ui;
};
