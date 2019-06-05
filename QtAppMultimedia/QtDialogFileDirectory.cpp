#include "QtDialogFileDirectory.h"

QtDialogFileDirectory::QtDialogFileDirectory(QWidget *parent)
	: QFileDialog(parent)
{
	ui.setupUi(this);
}

QtDialogFileDirectory::~QtDialogFileDirectory()
{
}
