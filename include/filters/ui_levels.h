/********************************************************************************
** Form generated from reading UI file 'levels.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELS_H
#define UI_LEVELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_levelsSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *blackSlider;
    QDoubleSpinBox *blackSpinbox;
    QLabel *label_2;
    QSlider *gammaSlider;
    QDoubleSpinBox *gammaSpinbox;
    QLabel *label_3;
    QSlider *whiteSlider;
    QDoubleSpinBox *whiteSpinbox;

    void setupUi(QWidget *levelsSettingsWidget)
    {
        if (levelsSettingsWidget->objectName().isEmpty())
            levelsSettingsWidget->setObjectName(QStringLiteral("levelsSettingsWidget"));
        levelsSettingsWidget->resize(400, 139);
        gridLayout = new QGridLayout(levelsSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(levelsSettingsWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        blackSlider = new QSlider(levelsSettingsWidget);
        blackSlider->setObjectName(QStringLiteral("blackSlider"));
        blackSlider->setMaximum(1000);
        blackSlider->setPageStep(10);
        blackSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blackSlider, 1, 0, 1, 1);

        blackSpinbox = new QDoubleSpinBox(levelsSettingsWidget);
        blackSpinbox->setObjectName(QStringLiteral("blackSpinbox"));
        blackSpinbox->setMaximum(1);
        blackSpinbox->setSingleStep(0.01);

        gridLayout->addWidget(blackSpinbox, 1, 1, 1, 1);

        label_2 = new QLabel(levelsSettingsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        gammaSlider = new QSlider(levelsSettingsWidget);
        gammaSlider->setObjectName(QStringLiteral("gammaSlider"));
        gammaSlider->setMaximum(1000);
        gammaSlider->setPageStep(10);
        gammaSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gammaSlider, 3, 0, 1, 1);

        gammaSpinbox = new QDoubleSpinBox(levelsSettingsWidget);
        gammaSpinbox->setObjectName(QStringLiteral("gammaSpinbox"));
        gammaSpinbox->setMinimum(0.1);
        gammaSpinbox->setMaximum(10);
        gammaSpinbox->setSingleStep(0.01);
        gammaSpinbox->setValue(2);

        gridLayout->addWidget(gammaSpinbox, 3, 1, 1, 1);

        label_3 = new QLabel(levelsSettingsWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        whiteSlider = new QSlider(levelsSettingsWidget);
        whiteSlider->setObjectName(QStringLiteral("whiteSlider"));
        whiteSlider->setMaximum(1000);
        whiteSlider->setPageStep(10);
        whiteSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(whiteSlider, 5, 0, 1, 1);

        whiteSpinbox = new QDoubleSpinBox(levelsSettingsWidget);
        whiteSpinbox->setObjectName(QStringLiteral("whiteSpinbox"));
        whiteSpinbox->setMaximum(1);
        whiteSpinbox->setSingleStep(0.1);

        gridLayout->addWidget(whiteSpinbox, 5, 1, 1, 1);


        retranslateUi(levelsSettingsWidget);

        QMetaObject::connectSlotsByName(levelsSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *levelsSettingsWidget)
    {
        levelsSettingsWidget->setWindowTitle(QApplication::translate("levelsSettingsWidget", "Levels", 0));
        label->setText(QApplication::translate("levelsSettingsWidget", "Black point:", 0));
        label_2->setText(QApplication::translate("levelsSettingsWidget", "Gamma:", 0));
        label_3->setText(QApplication::translate("levelsSettingsWidget", "White point:", 0));
    } // retranslateUi

};

namespace Ui {
    class levelsSettingsWidget: public Ui_levelsSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELS_H
