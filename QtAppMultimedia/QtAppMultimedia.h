#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtAppMultimedia.h"

class QtAppMultimedia : public QMainWindow
{
	Q_OBJECT

public:
	QtAppMultimedia(QWidget *parent = Q_NULLPTR);

	public slots:
void onPushButtonClick();

private:
	Ui::QtAppMultimediaClass ui;
};
