/********************************************************************************
** Form generated from reading UI file 'pause.ui'
**
** Created: Mon Dec 2 11:49:22 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSE_H
#define UI_PAUSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pause
{
public:
    QWidget *centralwidget;
    QPushButton *Resume;
    QPushButton *Exit;
    QProgressBar *progressBar;
    QLabel *Health;
    QLabel *Hero;
    QLCDNumber *NumericHP;
    QTabWidget *HeroOptions;
    QWidget *Weapons;
    QVBoxLayout *verticalLayout;
    QPushButton *ShotGun;
    QPushButton *Gun;
    QWidget *Health_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pause)
    {
        if (Pause->objectName().isEmpty())
            Pause->setObjectName(QString::fromUtf8("Pause"));
        Pause->resize(630, 416);
        Pause->setMinimumSize(QSize(0, 0));
        Pause->setMaximumSize(QSize(630, 416));
        QFont font;
        font.setFamily(QString::fromUtf8("Helvetica"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        Pause->setFont(font);
        Pause->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Helvetica\";\n"
"background-color: qconicalgradient(cx:0.5, cy:0.5, angle:265, stop:0 rgba(219, 214, 194, 255));\n"
""));
        centralwidget = new QWidget(Pause);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Resume = new QPushButton(centralwidget);
        Resume->setObjectName(QString::fromUtf8("Resume"));
        Resume->setGeometry(QRect(100, 300, 110, 32));
        Resume->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: rgba(255, 0, 0, 115);"));
        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(280, 300, 110, 32));
        Exit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 14pt \"Helvetica\";"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(200, 110, 91, 21));
        progressBar->setValue(24);
        Health = new QLabel(centralwidget);
        Health->setObjectName(QString::fromUtf8("Health"));
        Health->setGeometry(QRect(200, 66, 38, 20));
        Health->setAutoFillBackground(false);
        Health->setAlignment(Qt::AlignCenter);
        Hero = new QLabel(centralwidget);
        Hero->setObjectName(QString::fromUtf8("Hero"));
        Hero->setGeometry(QRect(0, 0, 191, 111));
        Hero->setPixmap(QPixmap(QString::fromUtf8("../images/piratebat.png")));
        Hero->setScaledContents(true);
        NumericHP = new QLCDNumber(centralwidget);
        NumericHP->setObjectName(QString::fromUtf8("NumericHP"));
        NumericHP->setGeometry(QRect(200, 90, 64, 23));
        NumericHP->setFont(font);
        NumericHP->setLayoutDirection(Qt::LeftToRight);
        NumericHP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Helvetica\";"));
        NumericHP->setNumDigits(1);
        NumericHP->setDigitCount(1);
        NumericHP->setSegmentStyle(QLCDNumber::Flat);
        HeroOptions = new QTabWidget(centralwidget);
        HeroOptions->setObjectName(QString::fromUtf8("HeroOptions"));
        HeroOptions->setGeometry(QRect(50, 170, 154, 99));
        Weapons = new QWidget();
        Weapons->setObjectName(QString::fromUtf8("Weapons"));
        verticalLayout = new QVBoxLayout(Weapons);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ShotGun = new QPushButton(Weapons);
        ShotGun->setObjectName(QString::fromUtf8("ShotGun"));

        verticalLayout->addWidget(ShotGun);

        Gun = new QPushButton(Weapons);
        Gun->setObjectName(QString::fromUtf8("Gun"));

        verticalLayout->addWidget(Gun);

        HeroOptions->addTab(Weapons, QString());
        Health_2 = new QWidget();
        Health_2->setObjectName(QString::fromUtf8("Health_2"));
        HeroOptions->addTab(Health_2, QString());
        Pause->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Pause);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pause->setStatusBar(statusbar);

        retranslateUi(Pause);
        QObject::connect(Exit, SIGNAL(clicked()), Pause, SLOT(close()));
        QObject::connect(progressBar, SIGNAL(valueChanged(int)), Pause, SLOT(show()));

        HeroOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pause);
    } // setupUi

    void retranslateUi(QMainWindow *Pause)
    {
        Resume->setText(QApplication::translate("Pause", "Resume", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("Pause", "Exit", 0, QApplication::UnicodeUTF8));
        Health->setText(QApplication::translate("Pause", "HP", 0, QApplication::UnicodeUTF8));
        Hero->setText(QString());
        ShotGun->setText(QApplication::translate("Pause", "ShotGun", 0, QApplication::UnicodeUTF8));
        Gun->setText(QApplication::translate("Pause", "Gun", 0, QApplication::UnicodeUTF8));
        HeroOptions->setTabText(HeroOptions->indexOf(Weapons), QApplication::translate("Pause", "Weapons", 0, QApplication::UnicodeUTF8));
        HeroOptions->setTabText(HeroOptions->indexOf(Health_2), QApplication::translate("Pause", "Health", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Pause);
    } // retranslateUi

};

namespace Ui {
    class Pause: public Ui_Pause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSE_H