/********************************************************************************
** Form generated from reading UI file 'QtDialogFileDirectory.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOGFILEDIRECTORY_H
#define UI_QTDIALOGFILEDIRECTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>

QT_BEGIN_NAMESPACE

class Ui_QtDialogFileDirectory
{
public:

    void setupUi(QFileDialog *QtDialogFileDirectory)
    {
        if (QtDialogFileDirectory->objectName().isEmpty())
            QtDialogFileDirectory->setObjectName(QString::fromUtf8("QtDialogFileDirectory"));
        QtDialogFileDirectory->resize(400, 300);

        retranslateUi(QtDialogFileDirectory);

        QMetaObject::connectSlotsByName(QtDialogFileDirectory);
    } // setupUi

    void retranslateUi(QFileDialog *QtDialogFileDirectory)
    {
        QtDialogFileDirectory->setWindowTitle(QApplication::translate("QtDialogFileDirectory", "QtDialogFileDirectory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialogFileDirectory: public Ui_QtDialogFileDirectory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOGFILEDIRECTORY_H
