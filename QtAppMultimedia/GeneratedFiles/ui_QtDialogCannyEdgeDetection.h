/********************************************************************************
** Form generated from reading UI file 'QtDialogCannyEdgeDetection.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOGCANNYEDGEDETECTION_H
#define UI_QTDIALOGCANNYEDGEDETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_QtDialogCannyEdgeDetection
{
public:
    QDialogButtonBox *buttonBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *QtDialogCannyEdgeDetection)
    {
        if (QtDialogCannyEdgeDetection->objectName().isEmpty())
            QtDialogCannyEdgeDetection->setObjectName(QString::fromUtf8("QtDialogCannyEdgeDetection"));
        QtDialogCannyEdgeDetection->resize(400, 300);
        buttonBox = new QDialogButtonBox(QtDialogCannyEdgeDetection);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        doubleSpinBox_3 = new QDoubleSpinBox(QtDialogCannyEdgeDetection);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(290, 180, 81, 41));
        label_2 = new QLabel(QtDialogCannyEdgeDetection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 130, 101, 41));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        doubleSpinBox_2 = new QDoubleSpinBox(QtDialogCannyEdgeDetection);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(290, 130, 81, 41));
        label_3 = new QLabel(QtDialogCannyEdgeDetection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 180, 101, 41));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(QtDialogCannyEdgeDetection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 60, 101, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        doubleSpinBox = new QDoubleSpinBox(QtDialogCannyEdgeDetection);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(290, 60, 81, 41));

        retranslateUi(QtDialogCannyEdgeDetection);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtDialogCannyEdgeDetection, SLOT(close()));

        QMetaObject::connectSlotsByName(QtDialogCannyEdgeDetection);
    } // setupUi

    void retranslateUi(QDialog *QtDialogCannyEdgeDetection)
    {
        QtDialogCannyEdgeDetection->setWindowTitle(QApplication::translate("QtDialogCannyEdgeDetection", "QtDialogCannyEdgeDetection", nullptr));
        label_2->setText(QApplication::translate("QtDialogCannyEdgeDetection", "Low Threshold", nullptr));
        label_3->setText(QApplication::translate("QtDialogCannyEdgeDetection", "High Threshold", nullptr));
        label->setText(QApplication::translate("QtDialogCannyEdgeDetection", "Kernel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtDialogCannyEdgeDetection: public Ui_QtDialogCannyEdgeDetection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOGCANNYEDGEDETECTION_H
