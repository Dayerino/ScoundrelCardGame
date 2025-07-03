/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Startbtn;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Deck;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Card1;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Card2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *Card3;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *Card4;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *Hand;
    QPushButton *Dealbtn;
    QPushButton *card1btn;
    QPushButton *card2btn;
    QPushButton *card3btn;
    QPushButton *card4btn;
    QPlainTextEdit *healthBar;
    QPlainTextEdit *textLog;
    QPushButton *RestartBtn;
    QPushButton *punchBtn1;
    QPushButton *punchBtn2;
    QPushButton *punchBtn3;
    QPushButton *punchBtn4;
    QPushButton *escapeRoom;
    QPlainTextEdit *cardCounter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 768);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/new/board/Assets/board.JPG);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Startbtn = new QPushButton(centralwidget);
        Startbtn->setObjectName("Startbtn");
        Startbtn->setGeometry(QRect(400, 640, 161, 41));
        Startbtn->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 380, 161, 251));
        Deck = new QVBoxLayout(verticalLayoutWidget_2);
        Deck->setObjectName("Deck");
        Deck->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(140, 20, 161, 251));
        Card1 = new QVBoxLayout(verticalLayoutWidget_3);
        Card1->setObjectName("Card1");
        Card1->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(350, 20, 161, 251));
        Card2 = new QVBoxLayout(verticalLayoutWidget_4);
        Card2->setObjectName("Card2");
        Card2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(560, 20, 161, 251));
        Card3 = new QVBoxLayout(verticalLayoutWidget_5);
        Card3->setObjectName("Card3");
        Card3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(790, 20, 161, 251));
        Card4 = new QVBoxLayout(verticalLayoutWidget_6);
        Card4->setObjectName("Card4");
        Card4->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(400, 380, 161, 251));
        Hand = new QVBoxLayout(verticalLayoutWidget_7);
        Hand->setObjectName("Hand");
        Hand->setContentsMargins(0, 0, 0, 0);
        Dealbtn = new QPushButton(centralwidget);
        Dealbtn->setObjectName("Dealbtn");
        Dealbtn->setGeometry(QRect(209, 440, 111, 151));
        Dealbtn->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        card1btn = new QPushButton(centralwidget);
        card1btn->setObjectName("card1btn");
        card1btn->setGeometry(QRect(160, 280, 111, 41));
        card1btn->setStyleSheet(QString::fromUtf8("background:none;\n"
"color: black;\n"
"background-color:white;\n"
"display:none;"));
        card2btn = new QPushButton(centralwidget);
        card2btn->setObjectName("card2btn");
        card2btn->setGeometry(QRect(370, 280, 111, 41));
        card2btn->setStyleSheet(QString::fromUtf8("background:none;\n"
"color: black;\n"
"background-color:white;\n"
"display:none;"));
        card3btn = new QPushButton(centralwidget);
        card3btn->setObjectName("card3btn");
        card3btn->setGeometry(QRect(590, 280, 111, 41));
        card3btn->setStyleSheet(QString::fromUtf8("background:none;\n"
"color: black;\n"
"background-color:white;\n"
"display:none;"));
        card4btn = new QPushButton(centralwidget);
        card4btn->setObjectName("card4btn");
        card4btn->setGeometry(QRect(820, 280, 111, 41));
        card4btn->setStyleSheet(QString::fromUtf8("background:none;\n"
"color: black;\n"
"background-color:white;\n"
"display:none;"));
        healthBar = new QPlainTextEdit(centralwidget);
        healthBar->setObjectName("healthBar");
        healthBar->setGeometry(QRect(810, 550, 181, 121));
        QFont font;
        font.setPointSize(12);
        healthBar->setFont(font);
        healthBar->setStyleSheet(QString::fromUtf8("background: none;\n"
"background-color: white;\n"
"color: black;\n"
"font-size: 28;\n"
""));
        textLog = new QPlainTextEdit(centralwidget);
        textLog->setObjectName("textLog");
        textLog->setGeometry(QRect(580, 460, 201, 111));
        textLog->setFont(font);
        textLog->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color:white;\n"
"color:black;"));
        RestartBtn = new QPushButton(centralwidget);
        RestartBtn->setObjectName("RestartBtn");
        RestartBtn->setGeometry(QRect(600, 640, 161, 41));
        RestartBtn->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        punchBtn1 = new QPushButton(centralwidget);
        punchBtn1->setObjectName("punchBtn1");
        punchBtn1->setGeometry(QRect(160, 330, 111, 41));
        punchBtn1->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        punchBtn2 = new QPushButton(centralwidget);
        punchBtn2->setObjectName("punchBtn2");
        punchBtn2->setGeometry(QRect(370, 330, 111, 41));
        punchBtn2->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        punchBtn3 = new QPushButton(centralwidget);
        punchBtn3->setObjectName("punchBtn3");
        punchBtn3->setGeometry(QRect(590, 330, 111, 41));
        punchBtn3->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        punchBtn4 = new QPushButton(centralwidget);
        punchBtn4->setObjectName("punchBtn4");
        punchBtn4->setGeometry(QRect(820, 330, 111, 41));
        punchBtn4->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        escapeRoom = new QPushButton(centralwidget);
        escapeRoom->setObjectName("escapeRoom");
        escapeRoom->setGeometry(QRect(830, 480, 111, 41));
        escapeRoom->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        cardCounter = new QPlainTextEdit(centralwidget);
        cardCounter->setObjectName("cardCounter");
        cardCounter->setGeometry(QRect(18, 630, 131, 71));
        cardCounter->setFont(font);
        cardCounter->setStyleSheet(QString::fromUtf8("background:none;\n"
"background-color:white;\n"
"color:black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Startbtn->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        Dealbtn->setText(QCoreApplication::translate("MainWindow", "Deal Cards", nullptr));
        card1btn->setText(QCoreApplication::translate("MainWindow", "card 1", nullptr));
        card2btn->setText(QCoreApplication::translate("MainWindow", "card 2", nullptr));
        card3btn->setText(QCoreApplication::translate("MainWindow", "card 3", nullptr));
        card4btn->setText(QCoreApplication::translate("MainWindow", "card 4", nullptr));
        healthBar->setPlainText(QString());
        textLog->setPlainText(QString());
        RestartBtn->setText(QCoreApplication::translate("MainWindow", "restart ", nullptr));
        punchBtn1->setText(QCoreApplication::translate("MainWindow", "punch1", nullptr));
        punchBtn2->setText(QCoreApplication::translate("MainWindow", "punch2", nullptr));
        punchBtn3->setText(QCoreApplication::translate("MainWindow", "punch3", nullptr));
        punchBtn4->setText(QCoreApplication::translate("MainWindow", "punch4", nullptr));
        escapeRoom->setText(QCoreApplication::translate("MainWindow", "Escape!", nullptr));
        cardCounter->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
