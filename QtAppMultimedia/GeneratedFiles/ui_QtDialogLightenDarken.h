/********************************************************************************
** Form generated from reading UI file 'QtDialogLightenDarken.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOGLIGHTENDARKEN_H
#define UI_QTDIALOGLIGHTENDARKEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QtDialogLightenDarken
{
public:
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtDialogLightenDarken)
    {
        if (QtDialogLightenDarken->objectName().isEmpty())
            QtDialogLightenDarken->setObjectName(QString::fromUtf8("QtDialogLightenDarken"));
        QtDialogLightenDarken->resize(400, 300);
        label = new QLabel(QtDialogLightenDarken);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 160, 141, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        doubleSpinBox = new QDoubleSpinBox(QtDialogLightenDarken);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(270, 160, 81, 41));
        buttonBox = new QDialogButtonBox(QtDialogLightenDarken);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(QtDialogLightenDarken);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtDialogLightenDarken, SLOT(close()));
        QObject::connect(doubleSpinBox, SIGNAL(editingFinished()), QtDialogLightenDarken, SLOT(checkLightDarkFactor()));

        QMetaObject::connectSlotsByName(QtDialogLightenDarken);
    } // setupUi

    void retranslateUi(QDialog *QtDialogLightenDarken)
    {
        QtDialogLightenDarken->setWindowTitle(QApplication::translate("QtDialogLightenDarken", "QtDialogLightenDarken", nullptr));
        label->setText(QApplication::translate("QtDialogLightenDarken", "Lighten/Darken Factor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialogLightenDarken: public Ui_QtDialogLightenDarken {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOGLIGHTENDARKEN_H
