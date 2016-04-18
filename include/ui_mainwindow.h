/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glhistogramwidget.h"
#include "glvideowidget.h"
#include "roicombobox.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindowUI
{
public:
    QAction *snapshotAction;
    QAction *recordAction;
    QAction *closeFileAction;
    QAction *showVideoAction;
    QAction *showHistogramAction;
    QAction *messageAction;
    QAction *subwindowsAction;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *basicTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *cameraBox;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cameraSelector;
    QPushButton *refreshCamerasButton;
    QLabel *label_9;
    QLabel *label_2;
    QComboBox *pixelFormatSelector;
    QLabel *label_3;
    QLabel *cameraMTUDescription;
    QLabel *label_13;
    QLabel *bandwidthDescription;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *fpsSpinbox;
    QLabel *label_14;
    QLabel *actualFPS;
    QGroupBox *roiBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QSpinBox *xSpinbox;
    QLabel *label_6;
    QSpinBox *ySpinbox;
    QLabel *label_7;
    QSpinBox *wSpinbox;
    QLabel *label_8;
    QSpinBox *hSpinbox;
    QLabel *label_4;
    QSpinBox *binSpinBox;
    QPushButton *applyROIButton;
    QPushButton *resetROIButton;
    QFrame *frame;
    QPushButton *pickROIButton;
    QArv::ROIcomboBox *ROIsizeCombo;
    QGroupBox *Exposure;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QSlider *gainSlider;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *gainSpinbox;
    QPushButton *editGainButton;
    QPushButton *gainAutoButton;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QSlider *exposureSlider;
    QHBoxLayout *horizontalLayout_10;
    QDoubleSpinBox *exposureSpinbox;
    QPushButton *editExposureButton;
    QPushButton *exposureAutoButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *settingsTab;
    QGridLayout *gridLayout_3;
    QGroupBox *transformBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *invertColors;
    QCheckBox *flipHorizontal;
    QCheckBox *flipVertical;
    QComboBox *rotationSelector;
    QGroupBox *miscBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *dropInvalidFrames;
    QCheckBox *markClipped;
    QCheckBox *useFastInterpolator;
    QGroupBox *settingsBox;
    QFormLayout *formLayout_3;
    QLabel *label_22;
    QSpinBox *sliderUpdateSpinbox;
    QLabel *label_23;
    QSpinBox *histogramUpdateSpinbox;
    QLabel *label_24;
    QSpinBox *statusTimeoutSpinbox;
    QCheckBox *nocopyCheck;
    QLabel *label_25;
    QSpinBox *streamFramesSpinbox;
    QGroupBox *postprocBox;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_17;
    QToolButton *postprocAddButton;
    QPushButton *postprocRemoveButton;
    QListView *postprocList;
    QWidget *recordingTab;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *snapshotBox;
    QFormLayout *formLayout_5;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *snappathEdit;
    QPushButton *chooseSnappathButton;
    QLabel *label_21;
    QLineEdit *snapbasenameEdit;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *snapshotRaw;
    QRadioButton *snapshotPNG;
    QGroupBox *videoBox;
    QFormLayout *formLayout_6;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *filenameEdit;
    QPushButton *chooseFilenameButton;
    QLabel *label_17;
    QComboBox *videoFormatSelector;
    QCheckBox *recordInfoCheck;
    QCheckBox *recordTimestampsCheck;
    QCheckBox *recordMetadataCheck;
    QLabel *label_19;
    QRadioButton *stopRecordingManuallyRadio;
    QHBoxLayout *horizontalLayout;
    QRadioButton *stopRecordingFramesRadio;
    QSpinBox *stopRecordingFrames;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *stopRecordingTimeRadio;
    QTimeEdit *stopRecordingTime;
    QSpacerItem *verticalSpacer_3;
    QWidget *advancedTab;
    QVBoxLayout *verticalLayout_9;
    QTreeView *advancedTree;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *saveSettingsButton;
    QPushButton *loadSettingsButton;
    QWidget *aboutTab;
    QGridLayout *gridLayout_4;
    QLabel *aboutLabel;
    QLabel *label_18;
    QDockWidget *videodock;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *playButton;
    QPushButton *unzoomButton;
    QSpacerItem *horizontalSpacer_3;
    QArv::GLVideoWidget *video;
    QDockWidget *histogramdock;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *histogramLog;
    QSpacerItem *horizontalSpacer_2;
    QArv::GLHistogramWidget *histogram;
    QDockWidget *messageDock;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QPlainTextEdit *messageList;
    QToolBar *recordingToolbar;
    QToolBar *subwindowToolbar;
    QButtonGroup *stopRecordingRadios;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *MainWindowUI)
    {
        if (MainWindowUI->objectName().isEmpty())
            MainWindowUI->setObjectName(QStringLiteral("MainWindowUI"));
        MainWindowUI->resize(926, 610);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/qarv.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowUI->setWindowIcon(icon);
        snapshotAction = new QAction(MainWindowUI);
        snapshotAction->setObjectName(QStringLiteral("snapshotAction"));
        snapshotAction->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/snapshot.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        snapshotAction->setIcon(icon1);
        recordAction = new QAction(MainWindowUI);
        recordAction->setObjectName(QStringLiteral("recordAction"));
        recordAction->setCheckable(true);
        QIcon icon2;
        QString iconThemeName = QStringLiteral("media-record");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        recordAction->setIcon(icon2);
        closeFileAction = new QAction(MainWindowUI);
        closeFileAction->setObjectName(QStringLiteral("closeFileAction"));
        closeFileAction->setEnabled(false);
        QIcon icon3;
        iconThemeName = QStringLiteral("media-playback-stop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        closeFileAction->setIcon(icon3);
        showVideoAction = new QAction(MainWindowUI);
        showVideoAction->setObjectName(QStringLiteral("showVideoAction"));
        showVideoAction->setCheckable(true);
        showVideoAction->setChecked(true);
        QIcon icon4;
        iconThemeName = QStringLiteral("video-display");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        showVideoAction->setIcon(icon4);
        showHistogramAction = new QAction(MainWindowUI);
        showHistogramAction->setObjectName(QStringLiteral("showHistogramAction"));
        showHistogramAction->setCheckable(true);
        showHistogramAction->setChecked(true);
        QIcon icon5;
        iconThemeName = QStringLiteral("office-chart-bar");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        showHistogramAction->setIcon(icon5);
        messageAction = new QAction(MainWindowUI);
        messageAction->setObjectName(QStringLiteral("messageAction"));
        messageAction->setCheckable(true);
        messageAction->setChecked(true);
        QIcon icon6;
        iconThemeName = QStringLiteral("dialog-information");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        messageAction->setIcon(icon6);
        subwindowsAction = new QAction(MainWindowUI);
        subwindowsAction->setObjectName(QStringLiteral("subwindowsAction"));
        centralwidget = new QWidget(MainWindowUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        basicTab = new QWidget();
        basicTab->setObjectName(QStringLiteral("basicTab"));
        verticalLayout_2 = new QVBoxLayout(basicTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cameraBox = new QGroupBox(basicTab);
        cameraBox->setObjectName(QStringLiteral("cameraBox"));
        formLayout = new QFormLayout(cameraBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(cameraBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cameraSelector = new QComboBox(cameraBox);
        cameraSelector->setObjectName(QStringLiteral("cameraSelector"));
        cameraSelector->setMinimumContentsLength(30);

        horizontalLayout_4->addWidget(cameraSelector);

        refreshCamerasButton = new QPushButton(cameraBox);
        refreshCamerasButton->setObjectName(QStringLiteral("refreshCamerasButton"));
        QIcon icon7;
        iconThemeName = QStringLiteral("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        refreshCamerasButton->setIcon(icon7);

        horizontalLayout_4->addWidget(refreshCamerasButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        label_9 = new QLabel(cameraBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_9);

        label_2 = new QLabel(cameraBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        pixelFormatSelector = new QComboBox(cameraBox);
        pixelFormatSelector->setObjectName(QStringLiteral("pixelFormatSelector"));
        pixelFormatSelector->setMinimumContentsLength(30);

        formLayout->setWidget(3, QFormLayout::FieldRole, pixelFormatSelector);

        label_3 = new QLabel(cameraBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        cameraMTUDescription = new QLabel(cameraBox);
        cameraMTUDescription->setObjectName(QStringLiteral("cameraMTUDescription"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cameraMTUDescription);

        label_13 = new QLabel(cameraBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_13);

        bandwidthDescription = new QLabel(cameraBox);
        bandwidthDescription->setObjectName(QStringLiteral("bandwidthDescription"));

        formLayout->setWidget(5, QFormLayout::FieldRole, bandwidthDescription);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        fpsSpinbox = new QSpinBox(cameraBox);
        fpsSpinbox->setObjectName(QStringLiteral("fpsSpinbox"));
        fpsSpinbox->setMinimum(1);
        fpsSpinbox->setMaximum(999);

        horizontalLayout_7->addWidget(fpsSpinbox);

        label_14 = new QLabel(cameraBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_7->addWidget(label_14);

        actualFPS = new QLabel(cameraBox);
        actualFPS->setObjectName(QStringLiteral("actualFPS"));

        horizontalLayout_7->addWidget(actualFPS);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_7);


        horizontalLayout_2->addWidget(cameraBox);

        roiBox = new QGroupBox(basicTab);
        roiBox->setObjectName(QStringLiteral("roiBox"));
        verticalLayout_3 = new QVBoxLayout(roiBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_5 = new QLabel(roiBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        xSpinbox = new QSpinBox(roiBox);
        xSpinbox->setObjectName(QStringLiteral("xSpinbox"));
        xSpinbox->setSingleStep(2);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, xSpinbox);

        label_6 = new QLabel(roiBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        ySpinbox = new QSpinBox(roiBox);
        ySpinbox->setObjectName(QStringLiteral("ySpinbox"));
        ySpinbox->setSingleStep(2);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ySpinbox);

        label_7 = new QLabel(roiBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        wSpinbox = new QSpinBox(roiBox);
        wSpinbox->setObjectName(QStringLiteral("wSpinbox"));
        wSpinbox->setSingleStep(2);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, wSpinbox);

        label_8 = new QLabel(roiBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        hSpinbox = new QSpinBox(roiBox);
        hSpinbox->setObjectName(QStringLiteral("hSpinbox"));
        hSpinbox->setSingleStep(2);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, hSpinbox);

        label_4 = new QLabel(roiBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        binSpinBox = new QSpinBox(roiBox);
        binSpinBox->setObjectName(QStringLiteral("binSpinBox"));
        binSpinBox->setMinimum(1);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, binSpinBox);


        verticalLayout_3->addLayout(formLayout_2);

        applyROIButton = new QPushButton(roiBox);
        applyROIButton->setObjectName(QStringLiteral("applyROIButton"));

        verticalLayout_3->addWidget(applyROIButton);

        resetROIButton = new QPushButton(roiBox);
        resetROIButton->setObjectName(QStringLiteral("resetROIButton"));

        verticalLayout_3->addWidget(resetROIButton);

        frame = new QFrame(roiBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame);

        pickROIButton = new QPushButton(roiBox);
        pickROIButton->setObjectName(QStringLiteral("pickROIButton"));
        QIcon icon8;
        iconThemeName = QStringLiteral("edit-select");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        pickROIButton->setIcon(icon8);
        pickROIButton->setCheckable(true);

        verticalLayout_3->addWidget(pickROIButton);

        ROIsizeCombo = new QArv::ROIcomboBox(roiBox);
        ROIsizeCombo->setObjectName(QStringLiteral("ROIsizeCombo"));
        ROIsizeCombo->setInsertPolicy(QComboBox::NoInsert);

        verticalLayout_3->addWidget(ROIsizeCombo);


        horizontalLayout_2->addWidget(roiBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Exposure = new QGroupBox(basicTab);
        Exposure->setObjectName(QStringLiteral("Exposure"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Exposure->sizePolicy().hasHeightForWidth());
        Exposure->setSizePolicy(sizePolicy);
        Exposure->setAlignment(Qt::AlignCenter);
        horizontalLayout_3 = new QHBoxLayout(Exposure);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_10 = new QLabel(Exposure);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_10);

        gainSlider = new QSlider(Exposure);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        gainSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(gainSlider);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gainSpinbox = new QDoubleSpinBox(Exposure);
        gainSpinbox->setObjectName(QStringLiteral("gainSpinbox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gainSpinbox->sizePolicy().hasHeightForWidth());
        gainSpinbox->setSizePolicy(sizePolicy1);
        gainSpinbox->setReadOnly(true);

        horizontalLayout_9->addWidget(gainSpinbox);

        editGainButton = new QPushButton(Exposure);
        editGainButton->setObjectName(QStringLiteral("editGainButton"));
        QIcon icon9;
        iconThemeName = QStringLiteral("edit-clear-locationbar-rtl");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        editGainButton->setIcon(icon9);

        horizontalLayout_9->addWidget(editGainButton);


        verticalLayout_4->addLayout(horizontalLayout_9);

        gainAutoButton = new QPushButton(Exposure);
        gainAutoButton->setObjectName(QStringLiteral("gainAutoButton"));
        gainAutoButton->setCheckable(true);

        verticalLayout_4->addWidget(gainAutoButton);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_11 = new QLabel(Exposure);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_11);

        exposureSlider = new QSlider(Exposure);
        exposureSlider->setObjectName(QStringLiteral("exposureSlider"));
        exposureSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(exposureSlider);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        exposureSpinbox = new QDoubleSpinBox(Exposure);
        exposureSpinbox->setObjectName(QStringLiteral("exposureSpinbox"));
        sizePolicy1.setHeightForWidth(exposureSpinbox->sizePolicy().hasHeightForWidth());
        exposureSpinbox->setSizePolicy(sizePolicy1);
        exposureSpinbox->setReadOnly(true);
        exposureSpinbox->setDecimals(3);
        exposureSpinbox->setSingleStep(0.001);

        horizontalLayout_10->addWidget(exposureSpinbox);

        editExposureButton = new QPushButton(Exposure);
        editExposureButton->setObjectName(QStringLiteral("editExposureButton"));
        editExposureButton->setIcon(icon9);

        horizontalLayout_10->addWidget(editExposureButton);


        verticalLayout_5->addLayout(horizontalLayout_10);

        exposureAutoButton = new QPushButton(Exposure);
        exposureAutoButton->setObjectName(QStringLiteral("exposureAutoButton"));
        exposureAutoButton->setCheckable(true);

        verticalLayout_5->addWidget(exposureAutoButton);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(Exposure);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(basicTab, QString());
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        gridLayout_3 = new QGridLayout(settingsTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        transformBox = new QGroupBox(settingsTab);
        transformBox->setObjectName(QStringLiteral("transformBox"));
        verticalLayout_6 = new QVBoxLayout(transformBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        invertColors = new QCheckBox(transformBox);
        invertColors->setObjectName(QStringLiteral("invertColors"));

        verticalLayout_6->addWidget(invertColors);

        flipHorizontal = new QCheckBox(transformBox);
        flipHorizontal->setObjectName(QStringLiteral("flipHorizontal"));

        verticalLayout_6->addWidget(flipHorizontal);

        flipVertical = new QCheckBox(transformBox);
        flipVertical->setObjectName(QStringLiteral("flipVertical"));

        verticalLayout_6->addWidget(flipVertical);

        rotationSelector = new QComboBox(transformBox);
        rotationSelector->setObjectName(QStringLiteral("rotationSelector"));

        verticalLayout_6->addWidget(rotationSelector);


        gridLayout_3->addWidget(transformBox, 0, 0, 1, 1);

        miscBox = new QGroupBox(settingsTab);
        miscBox->setObjectName(QStringLiteral("miscBox"));
        verticalLayout_7 = new QVBoxLayout(miscBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        dropInvalidFrames = new QCheckBox(miscBox);
        dropInvalidFrames->setObjectName(QStringLiteral("dropInvalidFrames"));
        dropInvalidFrames->setChecked(true);

        verticalLayout_7->addWidget(dropInvalidFrames);

        markClipped = new QCheckBox(miscBox);
        markClipped->setObjectName(QStringLiteral("markClipped"));

        verticalLayout_7->addWidget(markClipped);

        useFastInterpolator = new QCheckBox(miscBox);
        useFastInterpolator->setObjectName(QStringLiteral("useFastInterpolator"));
        useFastInterpolator->setChecked(true);

        verticalLayout_7->addWidget(useFastInterpolator);


        gridLayout_3->addWidget(miscBox, 0, 1, 1, 2);

        settingsBox = new QGroupBox(settingsTab);
        settingsBox->setObjectName(QStringLiteral("settingsBox"));
        formLayout_3 = new QFormLayout(settingsBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_22 = new QLabel(settingsBox);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_22);

        sliderUpdateSpinbox = new QSpinBox(settingsBox);
        sliderUpdateSpinbox->setObjectName(QStringLiteral("sliderUpdateSpinbox"));
        sliderUpdateSpinbox->setMinimum(1);
        sliderUpdateSpinbox->setMaximum(10000);
        sliderUpdateSpinbox->setValue(1000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, sliderUpdateSpinbox);

        label_23 = new QLabel(settingsBox);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_23);

        histogramUpdateSpinbox = new QSpinBox(settingsBox);
        histogramUpdateSpinbox->setObjectName(QStringLiteral("histogramUpdateSpinbox"));
        histogramUpdateSpinbox->setMinimum(1);
        histogramUpdateSpinbox->setMaximum(10000);
        histogramUpdateSpinbox->setValue(100);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, histogramUpdateSpinbox);

        label_24 = new QLabel(settingsBox);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_24);

        statusTimeoutSpinbox = new QSpinBox(settingsBox);
        statusTimeoutSpinbox->setObjectName(QStringLiteral("statusTimeoutSpinbox"));
        statusTimeoutSpinbox->setMinimum(1);
        statusTimeoutSpinbox->setMaximum(1000);
        statusTimeoutSpinbox->setValue(10);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, statusTimeoutSpinbox);

        nocopyCheck = new QCheckBox(settingsBox);
        nocopyCheck->setObjectName(QStringLiteral("nocopyCheck"));
        nocopyCheck->setChecked(true);

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, nocopyCheck);

        label_25 = new QLabel(settingsBox);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_25);

        streamFramesSpinbox = new QSpinBox(settingsBox);
        streamFramesSpinbox->setObjectName(QStringLiteral("streamFramesSpinbox"));
        streamFramesSpinbox->setMinimum(1);
        streamFramesSpinbox->setMaximum(1000);
        streamFramesSpinbox->setValue(30);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, streamFramesSpinbox);


        gridLayout_3->addWidget(settingsBox, 1, 0, 1, 2);

        postprocBox = new QGroupBox(settingsTab);
        postprocBox->setObjectName(QStringLiteral("postprocBox"));
        verticalLayout_12 = new QVBoxLayout(postprocBox);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        postprocAddButton = new QToolButton(postprocBox);
        postprocAddButton->setObjectName(QStringLiteral("postprocAddButton"));
        postprocAddButton->setPopupMode(QToolButton::InstantPopup);
        postprocAddButton->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout_17->addWidget(postprocAddButton);

        postprocRemoveButton = new QPushButton(postprocBox);
        postprocRemoveButton->setObjectName(QStringLiteral("postprocRemoveButton"));

        horizontalLayout_17->addWidget(postprocRemoveButton);


        verticalLayout_12->addLayout(horizontalLayout_17);

        postprocList = new QListView(postprocBox);
        postprocList->setObjectName(QStringLiteral("postprocList"));
        postprocList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        postprocList->setDragEnabled(false);
        postprocList->setDragDropMode(QAbstractItemView::InternalMove);
        postprocList->setDefaultDropAction(Qt::MoveAction);
        postprocList->setAlternatingRowColors(true);
        postprocList->setMovement(QListView::Free);

        verticalLayout_12->addWidget(postprocList);


        gridLayout_3->addWidget(postprocBox, 1, 2, 1, 1);

        tabWidget->addTab(settingsTab, QString());
        recordingTab = new QWidget();
        recordingTab->setObjectName(QStringLiteral("recordingTab"));
        verticalLayout_11 = new QVBoxLayout(recordingTab);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        snapshotBox = new QGroupBox(recordingTab);
        snapshotBox->setObjectName(QStringLiteral("snapshotBox"));
        formLayout_5 = new QFormLayout(snapshotBox);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_15 = new QLabel(snapshotBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        snappathEdit = new QLineEdit(snapshotBox);
        snappathEdit->setObjectName(QStringLiteral("snappathEdit"));

        horizontalLayout_8->addWidget(snappathEdit);

        chooseSnappathButton = new QPushButton(snapshotBox);
        chooseSnappathButton->setObjectName(QStringLiteral("chooseSnappathButton"));
        QIcon icon10;
        iconThemeName = QStringLiteral("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        chooseSnappathButton->setIcon(icon10);

        horizontalLayout_8->addWidget(chooseSnappathButton);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_8);

        label_21 = new QLabel(snapshotBox);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_21);

        snapbasenameEdit = new QLineEdit(snapshotBox);
        snapbasenameEdit->setObjectName(QStringLiteral("snapbasenameEdit"));
        snapbasenameEdit->setText(QStringLiteral("qarv_snapshot-"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, snapbasenameEdit);

        label_16 = new QLabel(snapshotBox);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_16);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        snapshotRaw = new QRadioButton(snapshotBox);
        buttonGroup = new QButtonGroup(MainWindowUI);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(snapshotRaw);
        snapshotRaw->setObjectName(QStringLiteral("snapshotRaw"));

        horizontalLayout_11->addWidget(snapshotRaw);

        snapshotPNG = new QRadioButton(snapshotBox);
        buttonGroup->addButton(snapshotPNG);
        snapshotPNG->setObjectName(QStringLiteral("snapshotPNG"));
        snapshotPNG->setChecked(true);

        horizontalLayout_11->addWidget(snapshotPNG);


        formLayout_5->setLayout(2, QFormLayout::FieldRole, horizontalLayout_11);


        verticalLayout_11->addWidget(snapshotBox);

        videoBox = new QGroupBox(recordingTab);
        videoBox->setObjectName(QStringLiteral("videoBox"));
        formLayout_6 = new QFormLayout(videoBox);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_12 = new QLabel(videoBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        filenameEdit = new QLineEdit(videoBox);
        filenameEdit->setObjectName(QStringLiteral("filenameEdit"));

        horizontalLayout_5->addWidget(filenameEdit);

        chooseFilenameButton = new QPushButton(videoBox);
        chooseFilenameButton->setObjectName(QStringLiteral("chooseFilenameButton"));
        chooseFilenameButton->setIcon(icon10);

        horizontalLayout_5->addWidget(chooseFilenameButton);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        label_17 = new QLabel(videoBox);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_17);

        videoFormatSelector = new QComboBox(videoBox);
        videoFormatSelector->setObjectName(QStringLiteral("videoFormatSelector"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, videoFormatSelector);

        recordInfoCheck = new QCheckBox(videoBox);
        recordInfoCheck->setObjectName(QStringLiteral("recordInfoCheck"));
        recordInfoCheck->setChecked(true);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, recordInfoCheck);

        recordTimestampsCheck = new QCheckBox(videoBox);
        recordTimestampsCheck->setObjectName(QStringLiteral("recordTimestampsCheck"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, recordTimestampsCheck);

        recordMetadataCheck = new QCheckBox(videoBox);
        recordMetadataCheck->setObjectName(QStringLiteral("recordMetadataCheck"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, recordMetadataCheck);

        label_19 = new QLabel(videoBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_19);

        stopRecordingManuallyRadio = new QRadioButton(videoBox);
        stopRecordingRadios = new QButtonGroup(MainWindowUI);
        stopRecordingRadios->setObjectName(QStringLiteral("stopRecordingRadios"));
        stopRecordingRadios->addButton(stopRecordingManuallyRadio);
        stopRecordingManuallyRadio->setObjectName(QStringLiteral("stopRecordingManuallyRadio"));
        stopRecordingManuallyRadio->setChecked(true);

        formLayout_6->setWidget(5, QFormLayout::FieldRole, stopRecordingManuallyRadio);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stopRecordingFramesRadio = new QRadioButton(videoBox);
        stopRecordingRadios->addButton(stopRecordingFramesRadio);
        stopRecordingFramesRadio->setObjectName(QStringLiteral("stopRecordingFramesRadio"));

        horizontalLayout->addWidget(stopRecordingFramesRadio);

        stopRecordingFrames = new QSpinBox(videoBox);
        stopRecordingFrames->setObjectName(QStringLiteral("stopRecordingFrames"));
        stopRecordingFrames->setMinimum(1);
        stopRecordingFrames->setMaximum(100000);
        stopRecordingFrames->setValue(100);

        horizontalLayout->addWidget(stopRecordingFrames);


        formLayout_6->setLayout(6, QFormLayout::FieldRole, horizontalLayout);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        stopRecordingTimeRadio = new QRadioButton(videoBox);
        stopRecordingRadios->addButton(stopRecordingTimeRadio);
        stopRecordingTimeRadio->setObjectName(QStringLiteral("stopRecordingTimeRadio"));

        horizontalLayout_15->addWidget(stopRecordingTimeRadio);

        stopRecordingTime = new QTimeEdit(videoBox);
        stopRecordingTime->setObjectName(QStringLiteral("stopRecordingTime"));
        stopRecordingTime->setDisplayFormat(QStringLiteral("HH:mm:ss"));

        horizontalLayout_15->addWidget(stopRecordingTime);


        formLayout_6->setLayout(7, QFormLayout::FieldRole, horizontalLayout_15);


        verticalLayout_11->addWidget(videoBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        tabWidget->addTab(recordingTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QStringLiteral("advancedTab"));
        verticalLayout_9 = new QVBoxLayout(advancedTab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        advancedTree = new QTreeView(advancedTab);
        advancedTree->setObjectName(QStringLiteral("advancedTree"));
        advancedTree->setAnimated(true);

        verticalLayout_9->addWidget(advancedTree);

        label_20 = new QLabel(advancedTab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setWordWrap(true);

        verticalLayout_9->addWidget(label_20);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        saveSettingsButton = new QPushButton(advancedTab);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));

        horizontalLayout_6->addWidget(saveSettingsButton);

        loadSettingsButton = new QPushButton(advancedTab);
        loadSettingsButton->setObjectName(QStringLiteral("loadSettingsButton"));

        horizontalLayout_6->addWidget(loadSettingsButton);


        verticalLayout_9->addLayout(horizontalLayout_6);

        tabWidget->addTab(advancedTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        gridLayout_4 = new QGridLayout(aboutTab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        aboutLabel = new QLabel(aboutTab);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));
        aboutLabel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        aboutLabel->setWordWrap(true);
        aboutLabel->setOpenExternalLinks(true);

        gridLayout_4->addWidget(aboutLabel, 0, 1, 1, 1);

        label_18 = new QLabel(aboutTab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/icons/qarv.svgz")));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_18, 0, 0, 1, 1);

        tabWidget->addTab(aboutTab, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        videodock = new QDockWidget(MainWindowUI);
        videodock->setObjectName(QStringLiteral("videodock"));
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_8 = new QVBoxLayout(widget_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        playButton = new QPushButton(widget_2);
        playButton->setObjectName(QStringLiteral("playButton"));
        QIcon icon11;
        iconThemeName = QStringLiteral("media-playback-start");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        playButton->setIcon(icon11);
        playButton->setCheckable(true);

        horizontalLayout_14->addWidget(playButton);

        unzoomButton = new QPushButton(widget_2);
        unzoomButton->setObjectName(QStringLiteral("unzoomButton"));
        QIcon icon12;
        iconThemeName = QStringLiteral("zoom-original");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        unzoomButton->setIcon(icon12);
        unzoomButton->setCheckable(true);

        horizontalLayout_14->addWidget(unzoomButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_14);

        video = new QArv::GLVideoWidget(widget_2);
        video->setObjectName(QStringLiteral("video"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(video->sizePolicy().hasHeightForWidth());
        video->setSizePolicy(sizePolicy2);
        video->setMinimumSize(QSize(128, 128));

        verticalLayout_8->addWidget(video);

        videodock->setWidget(widget_2);
        histogramdock = new QDockWidget(MainWindowUI);
        histogramdock->setObjectName(QStringLiteral("histogramdock"));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        histogramLog = new QPushButton(widget);
        histogramLog->setObjectName(QStringLiteral("histogramLog"));
        QIcon icon13;
        iconThemeName = QStringLiteral("view-object-histogram-logarithmic");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        histogramLog->setIcon(icon13);
        histogramLog->setCheckable(true);

        horizontalLayout_13->addWidget(histogramLog);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_13);

        histogram = new QArv::GLHistogramWidget(widget);
        histogram->setObjectName(QStringLiteral("histogram"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(histogram->sizePolicy().hasHeightForWidth());
        histogram->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(histogram);

        histogramdock->setWidget(widget);
        messageDock = new QDockWidget(MainWindowUI);
        messageDock->setObjectName(QStringLiteral("messageDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        messageList = new QPlainTextEdit(dockWidgetContents);
        messageList->setObjectName(QStringLiteral("messageList"));
        messageList->setUndoRedoEnabled(false);
        messageList->setReadOnly(true);

        gridLayout->addWidget(messageList, 0, 0, 1, 1);

        messageDock->setWidget(dockWidgetContents);
        recordingToolbar = new QToolBar(MainWindowUI);
        recordingToolbar->setObjectName(QStringLiteral("recordingToolbar"));
        recordingToolbar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        subwindowToolbar = new QToolBar(MainWindowUI);
        subwindowToolbar->setObjectName(QStringLiteral("subwindowToolbar"));

        recordingToolbar->addAction(snapshotAction);
        recordingToolbar->addAction(recordAction);
        recordingToolbar->addAction(closeFileAction);

        retranslateUi(MainWindowUI);
        QObject::connect(histogramLog, SIGNAL(toggled(bool)), histogram, SLOT(setLogarithmic(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowUI);
    } // setupUi

    void retranslateUi(QWidget *MainWindowUI)
    {
        MainWindowUI->setWindowTitle(QApplication::translate("MainWindowUI", "QArv", 0));
        snapshotAction->setText(QApplication::translate("MainWindowUI", "Snapshot", 0));
#ifndef QT_NO_TOOLTIP
        snapshotAction->setToolTip(QApplication::translate("MainWindowUI", "Store a snapshot.", 0));
#endif // QT_NO_TOOLTIP
        recordAction->setText(QApplication::translate("MainWindowUI", "Record", 0));
#ifndef QT_NO_TOOLTIP
        recordAction->setToolTip(QApplication::translate("MainWindowUI", "Record video. Depress to pause recording, press again to resume.", 0));
#endif // QT_NO_TOOLTIP
        closeFileAction->setText(QApplication::translate("MainWindowUI", "Finish", 0));
#ifndef QT_NO_TOOLTIP
        closeFileAction->setToolTip(QApplication::translate("MainWindowUI", "Depressing the Record button normally pauses recording, which can be resumed. Press this button to finalize the recording.", 0));
#endif // QT_NO_TOOLTIP
        showVideoAction->setText(QApplication::translate("MainWindowUI", "Video Display", 0));
#ifndef QT_NO_TOOLTIP
        showVideoAction->setToolTip(QApplication::translate("MainWindowUI", "Show or hide video display.", 0));
#endif // QT_NO_TOOLTIP
        showHistogramAction->setText(QApplication::translate("MainWindowUI", "Histogram", 0));
#ifndef QT_NO_TOOLTIP
        showHistogramAction->setToolTip(QApplication::translate("MainWindowUI", "Show or hide histogram display.", 0));
#endif // QT_NO_TOOLTIP
        messageAction->setText(QApplication::translate("MainWindowUI", "Diagnostic Log", 0));
#ifndef QT_NO_TOOLTIP
        messageAction->setToolTip(QApplication::translate("MainWindowUI", "Show or hide diagnostic log.", 0));
#endif // QT_NO_TOOLTIP
        subwindowsAction->setText(QApplication::translate("MainWindowUI", "Subwindows...", 0));
        subwindowsAction->setIconText(QApplication::translate("MainWindowUI", "Subwindows...", 0));
#ifndef QT_NO_TOOLTIP
        subwindowsAction->setToolTip(QApplication::translate("MainWindowUI", "Subwindows", 0));
#endif // QT_NO_TOOLTIP
        cameraBox->setTitle(QApplication::translate("MainWindowUI", "Camera", 0));
        label->setText(QApplication::translate("MainWindowUI", "Camera:", 0));
#ifndef QT_NO_TOOLTIP
        cameraSelector->setToolTip(QApplication::translate("MainWindowUI", "Select camera.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        refreshCamerasButton->setToolTip(QApplication::translate("MainWindowUI", "Refresh camera list.", 0));
#endif // QT_NO_TOOLTIP
        refreshCamerasButton->setText(QString());
        label_9->setText(QApplication::translate("MainWindowUI", "FPS:", 0));
        label_2->setText(QApplication::translate("MainWindowUI", "Pixel format:", 0));
#ifndef QT_NO_TOOLTIP
        pixelFormatSelector->setToolTip(QApplication::translate("MainWindowUI", "Select the camera's pixel format.", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindowUI", "Ethernet MTU:", 0));
        cameraMTUDescription->setText(QApplication::translate("MainWindowUI", "Not an ethernet camera.", 0));
        label_13->setText(QApplication::translate("MainWindowUI", "Bandwidth:", 0));
        bandwidthDescription->setText(QApplication::translate("MainWindowUI", "Not an ethernet camera.", 0));
#ifndef QT_NO_TOOLTIP
        fpsSpinbox->setToolTip(QApplication::translate("MainWindowUI", "Camera's frame rate setting.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("MainWindowUI", "Actual frame rate.", 0));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("MainWindowUI", "Actual: ", 0));
#ifndef QT_NO_TOOLTIP
        actualFPS->setToolTip(QApplication::translate("MainWindowUI", "Actual frame rate.", 0));
#endif // QT_NO_TOOLTIP
        actualFPS->setText(QString());
        roiBox->setTitle(QApplication::translate("MainWindowUI", "Region of interest", 0));
        label_5->setText(QApplication::translate("MainWindowUI", "X of origin:", 0));
        label_6->setText(QApplication::translate("MainWindowUI", "Y of origin:", 0));
        label_7->setText(QApplication::translate("MainWindowUI", "Width:", 0));
        label_8->setText(QApplication::translate("MainWindowUI", "Height:", 0));
        label_4->setText(QApplication::translate("MainWindowUI", "Binning:", 0));
#ifndef QT_NO_TOOLTIP
        applyROIButton->setToolTip(QApplication::translate("MainWindowUI", "Set the camera's ROI.", 0));
#endif // QT_NO_TOOLTIP
        applyROIButton->setText(QApplication::translate("MainWindowUI", "Apply", 0));
#ifndef QT_NO_TOOLTIP
        resetROIButton->setToolTip(QApplication::translate("MainWindowUI", "Reset ROI to the maximum, effective immediately.", 0));
#endif // QT_NO_TOOLTIP
        resetROIButton->setText(QApplication::translate("MainWindowUI", "Whole image", 0));
#ifndef QT_NO_TOOLTIP
        pickROIButton->setToolTip(QApplication::translate("MainWindowUI", "Select ROI by drawing a rectangle on the video display.", 0));
#endif // QT_NO_TOOLTIP
        pickROIButton->setText(QApplication::translate("MainWindowUI", "Pick", 0));
#ifndef QT_NO_TOOLTIP
        ROIsizeCombo->setToolTip(QApplication::translate("MainWindowUI", "Choose a size of ROI used for picking.", 0));
#endif // QT_NO_TOOLTIP
        Exposure->setTitle(QApplication::translate("MainWindowUI", "Exposure", 0));
        label_10->setText(QApplication::translate("MainWindowUI", "Gain:", 0));
#ifndef QT_NO_TOOLTIP
        editGainButton->setToolTip(QApplication::translate("MainWindowUI", "Enter value manually.", 0));
#endif // QT_NO_TOOLTIP
        editGainButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        gainAutoButton->setToolTip(QApplication::translate("MainWindowUI", "Let camera control sensor gain.", 0));
#endif // QT_NO_TOOLTIP
        gainAutoButton->setText(QApplication::translate("MainWindowUI", "Auto", 0));
        label_11->setText(QApplication::translate("MainWindowUI", "Exposure:", 0));
        exposureSpinbox->setSuffix(QApplication::translate("MainWindowUI", " ms", 0));
#ifndef QT_NO_TOOLTIP
        editExposureButton->setToolTip(QApplication::translate("MainWindowUI", "Enter value manually.", 0));
#endif // QT_NO_TOOLTIP
        editExposureButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        exposureAutoButton->setToolTip(QApplication::translate("MainWindowUI", "Let camera control exposure time.", 0));
#endif // QT_NO_TOOLTIP
        exposureAutoButton->setText(QApplication::translate("MainWindowUI", "Auto", 0));
        tabWidget->setTabText(tabWidget->indexOf(basicTab), QApplication::translate("MainWindowUI", "Basic settings", 0));
        transformBox->setTitle(QApplication::translate("MainWindowUI", "Transform image", 0));
        invertColors->setText(QApplication::translate("MainWindowUI", "Invert colors", 0));
        flipHorizontal->setText(QApplication::translate("MainWindowUI", "Flip horizontally", 0));
        flipVertical->setText(QApplication::translate("MainWindowUI", "Flip vertically", 0));
        miscBox->setTitle(QApplication::translate("MainWindowUI", "Miscellaneous image settings", 0));
#ifndef QT_NO_TOOLTIP
        dropInvalidFrames->setToolTip(QApplication::translate("MainWindowUI", "Invalid frames will not be recorded and will be displayed as pure red.", 0));
#endif // QT_NO_TOOLTIP
        dropInvalidFrames->setText(QApplication::translate("MainWindowUI", "Drop incomplete/invalid frames", 0));
#ifndef QT_NO_TOOLTIP
        markClipped->setToolTip(QApplication::translate("MainWindowUI", "Overexposed pixels are colored pink.", 0));
#endif // QT_NO_TOOLTIP
        markClipped->setText(QApplication::translate("MainWindowUI", "Mark clipped highlights", 0));
#ifndef QT_NO_TOOLTIP
        useFastInterpolator->setToolTip(QApplication::translate("MainWindowUI", "Only affects certain pixel formats. Colors are calculated using a less exact interpolation.", 0));
#endif // QT_NO_TOOLTIP
        useFastInterpolator->setText(QApplication::translate("MainWindowUI", "Use fast color approximation", 0));
        settingsBox->setTitle(QApplication::translate("MainWindowUI", "Program settings", 0));
        label_22->setText(QApplication::translate("MainWindowUI", "Exposure readout interval:", 0));
#ifndef QT_NO_TOOLTIP
        sliderUpdateSpinbox->setToolTip(QApplication::translate("MainWindowUI", "Exposure and gain are periodically updated and sliders moved accordingly.", 0));
#endif // QT_NO_TOOLTIP
        sliderUpdateSpinbox->setSuffix(QApplication::translate("MainWindowUI", " ms", 0));
        label_23->setText(QApplication::translate("MainWindowUI", "Histogram update interval:", 0));
#ifndef QT_NO_TOOLTIP
        histogramUpdateSpinbox->setToolTip(QApplication::translate("MainWindowUI", "Calculating the histogram can be expensive, so it shouldn't be updated too often.", 0));
#endif // QT_NO_TOOLTIP
        histogramUpdateSpinbox->setSuffix(QApplication::translate("MainWindowUI", " ms", 0));
        label_24->setText(QApplication::translate("MainWindowUI", "Status message timeout:", 0));
#ifndef QT_NO_TOOLTIP
        statusTimeoutSpinbox->setToolTip(QApplication::translate("MainWindowUI", "A message is shown in the status bar on certain events or errors. This message is cleared after the specified interval.", 0));
#endif // QT_NO_TOOLTIP
        statusTimeoutSpinbox->setSuffix(QApplication::translate("MainWindowUI", " s", 0));
#ifndef QT_NO_TOOLTIP
        nocopyCheck->setToolTip(QApplication::translate("MainWindowUI", "If this option is selected, as little copying of images is done as possible, making the program significantly faster. But, if the computer is too slow to process images in a timely manner, it may happen that the camera will be faster and will overwrite a current image. If this is a problem, disable this option.", 0));
#endif // QT_NO_TOOLTIP
        nocopyCheck->setText(QApplication::translate("MainWindowUI", "Transfer frames without copying", 0));
        label_25->setText(QApplication::translate("MainWindowUI", "Buffer size:", 0));
#ifndef QT_NO_TOOLTIP
        streamFramesSpinbox->setToolTip(QApplication::translate("MainWindowUI", "<html><head/><body><p>This setting controls the number of frames standing ready for camera to fill, ensuring smooth operation. If the frames arrive faster than they can be decoded and/or recorded, the buffer will underflow. If this happens intermittently, increase the buffer size. It it happens regularly, your system is too slow to handle the workload.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        streamFramesSpinbox->setSuffix(QApplication::translate("MainWindowUI", " frames", 0));
        postprocBox->setTitle(QApplication::translate("MainWindowUI", "Image postprocessing chain", 0));
        postprocAddButton->setText(QApplication::translate("MainWindowUI", "Add filter...", 0));
        postprocRemoveButton->setText(QApplication::translate("MainWindowUI", "Remove filter", 0));
        tabWidget->setTabText(tabWidget->indexOf(settingsTab), QApplication::translate("MainWindowUI", "Settings", 0));
        snapshotBox->setTitle(QApplication::translate("MainWindowUI", "Snapshots", 0));
        label_15->setText(QApplication::translate("MainWindowUI", "Snapshot directory:", 0));
#ifndef QT_NO_TOOLTIP
        snappathEdit->setToolTip(QApplication::translate("MainWindowUI", "Snapshots will be put in this directory.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        chooseSnappathButton->setToolTip(QApplication::translate("MainWindowUI", "Open directory.", 0));
#endif // QT_NO_TOOLTIP
        chooseSnappathButton->setText(QString());
        label_21->setText(QApplication::translate("MainWindowUI", "Snapshot basename:", 0));
#ifndef QT_NO_TOOLTIP
        snapbasenameEdit->setToolTip(QApplication::translate("MainWindowUI", "Snapshot file names will begin with this basename and will have the current date and time appended.", 0));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("MainWindowUI", "Snapshot format:", 0));
#ifndef QT_NO_TOOLTIP
        snapshotRaw->setToolTip(QApplication::translate("MainWindowUI", "Frame data is simply dumped into the file undecoded.", 0));
#endif // QT_NO_TOOLTIP
        snapshotRaw->setText(QApplication::translate("MainWindowUI", "Raw data", 0));
#ifndef QT_NO_TOOLTIP
        snapshotPNG->setToolTip(QApplication::translate("MainWindowUI", "The saved snapshot is as shown in the Video Display.", 0));
#endif // QT_NO_TOOLTIP
        snapshotPNG->setText(QApplication::translate("MainWindowUI", "PNG image", 0));
        videoBox->setTitle(QApplication::translate("MainWindowUI", "Video", 0));
        label_12->setText(QApplication::translate("MainWindowUI", "Video file:", 0));
#ifndef QT_NO_TOOLTIP
        filenameEdit->setToolTip(QApplication::translate("MainWindowUI", "The file to store recorded video.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        chooseFilenameButton->setToolTip(QApplication::translate("MainWindowUI", "Open file.", 0));
#endif // QT_NO_TOOLTIP
        chooseFilenameButton->setText(QString());
        label_17->setText(QApplication::translate("MainWindowUI", "Video format:", 0));
#ifndef QT_NO_TOOLTIP
        videoFormatSelector->setToolTip(QApplication::translate("MainWindowUI", "Choose format of recorded video.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        recordInfoCheck->setToolTip(QApplication::translate("MainWindowUI", "Raw video formats do not contain any identifying information in the video file itself. If checked, an additional file with a .qarv extension will be created and will contain video format information. This file can be opened with the qarv video player.", 0));
#endif // QT_NO_TOOLTIP
        recordInfoCheck->setText(QApplication::translate("MainWindowUI", "Write video information file", 0));
#ifndef QT_NO_TOOLTIP
        recordTimestampsCheck->setToolTip(QApplication::translate("MainWindowUI", "An additional file with a .timestamps extension will be created and will contain frame timestamps in nanoseconds, one per line, in text form.", 0));
#endif // QT_NO_TOOLTIP
        recordTimestampsCheck->setText(QApplication::translate("MainWindowUI", "Write timestamp file", 0));
#ifndef QT_NO_TOOLTIP
        recordMetadataCheck->setToolTip(QApplication::translate("MainWindowUI", "Creates an additional file with .caminfo extension. It can be loaded using Advanced settings tab.", 0));
#endif // QT_NO_TOOLTIP
        recordMetadataCheck->setText(QApplication::translate("MainWindowUI", "Dump camera settings along with the video", 0));
        label_19->setText(QApplication::translate("MainWindowUI", "Stop recording:", 0));
#ifndef QT_NO_TOOLTIP
        stopRecordingManuallyRadio->setToolTip(QApplication::translate("MainWindowUI", "Recording will not be stopped automatically.", 0));
#endif // QT_NO_TOOLTIP
        stopRecordingManuallyRadio->setText(QApplication::translate("MainWindowUI", "Manually", 0));
#ifndef QT_NO_TOOLTIP
        stopRecordingFramesRadio->setToolTip(QApplication::translate("MainWindowUI", "Recording will be stopped when the specified number of frames is recorded.", 0));
#endif // QT_NO_TOOLTIP
        stopRecordingFramesRadio->setText(QApplication::translate("MainWindowUI", "After this many frames:", 0));
#ifndef QT_NO_TOOLTIP
        stopRecordingTimeRadio->setToolTip(QApplication::translate("MainWindowUI", "Recording will be stopped when the specified amount of time elapses. Time is specified as hours:minutes:seconds.", 0));
#endif // QT_NO_TOOLTIP
        stopRecordingTimeRadio->setText(QApplication::translate("MainWindowUI", "After this much time:", 0));
        tabWidget->setTabText(tabWidget->indexOf(recordingTab), QApplication::translate("MainWindowUI", "Recording", 0));
        label_20->setText(QApplication::translate("MainWindowUI", "<html><head/><body><p>This view provides direct access to the camera. Changes may not be reflected in the rest of the program.</p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        saveSettingsButton->setToolTip(QApplication::translate("MainWindowUI", "Choose a file to store camera settings.", 0));
#endif // QT_NO_TOOLTIP
        saveSettingsButton->setText(QApplication::translate("MainWindowUI", "Save settings", 0));
#ifndef QT_NO_TOOLTIP
        loadSettingsButton->setToolTip(QApplication::translate("MainWindowUI", "Choose a file to load camera settings.", 0));
#endif // QT_NO_TOOLTIP
        loadSettingsButton->setText(QApplication::translate("MainWindowUI", "Load Settings", 0));
        tabWidget->setTabText(tabWidget->indexOf(advancedTab), QApplication::translate("MainWindowUI", "Camera features", 0));
        aboutLabel->setText(QApplication::translate("MainWindowUI", "<html><head/><body><p><span style=\" font-size:x-large; font-weight:600;\">QArv</span></p><p><span style=\" font-weight:600;\">Version %1.</span></p><p>A GUI interface to Genicam ethernet cameras.</p><p>Copyright \302\251 2012-2015 Jure Varlec and Andrej Lajovic, Vega Astronomical Society \342\200\224 Ljubljana</p><p>QArv is provided under the GNU General Public License, version 3 or later. The license text is provided with the program and is also available at the <a href=\"http://www.gnu.org/licenses/gpl.html\"><span style=\" text-decoration: underline; color:#0057ae;\">Free Software Foundation web page</span></a>.</p><p>The icons included with QArv are part of the oxygen theme from the <a href=\"http://www.kde.org\"><span style=\" text-decoration: underline; color:#0057ae;\">KDE project</span></a>. License text is provided with the program.</p><p>The QArv icon itself is derived from the oxygen theme as well.</p></body></html>", 0));
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(aboutTab), QApplication::translate("MainWindowUI", "About", 0));
        videodock->setWindowTitle(QApplication::translate("MainWindowUI", "Video Display", 0));
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("MainWindowUI", "Display live image.", 0));
#endif // QT_NO_TOOLTIP
        playButton->setText(QApplication::translate("MainWindowUI", "Display image", 0));
#ifndef QT_NO_TOOLTIP
        unzoomButton->setToolTip(QApplication::translate("MainWindowUI", "Fix display size to video size.", 0));
#endif // QT_NO_TOOLTIP
        unzoomButton->setText(QApplication::translate("MainWindowUI", "Actual size", 0));
        histogramdock->setWindowTitle(QApplication::translate("MainWindowUI", "Histogram", 0));
#ifndef QT_NO_TOOLTIP
        histogramLog->setToolTip(QApplication::translate("MainWindowUI", "Logarithmic histogram.", 0));
#endif // QT_NO_TOOLTIP
        histogramLog->setText(QApplication::translate("MainWindowUI", "Logarithmic", 0));
        messageDock->setWindowTitle(QApplication::translate("MainWindowUI", "Diagnostic log", 0));
        recordingToolbar->setWindowTitle(QApplication::translate("MainWindowUI", "Recording", 0));
        subwindowToolbar->setWindowTitle(QApplication::translate("MainWindowUI", "Subwindows", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowUI: public Ui_MainWindowUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
