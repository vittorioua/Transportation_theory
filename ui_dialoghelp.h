/********************************************************************************
** Form generated from reading UI file 'dialoghelp.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHELP_H
#define UI_DIALOGHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogHelp
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogHelp)
    {
        if (DialogHelp->objectName().isEmpty())
            DialogHelp->setObjectName(QStringLiteral("DialogHelp"));
        DialogHelp->resize(648, 298);
        graphicsView = new QGraphicsView(DialogHelp);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 711, 261));
        pushButton = new QPushButton(DialogHelp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 270, 75, 23));

        retranslateUi(DialogHelp);

        QMetaObject::connectSlotsByName(DialogHelp);
    } // setupUi

    void retranslateUi(QDialog *DialogHelp)
    {
        DialogHelp->setWindowTitle(QApplication::translate("DialogHelp", "Dialog", 0));
        pushButton->setText(QApplication::translate("DialogHelp", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogHelp: public Ui_DialogHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHELP_H
