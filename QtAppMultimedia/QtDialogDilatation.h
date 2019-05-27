#pragma once

#include <QDialog>
#include "ui_QtDialogDilatation.h"

class QtDialogDilatation : public QDialog
{
	Q_OBJECT

public:
	QtDialogDilatation(QWidget *parent = Q_NULLPTR);
	~QtDialogDilatation();

private:
	Ui::QtDialogDilatation ui;
};
