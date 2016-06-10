/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_3;
    QTableView *tableView;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(781, 315);
        verticalLayout_4 = new QVBoxLayout(Dialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(100, 16777215));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(100, 16777215));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_3);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_3);

        tableView = new QTableView(Dialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(497, 0));

        formLayout->setWidget(2, QFormLayout::LabelRole, tableView);

        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(205, 0));
        textBrowser->setMaximumSize(QSize(500, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, textBrowser);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_5->setText(QApplication::translate("Dialog", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\320\265: Rows \320\270 Colums - \321\200\320\260\320\267\320\274\320\265\321\200\320\275\320\276\321\201\321\202\321\214 \320\274\320\260\321\202\321\200\320\270\321\206\321\213 \321\200\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\271, \320\261\320\265\320\267 \321\203\321\207\320\265\321\202\320\260 \320\277\320\276\321\202\321\200\320\265\320\261\320\275\320\276\321\201\321\202\320\265\320\271 \320\270 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\321\213\321\205 \321\200\320\265\321\201\321\203\321\200\321\201\320\276\320\262!", 0));
        label->setText(QApplication::translate("Dialog", "Rows:", 0));
        label_2->setText(QApplication::translate("Dialog", "Colums:", 0));
        pushButton->setText(QApplication::translate("Dialog", "Set", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "Run", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "Clear", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "Help", 0));
        label_4->setText(QApplication::translate("Dialog", "Input data:", 0));
        label_3->setText(QApplication::translate("Dialog", "Result:", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
