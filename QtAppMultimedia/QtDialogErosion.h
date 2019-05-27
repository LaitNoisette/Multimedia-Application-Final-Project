#pragma once

#include <QDialog>
#include "ui_QtDialogErosion.h"

class QtDialogErosion : public QDialog
{
	Q_OBJECT

public:
	QtDialogErosion(QWidget *parent = Q_NULLPTR);
	~QtDialogErosion();

private:
	Ui::QtDialogErosion ui;
};
