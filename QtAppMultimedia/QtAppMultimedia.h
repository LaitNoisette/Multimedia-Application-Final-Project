#pragma once

#include <QtWidgets/QMainWindow>
#include <QDialog>
#include "ui_QtAppMultimedia.h"

class QtAppMultimedia : public QMainWindow
{
	Q_OBJECT

public:
	QtAppMultimedia(QWidget *parent = Q_NULLPTR);

	public slots:
void onPushButtonClick();
void onDilatationClick();
void onErosionClick();

private:
	Ui::QtAppMultimediaClass ui;
	QDialog secDialog;
};
