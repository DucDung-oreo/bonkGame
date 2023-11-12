/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txtTime;
    QLabel *label_4;
    QPushButton *butClear;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtHorny;
    QLineEdit *txtBonk;
    QVBoxLayout *verticalLayout_3;
    QPushButton *butStart;
    QPushButton *butStop;
    QPushButton *pushButton;
    QLabel *labOuch;
    QWidget *tab_2;
    QLabel *labOuch_2;
    QLabel *txtCheems;
    QLabel *txtCheems_2;
    QLabel *txtCheems_3;
    QLabel *txtCheems_4;
    QLabel *txtCheems_5;
    QPushButton *butCheems;
    QPushButton *butCheems_2;
    QPushButton *butCheems_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *txtTime_2;
    QLabel *label_6;
    QPushButton *butClear_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *txtHorny_2;
    QLineEdit *txtBonk_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *butStart_2;
    QPushButton *butStop_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *butCheems_7;
    QPushButton *butCheems_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 934);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 753, 118));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txtTime = new QLineEdit(layoutWidget);
        txtTime->setObjectName(QString::fromUtf8("txtTime"));

        horizontalLayout_3->addWidget(txtTime);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        butClear = new QPushButton(layoutWidget);
        butClear->setObjectName(QString::fromUtf8("butClear"));

        horizontalLayout_3->addWidget(butClear);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        txtHorny = new QLineEdit(layoutWidget);
        txtHorny->setObjectName(QString::fromUtf8("txtHorny"));

        verticalLayout_2->addWidget(txtHorny);

        txtBonk = new QLineEdit(layoutWidget);
        txtBonk->setObjectName(QString::fromUtf8("txtBonk"));

        verticalLayout_2->addWidget(txtBonk);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        butStart = new QPushButton(layoutWidget);
        butStart->setObjectName(QString::fromUtf8("butStart"));

        verticalLayout_3->addWidget(butStart);

        butStop = new QPushButton(layoutWidget);
        butStop->setObjectName(QString::fromUtf8("butStop"));

        verticalLayout_3->addWidget(butStop);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 240, 180, 180));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/offHorny.png"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/imgs/onHorny.jpg"), QSize(), QIcon::Active, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(640, 640));
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        pushButton->setAutoRepeat(false);
        pushButton->setFlat(true);
        labOuch = new QLabel(tab);
        labOuch->setObjectName(QString::fromUtf8("labOuch"));
        labOuch->setGeometry(QRect(710, 160, 161, 101));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        labOuch->setFont(font);
        tabWidget->addTab(tab, QString());
        pushButton->raise();
        layoutWidget->raise();
        labOuch->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        labOuch_2 = new QLabel(tab_2);
        labOuch_2->setObjectName(QString::fromUtf8("labOuch_2"));
        labOuch_2->setGeometry(QRect(890, 160, 161, 101));
        labOuch_2->setFont(font);
        txtCheems = new QLabel(tab_2);
        txtCheems->setObjectName(QString::fromUtf8("txtCheems"));
        txtCheems->setGeometry(QRect(290, 240, 180, 180));
        txtCheems->setPixmap(QPixmap(QString::fromUtf8(":/imgs/offHorny.png")));
        txtCheems_2 = new QLabel(tab_2);
        txtCheems_2->setObjectName(QString::fromUtf8("txtCheems_2"));
        txtCheems_2->setGeometry(QRect(480, 240, 180, 180));
        txtCheems_2->setPixmap(QPixmap(QString::fromUtf8(":/imgs/offHorny.png")));
        txtCheems_3 = new QLabel(tab_2);
        txtCheems_3->setObjectName(QString::fromUtf8("txtCheems_3"));
        txtCheems_3->setGeometry(QRect(670, 240, 180, 180));
        txtCheems_3->setPixmap(QPixmap(QString::fromUtf8(":/imgs/offHorny.png")));
        txtCheems_4 = new QLabel(tab_2);
        txtCheems_4->setObjectName(QString::fromUtf8("txtCheems_4"));
        txtCheems_4->setGeometry(QRect(570, 430, 180, 180));
        txtCheems_4->setPixmap(QPixmap(QString::fromUtf8(":/imgs/offHorny.png")));
        txtCheems_5 = new QLabel(tab_2);
        txtCheems_5->setObjectName(QString::fromUtf8("txtCheems_5"));
        txtCheems_5->setGeometry(QRect(390, 430, 180, 180));
        txtCheems_5->setPixmap(QPixmap(QString::fromUtf8(":/imgs/offHorny.png")));
        butCheems = new QPushButton(tab_2);
        butCheems->setObjectName(QString::fromUtf8("butCheems"));
        butCheems->setGeometry(QRect(290, 240, 180, 180));
        butCheems->setMinimumSize(QSize(180, 180));
        butCheems->setFlat(true);
        butCheems_2 = new QPushButton(tab_2);
        butCheems_2->setObjectName(QString::fromUtf8("butCheems_2"));
        butCheems_2->setGeometry(QRect(480, 240, 180, 180));
        butCheems_2->setMinimumSize(QSize(180, 180));
        butCheems_2->setFlat(true);
        butCheems_3 = new QPushButton(tab_2);
        butCheems_3->setObjectName(QString::fromUtf8("butCheems_3"));
        butCheems_3->setGeometry(QRect(670, 240, 180, 180));
        butCheems_3->setMinimumSize(QSize(180, 180));
        butCheems_3->setFlat(true);
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 831, 118));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        txtTime_2 = new QLineEdit(layoutWidget_2);
        txtTime_2->setObjectName(QString::fromUtf8("txtTime_2"));

        horizontalLayout_5->addWidget(txtTime_2);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        butClear_2 = new QPushButton(layoutWidget_2);
        butClear_2->setObjectName(QString::fromUtf8("butClear_2"));

        horizontalLayout_5->addWidget(butClear_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_6->addWidget(label_8);


        horizontalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        txtHorny_2 = new QLineEdit(layoutWidget_2);
        txtHorny_2->setObjectName(QString::fromUtf8("txtHorny_2"));

        verticalLayout_7->addWidget(txtHorny_2);

        txtBonk_2 = new QLineEdit(layoutWidget_2);
        txtBonk_2->setObjectName(QString::fromUtf8("txtBonk_2"));

        verticalLayout_7->addWidget(txtBonk_2);


        horizontalLayout_8->addLayout(verticalLayout_7);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        butStart_2 = new QPushButton(layoutWidget_2);
        butStart_2->setObjectName(QString::fromUtf8("butStart_2"));

        verticalLayout_8->addWidget(butStart_2);

        butStop_2 = new QPushButton(layoutWidget_2);
        butStop_2->setObjectName(QString::fromUtf8("butStop_2"));

        verticalLayout_8->addWidget(butStop_2);


        horizontalLayout_7->addLayout(verticalLayout_8);


        verticalLayout_5->addLayout(horizontalLayout_7);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(280, 230, 193, 193));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/imgs/ground.jpg")));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(470, 230, 193, 193));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/imgs/ground.jpg")));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(660, 230, 193, 193));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/imgs/ground.jpg")));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(380, 420, 193, 193));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/imgs/ground.jpg")));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(570, 420, 193, 193));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/imgs/ground.jpg")));
        butCheems_7 = new QPushButton(tab_2);
        butCheems_7->setObjectName(QString::fromUtf8("butCheems_7"));
        butCheems_7->setGeometry(QRect(390, 430, 180, 180));
        butCheems_7->setMinimumSize(QSize(180, 180));
        butCheems_7->setFlat(true);
        butCheems_8 = new QPushButton(tab_2);
        butCheems_8->setObjectName(QString::fromUtf8("butCheems_8"));
        butCheems_8->setGeometry(QRect(580, 430, 180, 180));
        butCheems_8->setMinimumSize(QSize(180, 180));
        butCheems_8->setFlat(true);
        tabWidget->addTab(tab_2, QString());
        label_13->raise();
        label_12->raise();
        label_11->raise();
        label_10->raise();
        label_9->raise();
        txtCheems->raise();
        txtCheems_2->raise();
        txtCheems_3->raise();
        txtCheems_4->raise();
        txtCheems_5->raise();
        butCheems->raise();
        butCheems_2->raise();
        butCheems_3->raise();
        layoutWidget_2->raise();
        labOuch_2->raise();
        butCheems_8->raise();
        butCheems_7->raise();

        horizontalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1500, 29));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "We Do Not Allow Any Horniness In Here!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "How fast will Cheems go ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "(ms)", nullptr));
        butClear->setText(QCoreApplication::translate("MainWindow", "Let me save Cheems again", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Horny times", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Bonk! times", nullptr));
        butStart->setText(QCoreApplication::translate("MainWindow", "Start being horny", nullptr));
        butStop->setText(QCoreApplication::translate("MainWindow", "Stop that shit", nullptr));
        pushButton->setText(QString());
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        labOuch->setText(QCoreApplication::translate("MainWindow", "Ouch!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Catch Cheems If You Can", nullptr));
        labOuch_2->setText(QCoreApplication::translate("MainWindow", "Ouch!", nullptr));
        txtCheems->setText(QString());
        txtCheems_2->setText(QString());
        txtCheems_3->setText(QString());
        txtCheems_4->setText(QString());
        txtCheems_5->setText(QString());
        butCheems->setText(QString());
        butCheems_2->setText(QString());
        butCheems_3->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Cheems will show up every ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "(ms)", nullptr));
        butClear_2->setText(QCoreApplication::translate("MainWindow", "Give me another chance to protect Cheems", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Horny counts", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ouch! counts", nullptr));
        butStart_2->setText(QCoreApplication::translate("MainWindow", "OK let's do this", nullptr));
        butStop_2->setText(QCoreApplication::translate("MainWindow", "Stop that shit", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        butCheems_7->setText(QString());
        butCheems_8->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Cheems In a Hole", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
