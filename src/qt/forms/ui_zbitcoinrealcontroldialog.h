/********************************************************************************
** Form generated from reading UI file 'zbitcoinrealcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZBITCOINREALCONTROLDIALOG_H
#define UI_ZBITCOINREALCONTROLDIALOG_H

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

class Ui_ZBitcoinrealControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZBitcoinReal;
    QLabel *labelZBitcoinReal_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZBitcoinrealControlDialog)
    {
        if (ZBitcoinrealControlDialog->objectName().isEmpty())
            ZBitcoinrealControlDialog->setObjectName(QStringLiteral("ZBitcoinrealControlDialog"));
        ZBitcoinrealControlDialog->resize(681, 384);
        ZBitcoinrealControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZBitcoinrealControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZBitcoinrealControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZBitcoinrealControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZBitcoinReal = new QLabel(ZBitcoinrealControlDialog);
        labelZBitcoinReal->setObjectName(QStringLiteral("labelZBitcoinReal"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZBitcoinReal);

        labelZBitcoinReal_int = new QLabel(ZBitcoinrealControlDialog);
        labelZBitcoinReal_int->setObjectName(QStringLiteral("labelZBitcoinReal_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZBitcoinReal_int);

        pushButtonAll = new QPushButton(ZBitcoinrealControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZBitcoinrealControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zBitcoinreal Public ID"));
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

        buttonBox = new QDialogButtonBox(ZBitcoinrealControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZBitcoinrealControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZBitcoinrealControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZBitcoinrealControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZBitcoinrealControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZBitcoinrealControlDialog)
    {
        ZBitcoinrealControlDialog->setWindowTitle(QApplication::translate("ZBitcoinrealControlDialog", "Select zBitcoinreal to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZBitcoinrealControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZBitcoinrealControlDialog", "0", Q_NULLPTR));
        labelZBitcoinReal->setText(QApplication::translate("ZBitcoinrealControlDialog", "zBitcoinreal", Q_NULLPTR));
        labelZBitcoinReal_int->setText(QApplication::translate("ZBitcoinrealControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZBitcoinrealControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZBitcoinrealControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZBitcoinrealControlDialog: public Ui_ZBitcoinrealControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZBITCOINREALCONTROLDIALOG_H
