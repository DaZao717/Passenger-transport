/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

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

class Ui_search
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *getzhongdian;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *getbanci;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(400, 300);
        pushButton = new QPushButton(search);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 250, 56, 18));
        widget = new QWidget(search);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 70, 301, 101));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        getzhongdian = new QLineEdit(widget);
        getzhongdian->setObjectName(QString::fromUtf8("getzhongdian"));

        formLayout->setWidget(0, QFormLayout::FieldRole, getzhongdian);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        getbanci = new QLineEdit(widget);
        getbanci->setObjectName(QString::fromUtf8("getbanci"));

        formLayout->setWidget(2, QFormLayout::FieldRole, getbanci);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("search", "\346\237\245\346\211\276", nullptr));
        label->setText(QCoreApplication::translate("search", "\346\214\211\347\273\210\347\202\271\346\237\245\346\211\276", nullptr));
        label_2->setText(QCoreApplication::translate("search", "\346\214\211\347\217\255\346\254\241\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
