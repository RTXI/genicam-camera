/********************************************************************************
** Form generated from reading UI file 'qarv_videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QARV_VIDEOPLAYER_H
#define UI_QARV_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QArv::GLVideoWidget *videoWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openButton;
    QSpinBox *fpsSpinbox;
    QPushButton *playButton;
    QSlider *slider;
    QGroupBox *transcodeBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *leftMarkButton;
    QPushButton *rightMarkButton;
    QPushButton *transcodeButton;
    QProgressBar *transcodeBar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *codecBox;
    QLineEdit *gstLine;

    void setupUi(QWidget *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(633, 558);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/qarv.svgz"), QSize(), QIcon::Normal, QIcon::Off);
        VideoPlayer->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VideoPlayer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        videoWidget = new QArv::GLVideoWidget(VideoPlayer);
        videoWidget->setObjectName(QStringLiteral("videoWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(videoWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openButton = new QPushButton(VideoPlayer);
        openButton->setObjectName(QStringLiteral("openButton"));
        QIcon icon1;
        QString iconThemeName = QStringLiteral("document-open");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        openButton->setIcon(icon1);

        horizontalLayout->addWidget(openButton);

        fpsSpinbox = new QSpinBox(VideoPlayer);
        fpsSpinbox->setObjectName(QStringLiteral("fpsSpinbox"));
        fpsSpinbox->setMinimum(1);
        fpsSpinbox->setValue(25);

        horizontalLayout->addWidget(fpsSpinbox);

        playButton = new QPushButton(VideoPlayer);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setEnabled(false);
        QIcon icon2;
        iconThemeName = QStringLiteral("media-playback-start");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        playButton->setIcon(icon2);
        playButton->setCheckable(true);

        horizontalLayout->addWidget(playButton);

        slider = new QSlider(VideoPlayer);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setEnabled(false);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider);


        verticalLayout->addLayout(horizontalLayout);

        transcodeBox = new QGroupBox(VideoPlayer);
        transcodeBox->setObjectName(QStringLiteral("transcodeBox"));
        transcodeBox->setEnabled(true);
        transcodeBox->setCheckable(true);
        transcodeBox->setChecked(true);
        verticalLayout_2 = new QVBoxLayout(transcodeBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        leftMarkButton = new QPushButton(transcodeBox);
        leftMarkButton->setObjectName(QStringLiteral("leftMarkButton"));
        QIcon icon3;
        iconThemeName = QStringLiteral("go-first");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        leftMarkButton->setIcon(icon3);
        leftMarkButton->setCheckable(true);

        horizontalLayout_2->addWidget(leftMarkButton);

        rightMarkButton = new QPushButton(transcodeBox);
        rightMarkButton->setObjectName(QStringLiteral("rightMarkButton"));
        QIcon icon4;
        iconThemeName = QStringLiteral("go-last");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        rightMarkButton->setIcon(icon4);
        rightMarkButton->setCheckable(true);

        horizontalLayout_2->addWidget(rightMarkButton);

        transcodeButton = new QPushButton(transcodeBox);
        transcodeButton->setObjectName(QStringLiteral("transcodeButton"));
        transcodeButton->setEnabled(true);
        QIcon icon5;
        iconThemeName = QStringLiteral("media-record");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        transcodeButton->setIcon(icon5);
        transcodeButton->setCheckable(true);

        horizontalLayout_2->addWidget(transcodeButton);

        transcodeBar = new QProgressBar(transcodeBox);
        transcodeBar->setObjectName(QStringLiteral("transcodeBar"));
        transcodeBar->setValue(0);

        horizontalLayout_2->addWidget(transcodeBar);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(transcodeBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        codecBox = new QComboBox(transcodeBox);
        codecBox->setObjectName(QStringLiteral("codecBox"));

        horizontalLayout_3->addWidget(codecBox);

        gstLine = new QLineEdit(transcodeBox);
        gstLine->setObjectName(QStringLiteral("gstLine"));
        gstLine->setEnabled(true);
        gstLine->setFrame(true);
        gstLine->setPlaceholderText(QStringLiteral("gstreamer pipeline fragment, e.g. 'avenc_huffyuv ! avimux'"));

        horizontalLayout_3->addWidget(gstLine);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(transcodeBox);


        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QWidget *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "QArv Video Player", 0));
#ifndef QT_NO_TOOLTIP
        openButton->setToolTip(QApplication::translate("VideoPlayer", "Open a video description file for raw video.", 0));
#endif // QT_NO_TOOLTIP
        openButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        fpsSpinbox->setToolTip(QApplication::translate("VideoPlayer", "Set video frame rate.", 0));
#endif // QT_NO_TOOLTIP
        fpsSpinbox->setSuffix(QApplication::translate("VideoPlayer", " FPS", 0));
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("VideoPlayer", "Play or pause video.", 0));
#endif // QT_NO_TOOLTIP
        playButton->setText(QString());
        transcodeBox->setTitle(QApplication::translate("VideoPlayer", "Transcoding", 0));
#ifndef QT_NO_TOOLTIP
        leftMarkButton->setToolTip(QApplication::translate("VideoPlayer", "Set starting point for transcode", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rightMarkButton->setToolTip(QApplication::translate("VideoPlayer", "Set end point for transcode", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        transcodeButton->setToolTip(QApplication::translate("VideoPlayer", "Select destination file and start transcoding", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("VideoPlayer", "Codec:", 0));
#ifndef QT_NO_TOOLTIP
        codecBox->setToolTip(QApplication::translate("VideoPlayer", "Select codec. Choose \"Custom\" to provide a gstreamer pipeline fragment.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gstLine->setToolTip(QApplication::translate("VideoPlayer", "Enter a gstreamer pipeline fragment as you would for gst-launch. The first and last part of the pipeline are provided by QArv.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QARV_VIDEOPLAYER_H
