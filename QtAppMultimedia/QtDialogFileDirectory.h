#pragma once

#include <QFileDialog>
#include "ui_QtDialogFileDirectory.h"

class QtDialogFileDirectory : public QFileDialog
{
	Q_OBJECT

public:
	QtDialogFileDirectory(QWidget *parent = Q_NULLPTR);
	~QtDialogFileDirectory();

private:
	Ui::QtDialogFileDirectory ui;
};
