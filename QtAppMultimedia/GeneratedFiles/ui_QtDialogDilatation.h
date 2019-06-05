/********************************************************************************
** Form generated from reading UI file 'QtDialogDilatation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOGDILATATION_H
#define UI_QTDIALOGDILATATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QtDialogDilatation
{
public:
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtDialogDilatation)
    {
        if (QtDialogDilatation->objectName().isEmpty())
            QtDialogDilatation->setObjectName(QString::fromUtf8("QtDialogDilatation"));
        QtDialogDilatation->resize(400, 300);
        doubleSpinBox = new QDoubleSpinBox(QtDialogDilatation);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(280, 130, 81, 41));
        label = new QLabel(QtDialogDilatation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 130, 101, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        buttonBox = new QDialogButtonBox(QtDialogDilatation);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(QtDialogDilatation);
        QObject::connect(doubleSpinBox, SIGNAL(valueChanged(double)), QtDialogDilatation, SLOT(onChangeSize()));
        QObject::connect(buttonBox, SIGNAL(accepted()), QtDialogDilatation, SLOT(close()));

        QMetaObject::connectSlotsByName(QtDialogDilatation);
    } // setupUi

    void retranslateUi(QDialog *QtDialogDilatation)
    {
        QtDialogDilatation->setWindowTitle(QApplication::translate("QtDialogDilatation", "QtDialogDilatation", nullptr));
        label->setText(QApplication::translate("QtDialogDilatation", "Dilatation Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialogDilatation: public Ui_QtDialogDilatation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOGDILATATION_H
