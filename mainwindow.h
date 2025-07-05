#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <chrono>
#include <utility>
#include <cstring>
#include <limits>
#include <QString>
#include <QPixmap>
#include <QLabel>
#include <QVBoxLayout>
#include <QApplication>
#include <QMouseEvent>
#include <QWidget>
#include <QDebug>
#include <QGridLayout>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QPushButton>

using namespace std;
class card {
public:
    int value;
    string suite;
    string valueName;
    QPixmap Front;
    QPixmap Back;
    void setValue(int value);
    void setValueName(string valueName);
    void setSuite(string suite);
    void setFront( QString filePath);
    void setBack(QString filepath);
    string getsuite();
    string getvalueName();
    int getValue();
    QPixmap getFront() const;
    QPixmap getBack() const;
    card(string suite, string valueName, int value, QString Front, QString back);//constructor for logic card
    card(){
        cout<<"useless constructor";
    }
    //~card();
};
class CardInSlot: public QLabel{
    Q_OBJECT
private:
    QPixmap front;
    int value;
    string suite;
public:
    void setvalue(int arg){
        this->value = arg;
    }
    void setsuite(string arg){
        this->suite = arg;
    }
    int getvalue(){
        return this->value;
    }
    string getsuite(){
        return this->suite;
    }
    explicit CardInSlot(QWidget *parent, const QPixmap &front): QLabel(parent),front(front){//constructor for ui card
        setPixmap(front);

    }
signals:
    void cardClicked(CardInSlot* clickedCard);
protected:
    void mousePressEvent(QMouseEvent*event)override{
        emit cardClicked(this);
    }
};
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow , public card
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
/*functions that are gonna be here will be able to be used
 i can pass the ui as a parameter in the functions so i can interact with it
this will help me avoid issues with updating the ui and better plan the logic around clicking & connecting actions*/
    //card King_Of_Diamonds("Diamonds","King",13,QString(":/new/Cards/Assets/PNG-cards-1.3/king_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    void on_Startbtn_clicked();
    void on_Dealbtn_clicked();
   // void onCardClicked(CardInSlot* clickedCard);
    void on_card1btn_clicked();

    void on_card2btn_clicked();

    void on_card3btn_clicked();

    void on_card4btn_clicked();

    void on_RestartBtn_clicked();

    void on_punchBtn1_clicked();

    void on_punchBtn2_clicked();

    void on_punchBtn3_clicked();

    void on_punchBtn4_clicked();


    void on_escapeRoom_clicked();

signals:
    void clicked();
    void cardClicked();
protected:
    void mousePressEvent(QMouseEvent* event)override{
        emit clicked();
    }//must add widgets to the main window and see if this only works on the main widget or on anything
    //it still shows and hides the button, have to find a way to limit it

private:
    Ui::MainWindow *ui;
    vector<card> Hand, Deck,card1,card2,card3,card4;
    bool isWeaponCursed, escapedLastRoom;
    int healthbar = 20 , weaponPower = 0, trueweaponPower= 0,  monsterPower = 0;
    bool gameOver(int &healthbar), cardBack;
    void removeCard1(vector<card>&card1);
    void removeCard2(vector<card>&card2);
    void removeCard3(vector<card>&card3);
    void removeCard4(vector<card>&card4);
    void deleteDeck(vector<card>&Deck);
    void createDeck(vector<card>&Deck);
    void shuffleDeck(vector<card>&Deck);
    void showDeck(vector<card> &Deck);
    void cardQueue(vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,vector<card>&hand);
    //make a queue where only the first 4 cards are pushed into the card vectors
    void movecard(std::vector<card>& hand,std::vector<card>& Deck,
                              std::vector<card>& cardSlot,QPushButton* cardButton,QPlainTextEdit* textLog,
                              QVBoxLayout* handLayout,
                              int& healthbar,int& weaponPower,int& trueweaponPower);
    void movecard1(vector<card>&hand,vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,int &healthbar, int &weaponPower,int &trueweaponPower);
    void movecard2(vector<card>&hand,vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,int &healthbar, int &weaponPower,int &trueweaponPower);
    void movecard3(vector<card>&hand,vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,int &healthbar, int &weaponPower,int &trueweaponPower);
    void movecard4(vector<card>&hand,vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,int &healthbar, int &weaponPower,int &trueweaponPower);
    void debugDeck(vector<card>&Deck);
    void debugDeal(vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4);
    void UpdateHealthBar(int &healthbar);
    void clearEverything(vector<card>&hand,vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,int &healthbar, int &weaponPower,int &trueweaponPower);
    void punchCard1(vector<card>&card1);
    void punchCard2(vector<card>&card2);
    void punchCard3(vector<card>&card3);
    void punchCard4(vector<card>&card4);
    void escapeRoom(vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,vector<card>&Deck,bool &escapedLastRoom,vector<card>hand);
    void cardCounter(vector<card>Deck);
    /*absolute abomination*/
    void terribleDeckCheck(vector<card>card1,vector<card>card2,vector<card>card3,vector<card>card4,vector<card>Deck);
};
#endif // MAINWINDOW_H
