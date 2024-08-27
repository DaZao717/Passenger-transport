/********************************************************************************
** Form generated from reading UI file 'detailedinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILEDINFO_H
#define UI_DETAILEDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detailedinfo
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *buyButton;
    QPushButton *tuiButton;
    QPushButton *printButton;
    QPushButton *okButton;

    void setupUi(QDialog *detailedinfo)
    {
        if (detailedinfo->objectName().isEmpty())
            detailedinfo->setObjectName(QString::fromUtf8("detailedinfo"));
        detailedinfo->resize(581, 496);
        tableWidget = new QTableWidget(detailedinfo);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 30, 431, 441));
        layoutWidget = new QWidget(detailedinfo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(470, 30, 91, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buyButton = new QPushButton(layoutWidget);
        buyButton->setObjectName(QString::fromUtf8("buyButton"));
        buyButton->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(buyButton);

        tuiButton = new QPushButton(layoutWidget);
        tuiButton->setObjectName(QString::fromUtf8("tuiButton"));
        tuiButton->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(tuiButton);

        printButton = new QPushButton(layoutWidget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(printButton);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(0, 35));

        verticalLayout->addWidget(okButton);


        retranslateUi(detailedinfo);

        QMetaObject::connectSlotsByName(detailedinfo);
    } // setupUi

    void retranslateUi(QDialog *detailedinfo)
    {
        detailedinfo->setWindowTitle(QCoreApplication::translate("detailedinfo", "Dialog", nullptr));
        buyButton->setText(QCoreApplication::translate("detailedinfo", "\350\256\242\347\245\250", nullptr));
        tuiButton->setText(QCoreApplication::translate("detailedinfo", "\351\200\200\347\245\250", nullptr));
        printButton->setText(QCoreApplication::translate("detailedinfo", "\346\211\223\345\215\260", nullptr));
        okButton->setText(QCoreApplication::translate("detailedinfo", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class detailedinfo: public Ui_detailedinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILEDINFO_H
