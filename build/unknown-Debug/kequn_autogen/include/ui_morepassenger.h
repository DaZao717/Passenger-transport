/********************************************************************************
** Form generated from reading UI file 'morepassenger.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREPASSENGER_H
#define UI_MOREPASSENGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_morepassenger
{
public:
    QLabel *tips;
    QPushButton *okButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *name;
    QLineEdit *getname;
    QLabel *ID;
    QLineEdit *getID;
    QLabel *zuowei;
    QLineEdit *getzuowei;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *morepassenger)
    {
        if (morepassenger->objectName().isEmpty())
            morepassenger->setObjectName(QString::fromUtf8("morepassenger"));
        morepassenger->resize(400, 300);
        tips = new QLabel(morepassenger);
        tips->setObjectName(QString::fromUtf8("tips"));
        tips->setGeometry(QRect(20, 260, 101, 16));
        okButton = new QPushButton(morepassenger);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(305, 260, 61, 21));
        widget = new QWidget(morepassenger);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 351, 201));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMinimumSize(QSize(30, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, name);

        getname = new QLineEdit(widget);
        getname->setObjectName(QString::fromUtf8("getname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, getname);

        ID = new QLabel(widget);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setMinimumSize(QSize(30, 0));

        formLayout->setWidget(2, QFormLayout::LabelRole, ID);

        getID = new QLineEdit(widget);
        getID->setObjectName(QString::fromUtf8("getID"));

        formLayout->setWidget(2, QFormLayout::FieldRole, getID);

        zuowei = new QLabel(widget);
        zuowei->setObjectName(QString::fromUtf8("zuowei"));
        zuowei->setMinimumSize(QSize(30, 0));

        formLayout->setWidget(4, QFormLayout::LabelRole, zuowei);

        getzuowei = new QLineEdit(widget);
        getzuowei->setObjectName(QString::fromUtf8("getzuowei"));

        formLayout->setWidget(4, QFormLayout::FieldRole, getzuowei);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer_2);


        retranslateUi(morepassenger);

        QMetaObject::connectSlotsByName(morepassenger);
    } // setupUi

    void retranslateUi(QDialog *morepassenger)
    {
        morepassenger->setWindowTitle(QCoreApplication::translate("morepassenger", "Dialog", nullptr));
        tips->setText(QCoreApplication::translate("morepassenger", "\357\274\210\345\272\247\344\275\215\344\270\215\345\241\253\345\210\231\350\207\252\345\212\250\345\210\206\351\205\215\357\274\211", nullptr));
        okButton->setText(QCoreApplication::translate("morepassenger", "\347\241\256\350\256\244", nullptr));
        name->setText(QCoreApplication::translate("morepassenger", "\345\247\223\345\220\215", nullptr));
        ID->setText(QCoreApplication::translate("morepassenger", "\350\257\201\344\273\266", nullptr));
        zuowei->setText(QCoreApplication::translate("morepassenger", "\345\272\247\344\275\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class morepassenger: public Ui_morepassenger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREPASSENGER_H
