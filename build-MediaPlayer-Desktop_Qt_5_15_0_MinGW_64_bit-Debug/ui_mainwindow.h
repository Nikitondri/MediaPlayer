/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonPrev;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonNext;
    QPushButton *pushButtonStop;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *slider;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/icons8-folder-500.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 761, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonPrev = new QPushButton(centralwidget);
        pushButtonPrev->setObjectName(QString::fromUtf8("pushButtonPrev"));
        pushButtonPrev->setGeometry(QRect(304, 470, 50, 50));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonPrev->sizePolicy().hasHeightForWidth());
        pushButtonPrev->setSizePolicy(sizePolicy);
        pushButtonPrev->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	transition: .2s all;\n"
"}\n"
"QPushButton#pushButtonPrev{\n"
"	outline: none;\n"
"  	border: 0;\n"
"  	background: transparent;\n"
"}\n"
"QPushButton#pushButtonPrev:hover{\n"
"	background-color: rgba(182, 182, 182, 0.5);\n"
" 	border-radius:20px;\n"
"	max-width:20px;\n"
"	max-height:20px;\n"
" 	min-width:20px;\n"
" 	min-height:20px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPrev->setIcon(icon1);
        pushButtonPrev->setIconSize(QSize(50, 50));
        pushButtonPlay = new QPushButton(centralwidget);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setGeometry(QRect(370, 460, 61, 61));
        sizePolicy.setHeightForWidth(pushButtonPlay->sizePolicy().hasHeightForWidth());
        pushButtonPlay->setSizePolicy(sizePolicy);
        pushButtonPlay->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	transition: .2s all;\n"
"}\n"
"QPushButton#pushButtonPlay{\n"
"	outline: none;\n"
"  	border: 0;\n"
"  	background: transparent;\n"
"}\n"
"QPushButton#pushButtonPlay:hover{\n"
"	background-color: rgba(182, 182, 182, 0.5);\n"
" 	border-radius:30px;\n"
"	max-width:60px;\n"
"	max-height:60px;\n"
" 	min-width:60px;\n"
" 	min-height:60px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/Play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon2);
        pushButtonPlay->setIconSize(QSize(60, 60));
        pushButtonNext = new QPushButton(centralwidget);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));
        pushButtonNext->setGeometry(QRect(450, 470, 50, 50));
        sizePolicy.setHeightForWidth(pushButtonNext->sizePolicy().hasHeightForWidth());
        pushButtonNext->setSizePolicy(sizePolicy);
        pushButtonNext->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	transition: .2s all;\n"
"}\n"
"QPushButton#pushButtonNext{\n"
"	outline: none;\n"
"  	border: 0;\n"
"  	background: transparent;\n"
"}\n"
"QPushButton#pushButtonNext:hover{\n"
"	background-color: rgba(182, 182, 182, 0.5);\n"
" 	border-radius:20px;\n"
"	max-width:20px;\n"
"	max-height:20px;\n"
" 	min-width:20px;\n"
" 	min-height:20px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/next-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNext->setIcon(icon3);
        pushButtonNext->setIconSize(QSize(50, 50));
        pushButtonStop = new QPushButton(centralwidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));
        pushButtonStop->setGeometry(QRect(510, 470, 47, 47));
        sizePolicy.setHeightForWidth(pushButtonStop->sizePolicy().hasHeightForWidth());
        pushButtonStop->setSizePolicy(sizePolicy);
        pushButtonStop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	transition: .2s all;\n"
"}\n"
"QPushButton#pushButtonStop{\n"
"	outline: none;\n"
"  	border: 0;\n"
"  	background: transparent;\n"
"}\n"
"QPushButton#pushButtonStop:hover{\n"
"	background-color: rgba(182, 182, 182, 0.5);\n"
" 	border-radius:20px;\n"
"	max-width:20px;\n"
"	max-height:20px;\n"
" 	min-width:20px;\n"
" 	min-height:20px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonStop->setIcon(icon4);
        pushButtonStop->setIconSize(QSize(50, 50));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 400, 761, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        slider = new QSlider(horizontalLayoutWidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setStyleSheet(QString::fromUtf8(""));
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "Open A File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonPrev->setText(QString());
        pushButtonPlay->setText(QString());
        pushButtonNext->setText(QString());
        pushButtonStop->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
