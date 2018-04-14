/********************************************************************************
** Form generated from reading UI file 'zDREGcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZDREGCONTROLDIALOG_H
#define UI_ZDREGCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZDREGControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZDREG;
    QLabel *labelZDREG_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZDREGControlDialog)
    {
        if (ZDREGControlDialog->objectName().isEmpty())
            ZDREGControlDialog->setObjectName(QStringLiteral("ZDREGControlDialog"));
        ZDREGControlDialog->resize(681, 384);
        ZDREGControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZDREGControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZDREGControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZDREGControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZDREG = new QLabel(ZDREGControlDialog);
        labelZDREG->setObjectName(QStringLiteral("labelZDREG"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZDREG);

        labelZDREG_int = new QLabel(ZDREGControlDialog);
        labelZDREG_int->setObjectName(QStringLiteral("labelZDREG_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZDREG_int);

        pushButtonAll = new QPushButton(ZDREGControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZDREGControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zDREG Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZDREGControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZDREGControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZDREGControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZDREGControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZDREGControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZDREGControlDialog)
    {
        ZDREGControlDialog->setWindowTitle(QApplication::translate("ZDREGControlDialog", "Select zDREG to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZDREGControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZDREGControlDialog", "0", Q_NULLPTR));
        labelZDREG->setText(QApplication::translate("ZDREGControlDialog", "zDREG", Q_NULLPTR));
        labelZDREG_int->setText(QApplication::translate("ZDREGControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZDREGControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZDREGControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZDREGControlDialog: public Ui_ZDREGControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZDREGCONTROLDIALOG_H
