/********************************************************************************
** Form generated from reading UI file 'QtDialogResize.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOGRESIZE_H
#define UI_QTDIALOGRESIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QtDialogResize
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_3;

    void setupUi(QDialog *QtDialogResize)
    {
        if (QtDialogResize->objectName().isEmpty())
            QtDialogResize->setObjectName(QString::fromUtf8("QtDialogResize"));
        QtDialogResize->resize(400, 300);
        buttonBox = new QDialogButtonBox(QtDialogResize);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(QtDialogResize);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 101, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        doubleSpinBox = new QDoubleSpinBox(QtDialogResize);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(280, 40, 81, 41));
        label_2 = new QLabel(QtDialogResize);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 110, 101, 41));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        doubleSpinBox_2 = new QDoubleSpinBox(QtDialogResize);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(280, 110, 81, 41));
        doubleSpinBox_3 = new QDoubleSpinBox(QtDialogResize);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(280, 160, 81, 41));
        label_3 = new QLabel(QtDialogResize);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 160, 101, 41));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(QtDialogResize);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtDialogResize, SLOT(close()));
        QObject::connect(doubleSpinBox_2, SIGNAL(editingFinished()), QtDialogResize, SLOT(checkXYDimensionFill()));
        QObject::connect(doubleSpinBox_3, SIGNAL(editingFinished()), QtDialogResize, SLOT(checkXYDimensionFill()));
        QObject::connect(doubleSpinBox, SIGNAL(editingFinished()), QtDialogResize, SLOT(checkXYFactorFill()));

        QMetaObject::connectSlotsByName(QtDialogResize);
    } // setupUi

    void retranslateUi(QDialog *QtDialogResize)
    {
        QtDialogResize->setWindowTitle(QApplication::translate("QtDialogResize", "QtDialogResize", nullptr));
        label->setText(QApplication::translate("QtDialogResize", "Scale Size X/Y", nullptr));
        label_2->setText(QApplication::translate("QtDialogResize", "Scale Size X", nullptr));
        label_3->setText(QApplication::translate("QtDialogResize", "Scale Size Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialogResize: public Ui_QtDialogResize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOGRESIZE_H
