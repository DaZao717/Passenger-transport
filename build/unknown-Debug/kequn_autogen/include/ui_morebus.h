/********************************************************************************
** Form generated from reading UI file 'morebus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREBUS_H
#define UI_MOREBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_morebus
{
public:
    QGridLayout *gridLayout;
    QLineEdit *get_zuoweishu;
    QLabel *banci;
    QLineEdit *get_banci;
    QLabel *facheshijian;
    QLabel *zuoweishu;
    QLabel *zhongdian;
    QLineEdit *get_facheshijian;
    QLineEdit *get_zhongdian;
    QPushButton *okButton;

    void setupUi(QDialog *morebus)
    {
        if (morebus->objectName().isEmpty())
            morebus->setObjectName(QString::fromUtf8("morebus"));
        morebus->resize(400, 300);
        gridLayout = new QGridLayout(morebus);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        get_zuoweishu = new QLineEdit(morebus);
        get_zuoweishu->setObjectName(QString::fromUtf8("get_zuoweishu"));

        gridLayout->addWidget(get_zuoweishu, 4, 4, 1, 1);

        banci = new QLabel(morebus);
        banci->setObjectName(QString::fromUtf8("banci"));

        gridLayout->addWidget(banci, 0, 0, 1, 1);

        get_banci = new QLineEdit(morebus);
        get_banci->setObjectName(QString::fromUtf8("get_banci"));

        gridLayout->addWidget(get_banci, 0, 4, 1, 1);

        facheshijian = new QLabel(morebus);
        facheshijian->setObjectName(QString::fromUtf8("facheshijian"));

        gridLayout->addWidget(facheshijian, 3, 0, 1, 1);

        zuoweishu = new QLabel(morebus);
        zuoweishu->setObjectName(QString::fromUtf8("zuoweishu"));

        gridLayout->addWidget(zuoweishu, 4, 0, 1, 1);

        zhongdian = new QLabel(morebus);
        zhongdian->setObjectName(QString::fromUtf8("zhongdian"));

        gridLayout->addWidget(zhongdian, 2, 0, 1, 1);

        get_facheshijian = new QLineEdit(morebus);
        get_facheshijian->setObjectName(QString::fromUtf8("get_facheshijian"));

        gridLayout->addWidget(get_facheshijian, 3, 4, 1, 1);

        get_zhongdian = new QLineEdit(morebus);
        get_zhongdian->setObjectName(QString::fromUtf8("get_zhongdian"));

        gridLayout->addWidget(get_zhongdian, 2, 4, 1, 1);

        okButton = new QPushButton(morebus);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 5, 0, 1, 1);


        retranslateUi(morebus);

        QMetaObject::connectSlotsByName(morebus);
    } // setupUi

    void retranslateUi(QDialog *morebus)
    {
        morebus->setWindowTitle(QCoreApplication::translate("morebus", "Dialog", nullptr));
        banci->setText(QCoreApplication::translate("morebus", "\347\217\255\346\254\241", nullptr));
        facheshijian->setText(QCoreApplication::translate("morebus", "\345\217\221\350\275\246\346\227\266\351\227\264", nullptr));
        zuoweishu->setText(QCoreApplication::translate("morebus", "\345\272\247\344\275\215\346\225\260", nullptr));
        zhongdian->setText(QCoreApplication::translate("morebus", "\347\273\210\347\202\271", nullptr));
        okButton->setText(QCoreApplication::translate("morebus", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class morebus: public Ui_morebus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREBUS_H
