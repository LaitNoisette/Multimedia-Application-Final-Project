/********************************************************************************
** Form generated from reading UI file 'QtDialogErosion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOGEROSION_H
#define UI_QTDIALOGEROSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QtDialogErosion
{
public:
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtDialogErosion)
    {
        if (QtDialogErosion->objectName().isEmpty())
            QtDialogErosion->setObjectName(QString::fromUtf8("QtDialogErosion"));
        QtDialogErosion->resize(400, 300);
        doubleSpinBox = new QDoubleSpinBox(QtDialogErosion);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(270, 130, 81, 41));
        label = new QLabel(QtDialogErosion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 130, 101, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        buttonBox = new QDialogButtonBox(QtDialogErosion);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(QtDialogErosion);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtDialogErosion, SLOT(close()));

        QMetaObject::connectSlotsByName(QtDialogErosion);
    } // setupUi

    void retranslateUi(QDialog *QtDialogErosion)
    {
        QtDialogErosion->setWindowTitle(QApplication::translate("QtDialogErosion", "QtDialogErosion", nullptr));
        label->setText(QApplication::translate("QtDialogErosion", "Erosion Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialogErosion: public Ui_QtDialogErosion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOGEROSION_H
