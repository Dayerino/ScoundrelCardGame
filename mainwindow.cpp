#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //initial set up
    ui->setupUi(this);
    ui->card1btn->setVisible(false);
    ui->card2btn->setVisible(false);
    ui->card3btn->setVisible(false);
    ui->card4btn->setVisible(false);
    ui->RestartBtn->setVisible(false);
    ui->Dealbtn->setVisible(false);
    ui->punchBtn1->setVisible(false);
    ui->punchBtn2->setVisible(false);
    ui->punchBtn3->setVisible(false);
    ui->punchBtn4->setVisible(false);
    ui->escapeRoom->setVisible(false);
    cardBack = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void card:: setValue(int valuearg){
    this->value = valuearg;
}
void card:: setValueName(string valueNamearg){
    this->valueName = valueNamearg;
}
void card:: setSuite(string suitearg){
    this->suite = suitearg;
}
void card:: setFront( QString filePath){
    this->Front = filePath;
}
void card:: setBack(QString filepath){
    this->Back = filepath;
}
string card:: getsuite(){
    return this->suite;
}
string card:: getvalueName(){
    return this->valueName;
}
int card:: getValue(){
    return this->value;
}
QPixmap card:: getFront() const{
    return this->Front;
}
QPixmap card:: getBack() const{
    return this->Back;
}
card :: card(string suite, string valueName, int value, QString Front, QString back){
    setSuite(suite);
    setValueName(valueName);
    setValue(value);
    setFront(Front);
    setBack(back);
}



void MainWindow::createDeck(vector<card>&Deck){
    string spades = "Spades";
    string Hearts = "Hearts";
    string Clubs = "Clubs";
    string Diamonds = "Diamonds";
    // IM SORRY FOR WHAT YOU ARE ABOUT TO SEE
    /*for the game!!:: must remove red face cards and red aces(hearts and diamonds)*/
    card Ace_Of_Spades(spades,"Ace",14,QString(":/new/Cards/Assets/PNG-cards-1.3/ace_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Ace_Of_Spades);
    card Two_Of_Spades(spades,"Two",2,QString(":/new/Cards/Assets/PNG-cards-1.3/2_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Two_Of_Spades);
    card Three_Of_Spades(spades,"Three",3,QString(":/new/Cards/Assets/PNG-cards-1.3/3_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Three_Of_Spades);
    card Four_Of_Spades(spades,"Four",4,QString(":/new/Cards/Assets/PNG-cards-1.3/4_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Four_Of_Spades);
    card Five_Of_Spades(spades,"Five",5,QString(":/new/Cards/Assets/PNG-cards-1.3/5_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Five_Of_Spades);
    card Six_Of_Spades(spades,"Six",6,QString(":/new/Cards/Assets/PNG-cards-1.3/6_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Six_Of_Spades);
    card Seven_Of_Spades(spades,"Seven",7,QString(":/new/Cards/Assets/PNG-cards-1.3/7_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Seven_Of_Spades);
    card Eight_Of_Spades(spades,"Eight",8,QString(":/new/Cards/Assets/PNG-cards-1.3/8_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Eight_Of_Spades);
    card Nine_Of_Spades(spades,"Nine",9,QString(":/new/Cards/Assets/PNG-cards-1.3/9_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Nine_Of_Spades);
    card Ten_Of_Spades(spades,"Ten",10,QString(":/new/Cards/Assets/PNG-cards-1.3/10_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Ten_Of_Spades);
    card Jack_Of_Spades(spades,"Jack",11,QString(":/new/Cards/Assets/PNG-cards-1.3/jack_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Jack_Of_Spades);
    card Queen_Of_Spades(spades,"Queen",12,QString(":/new/Cards/Assets/PNG-cards-1.3/queen_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Queen_Of_Spades);
    card King_Of_Spades(spades,"King",13,QString(":/new/Cards/Assets/PNG-cards-1.3/king_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(King_Of_Spades);
    card Two_Of_Hearts(Hearts,"Two",2,QString(":/new/Cards/Assets/PNG-cards-1.3/2_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Two_Of_Hearts);
    card Three_Of_Hearts(Hearts,"Three",3,QString(":/new/Cards/Assets/PNG-cards-1.3/3_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Three_Of_Hearts);
    card Four_Of_Hearts(Hearts,"Four",4,QString(":/new/Cards/Assets/PNG-cards-1.3/4_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Four_Of_Hearts);
    card Five_Of_Hearts(Hearts,"Five",5,QString(":/new/Cards/Assets/PNG-cards-1.3/5_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Five_Of_Hearts);
    card Six_Of_Hearts(Hearts,"Six",6,QString(":/new/Cards/Assets/PNG-cards-1.3/6_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Six_Of_Hearts);
    card Seven_Of_Hearts(Hearts,"Seven",7,QString(":/new/Cards/Assets/PNG-cards-1.3/7_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Seven_Of_Hearts);
    card Eight_Of_Hearts(Hearts,"Eight",8,QString(":/new/Cards/Assets/PNG-cards-1.3/8_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Eight_Of_Hearts);
    card Nine_Of_Hearts(Hearts,"Nine",9,QString(":/new/Cards/Assets/PNG-cards-1.3/9_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Nine_Of_Hearts);
    card Ten_Of_Hearts(Hearts,"Ten",10,QString(":/new/Cards/Assets/PNG-cards-1.3/10_of_hearts.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Ten_Of_Hearts);
    card Ace_Of_Clubs(Clubs,"Ace",14,QString(":/new/Cards/Assets/PNG-cards-1.3/ace_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Ace_Of_Clubs);
    card Two_Of_Clubs(Clubs,"Two",2,QString(":/new/Cards/Assets/PNG-cards-1.3/2_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Two_Of_Clubs);
    card Three_Of_Clubs(Clubs,"Three",3,QString(":/new/Cards/Assets/PNG-cards-1.3/3_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Three_Of_Clubs);
    card Four_Of_Clubs(Clubs,"Four",4,QString(":/new/Cards/Assets/PNG-cards-1.3/4_of_spades.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Four_Of_Clubs);
    card Five_Of_Clubs(Clubs,"Five",5,QString(":/new/Cards/Assets/PNG-cards-1.3/5_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Five_Of_Clubs);
    card Six_Of_Clubs(Clubs,"Six",6,QString(":/new/Cards/Assets/PNG-cards-1.3/6_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Six_Of_Clubs);
    card Seven_Of_Clubs(Clubs,"Seven",7,QString(":/new/Cards/Assets/PNG-cards-1.3/7_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Seven_Of_Clubs);
    card Eight_Of_Clubs(Clubs,"Eight",8,QString(":/new/Cards/Assets/PNG-cards-1.3/8_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Eight_Of_Clubs);
    card Nine_Of_Clubs(Clubs,"Nine",9,QString(":/new/Cards/Assets/PNG-cards-1.3/9_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Nine_Of_Clubs);
    card Ten_Of_Clubs(Clubs,"Ten",10,QString(":/new/Cards/Assets/PNG-cards-1.3/10_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Ten_Of_Clubs);
    card Jack_Of_Clubs(Clubs,"Jack",11,QString(":/new/Cards/Assets/PNG-cards-1.3/jack_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Jack_Of_Clubs);
    card Queen_Of_Clubs(Clubs,"Queen",12,QString(":/new/Cards/Assets/PNG-cards-1.3/queen_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Queen_Of_Clubs);
    card King_Of_Clubs(Clubs,"King",13,QString(":/new/Cards/Assets/PNG-cards-1.3/king_of_clubs.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(King_Of_Clubs);
    card Two_Of_Diamonds(Diamonds,"Two",2,QString(":/new/Cards/Assets/PNG-cards-1.3/2_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Two_Of_Diamonds);
    card Three_Of_Diamonds(Diamonds,"Three",3,QString(":/new/Cards/Assets/PNG-cards-1.3/3_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Three_Of_Diamonds);
    card Four_Of_Diamonds(Diamonds,"Four",4,QString(":/new/Cards/Assets/PNG-cards-1.3/4_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Four_Of_Diamonds);
    card Five_Of_Diamonds(Diamonds,"Five",5,QString(":/new/Cards/Assets/PNG-cards-1.3/5_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Six_Of_Diamonds(Diamonds,"Six",6,QString(":/new/Cards/Assets/PNG-cards-1.3/6_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Seven_Of_Diamonds(Diamonds,"Seven",7,QString(":/new/Cards/Assets/PNG-cards-1.3/7_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Eight_Of_Diamonds(Diamonds,"Eight",8,QString(":/new/Cards/Assets/PNG-cards-1.3/8_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Nine_Of_Diamonds(Diamonds,"Nine",9,QString(":/new/Cards/Assets/PNG-cards-1.3/9_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Ten_Of_Diamonds(Diamonds,"Ten",10,QString(":/new/Cards/Assets/PNG-cards-1.3/10_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));

    Deck.push_back(Five_Of_Diamonds);
    Deck.push_back(Six_Of_Diamonds);
    Deck.push_back(Seven_Of_Diamonds);
    Deck.push_back(Eight_Of_Diamonds);
    Deck.push_back(Nine_Of_Diamonds);
    Deck.push_back(Ten_Of_Diamonds);



    //cardBack(Deck);/*gives the cards the cardback*/
}
void MainWindow:: shuffleDeck(vector<card>&Deck){
    unsigned seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    shuffle(Deck.begin(),Deck.end(),gen);//shuffles all elements inside the deck
    for(auto el: Deck){
        cout<<el.getValue()<<" "<<el.getvalueName()<<" "<<el.getsuite()<<endl;
    }
}

void MainWindow::showDeck(vector<card> &Deck){
    /*check if a widget is here or just start this with the game*/
    if(!cardBack){
    CardInSlot* Back = new CardInSlot(this,Deck[0].getBack());
    Back->setScaledContents(true);
    Back->setFixedSize(161,251);
    ui->Deck->addWidget(Back);
    cardBack = true;
    }
}
void MainWindow:: UpdateHealthBar(int &healthbar){
    if(gameOver(healthbar)){
        ui->RestartBtn->show();
        ui->card1btn->hide();
        ui->card2btn->hide();
        ui->card3btn->hide();
        ui->card4btn->hide();
        ui->card4btn->hide();
        ui->Dealbtn->hide();
        ui->textLog->setPlainText("game over!");
        ui->healthBar->setPlainText("health is now 0! you dead!");
        ui->punchBtn1->hide();
        ui->punchBtn2->hide();
        ui->punchBtn3->hide();
        ui->punchBtn4->hide();
    }else{
    ui->healthBar->setPlainText("current health: \n"+ QString::number(healthbar));//qstring:: number is used to convert healthbar into a string
    }
}
bool MainWindow:: gameOver(int &healthbar){
    if(healthbar<=0){
        healthbar = 0;
        return true;
    }else{
        return false;
    }
}
/*deals cards in empty slots everytime a room is cleared*/
void MainWindow::cardQueue(vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4, vector<card>&hand){
     if(Deck.empty()){
        cout<<"game over?"<<endl;
        ui->textLog->setPlainText("you finished the deck and clear the dungeon!");
        ui->Dealbtn->hide();
    }
     else{
    cout<<endl<<"current deck size is :"<<Deck.size()<<endl<<endl;
    if(!hand.empty()){
    cout<<"current card in hand is: "<<hand[0].getValue()<<" of "<<hand[0].getsuite()<<endl;
    }
    if(card1.empty() && card2.empty() && card3.empty() && card4.empty() && hand.empty()){
        if(Deck.size()>= 4){
            card1.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel1 = new CardInSlot(this,card1[0].getFront());
            cardLabel1->setScaledContents(true);
            cardLabel1->setFixedSize(161,251);
            cardLabel1->setvalue(card1[0].getValue());
            cardLabel1->setsuite(card1[0].getsuite());
            ui->Card1->addWidget(cardLabel1);
            card2.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel2 = new CardInSlot(this,card2[0].getFront());
            cardLabel2->setScaledContents(true);
            cardLabel2->setFixedSize(161,251);
            cardLabel2->setvalue(card2[0].getValue());
            cardLabel2->setsuite(card2[0].getsuite());
            ui->Card2->addWidget(cardLabel2);
            card3.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel3 = new CardInSlot(this,card3[0].getFront());
            cardLabel3->setScaledContents(true);
            cardLabel3->setFixedSize(161,251);
            cardLabel3->setvalue(card3[0].getValue());
            cardLabel3->setsuite(card3[0].getsuite());
            ui->Card3->addWidget(cardLabel3);
            card4.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel4 = new CardInSlot(this,card4[0].getFront());
            cardLabel4->setScaledContents(true);
            cardLabel4->setFixedSize(161,251);
            cardLabel4->setvalue(card4[0].getValue());
            cardLabel4->setsuite(card4[0].getsuite());
            ui->Card4->addWidget(cardLabel4);
            ui->card1btn->show();
            ui->card2btn->show();
            ui->card3btn->show();
            ui->card4btn->show();
            cout<<"the card in slot 1 is: "<<card1[0].getValue()<<" of "<<card1[0].getsuite()<<endl;
            cout<<"the card in slot 2 is: "<<card2[0].getValue()<<" of "<<card2[0].getsuite()<<endl;
            cout<<"the card in slot 3 is: "<<card3[0].getValue()<<" of "<<card3[0].getsuite()<<endl;
            cout<<"the card in slot 4 is: "<<card4[0].getValue()<<" of "<<card4[0].getsuite()<<endl;
            cout<<"there are currently "<< card1.size()<<" cards in slot 1"<<endl;
            cout<<"there are currently "<< card2.size()<<" cards in slot 2"<<endl;
            cout<<"there are currently "<< card3.size()<<" cards in slot 3"<<endl;
            cout<<"there are currently "<< card4.size()<<" cards in slot 4"<<endl;
            if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
                ui->punchBtn1->show();
            }
            if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
                ui->punchBtn2->show();
            }
            if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
                ui->punchBtn3->show();
            }
            if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
                ui->punchBtn4->show();
            }
        }
    }
        else if(card1.empty() && card2.empty() && card3.empty() && card4.empty() && !hand.empty()){
            if(Deck.size()>= 4){
                card1.push_back(Deck.back());
                Deck.pop_back();
                CardInSlot* cardLabel1 = new CardInSlot(this,card1[0].getFront());
                cardLabel1->setScaledContents(true);
                cardLabel1->setFixedSize(161,251);
                cardLabel1->setvalue(card1[0].getValue());
                cardLabel1->setsuite(card1[0].getsuite());
                ui->Card1->addWidget(cardLabel1);
                card2.push_back(Deck.back());
                Deck.pop_back();
                CardInSlot* cardLabel2 = new CardInSlot(this,card2[0].getFront());
                cardLabel2->setScaledContents(true);
                cardLabel2->setFixedSize(161,251);
                cardLabel2->setvalue(card2[0].getValue());
                cardLabel2->setsuite(card2[0].getsuite());
                ui->Card2->addWidget(cardLabel2);
                card3.push_back(Deck.back());
                Deck.pop_back();
                CardInSlot* cardLabel3 = new CardInSlot(this,card3[0].getFront());
                cardLabel3->setScaledContents(true);
                cardLabel3->setFixedSize(161,251);
                cardLabel3->setvalue(card3[0].getValue());
                cardLabel3->setsuite(card3[0].getsuite());
                ui->Card3->addWidget(cardLabel3);
                card4.push_back(Deck.back());
                Deck.pop_back();
                CardInSlot* cardLabel4 = new CardInSlot(this,card4[0].getFront());
                cardLabel4->setScaledContents(true);
                cardLabel4->setFixedSize(161,251);
                cardLabel4->setvalue(card4[0].getValue());
                cardLabel4->setsuite(card4[0].getsuite());
                ui->Card4->addWidget(cardLabel4);
                ui->card1btn->show();
                ui->card2btn->show();
                ui->card3btn->show();
                ui->card4btn->show();
                cout<<"the card in slot 1 is: "<<card1[0].getValue()<<" of "<<card1[0].getsuite()<<endl;
                cout<<"the card in slot 2 is: "<<card2[0].getValue()<<" of "<<card2[0].getsuite()<<endl;
                cout<<"the card in slot 3 is: "<<card3[0].getValue()<<" of "<<card3[0].getsuite()<<endl;
                cout<<"the card in slot 4 is: "<<card4[0].getValue()<<" of "<<card4[0].getsuite()<<endl;
                cout<<"there are currently "<< card1.size()<<" cards in slot 1"<<endl;
                cout<<"there are currently "<< card2.size()<<" cards in slot 2"<<endl;
                cout<<"there are currently "<< card3.size()<<" cards in slot 3"<<endl;
                cout<<"there are currently "<< card4.size()<<" cards in slot 4"<<endl;
                if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
                    ui->punchBtn1->show();
                }
                if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
                    ui->punchBtn2->show();
                }
                if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
                    ui->punchBtn3->show();
                }
                if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
                    ui->punchBtn4->show();
                }
            }
    }
        else if(!card1.empty() && card2.empty() && card3.empty() && card4.empty() ){
        if(Deck.size()>4){
        card2.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel2 = new CardInSlot(this,card2[0].getFront());
        cardLabel2->setScaledContents(true);
        cardLabel2->setFixedSize(161,251);
        cardLabel2->setvalue(card2[0].getValue());
        cardLabel2->setsuite(card2[0].getsuite());
        ui->Card2->addWidget(cardLabel2);
        card3.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel3 = new CardInSlot(this,card3[0].getFront());
        cardLabel3->setScaledContents(true);
        cardLabel3->setFixedSize(161,251);
        cardLabel3->setvalue(card3[0].getValue());
        cardLabel3->setsuite(card3[0].getsuite());
        ui->Card3->addWidget(cardLabel3);
        card4.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel4 = new CardInSlot(this,card4[0].getFront());
        cardLabel4->setScaledContents(true);
        cardLabel4->setFixedSize(161,251);
        cardLabel4->setvalue(card4[0].getValue());
        cardLabel4->setsuite(card4[0].getsuite());
        ui->Card4->addWidget(cardLabel4);
        ui->card1btn->show();
        ui->card2btn->show();
        ui->card3btn->show();
        ui->card4btn->show();
        cout<<"the card in slot 1 is: "<<card1[0].getValue()<<" of "<<card1[0].getsuite()<<endl;
        cout<<"the card in slot 2 is: "<<card2[0].getValue()<<" of "<<card2[0].getsuite()<<endl;
        cout<<"the card in slot 3 is: "<<card3[0].getValue()<<" of "<<card3[0].getsuite()<<endl;
        cout<<"the card in slot 4 is: "<<card4[0].getValue()<<" of "<<card4[0].getsuite()<<endl;
        cout<<"there are currently "<< card1.size()<<" cards in slot 1"<<endl;
        cout<<"there are currently "<< card2.size()<<" cards in slot 2"<<endl;
        cout<<"there are currently "<< card3.size()<<" cards in slot 3"<<endl;
        cout<<"there are currently "<< card4.size()<<" cards in slot 4"<<endl;
        if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
            ui->punchBtn1->show();
        }
        if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
            ui->punchBtn2->show();
        }
        if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
            ui->punchBtn3->show();
        }
        if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
            ui->punchBtn4->show();
        }}

    }   else if(card1.empty()&& !card2.empty() && card3.empty() && card4.empty() ){
        if(Deck.size()>4){
        card1.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel1 = new CardInSlot(this,card1[0].getFront());
        cardLabel1->setScaledContents(true);
        cardLabel1->setFixedSize(161,251);
        cardLabel1->setvalue(card2[0].getValue());
        cardLabel1->setsuite(card2[0].getsuite());
        ui->Card1->addWidget(cardLabel1);
        card3.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel3 = new CardInSlot(this,card3[0].getFront());
        cardLabel3->setScaledContents(true);
        cardLabel3->setFixedSize(161,251);
        cardLabel3->setvalue(card3[0].getValue());
        cardLabel3->setsuite(card3[0].getsuite());
        ui->Card3->addWidget(cardLabel3);
        card4.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel4 = new CardInSlot(this,card4[0].getFront());
        cardLabel4->setScaledContents(true);
        cardLabel4->setFixedSize(161,251);
        cardLabel4->setvalue(card4[0].getValue());
        cardLabel4->setsuite(card4[0].getsuite());
        ui->Card4->addWidget(cardLabel4);
        ui->card1btn->show();
        ui->card2btn->show();
        ui->card3btn->show();
        ui->card4btn->show();
        cout<<"the card in slot 1 is: "<<card1[0].getValue()<<" of "<<card1[0].getsuite()<<endl;
        cout<<"the card in slot 2 is: "<<card2[0].getValue()<<" of "<<card2[0].getsuite()<<endl;
        cout<<"the card in slot 3 is: "<<card3[0].getValue()<<" of "<<card3[0].getsuite()<<endl;
        cout<<"the card in slot 4 is: "<<card4[0].getValue()<<" of "<<card4[0].getsuite()<<endl;
        cout<<"there are currently "<< card1.size()<<" cards in slot 1"<<endl;
        cout<<"there are currently "<< card2.size()<<" cards in slot 2"<<endl;
        cout<<"there are currently "<< card3.size()<<" cards in slot 3"<<endl;
        cout<<"there are currently "<< card4.size()<<" cards in slot 4"<<endl;
        if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
            ui->punchBtn1->show();
        }
        if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
            ui->punchBtn2->show();
        }
        if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
            ui->punchBtn3->show();
        }
        if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
            ui->punchBtn4->show();
        }
        }

    }   else if(card1.empty() && card2.empty() && !card3.empty() && card4.empty() ){
        if(Deck.size()>4){
        card2.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel2 = new CardInSlot(this,card2[0].getFront());
        cardLabel2->setScaledContents(true);
        cardLabel2->setFixedSize(161,251);
        cardLabel2->setvalue(card2[0].getValue());
        cardLabel2->setsuite(card2[0].getsuite());
        ui->Card2->addWidget(cardLabel2);
        card1.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel1 = new CardInSlot(this,card1[0].getFront());
        cardLabel1->setScaledContents(true);
        cardLabel1->setFixedSize(161,251);
        cardLabel1->setvalue(card3[0].getValue());
        cardLabel1->setsuite(card3[0].getsuite());
        ui->Card1->addWidget(cardLabel1);
        card4.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel4 = new CardInSlot(this,card4[0].getFront());
        cardLabel4->setScaledContents(true);
        cardLabel4->setFixedSize(161,251);
        cardLabel4->setvalue(card4[0].getValue());
        cardLabel4->setsuite(card4[0].getsuite());
        ui->Card4->addWidget(cardLabel4);
        ui->card1btn->show();
        ui->card2btn->show();
        ui->card3btn->show();
        ui->card4btn->show();
        cout<<"the card in slot 1 is: "<<card1[0].getValue()<<" of "<<card1[0].getsuite()<<endl;
        cout<<"the card in slot 2 is: "<<card2[0].getValue()<<" of "<<card2[0].getsuite()<<endl;
        cout<<"the card in slot 3 is: "<<card3[0].getValue()<<" of "<<card3[0].getsuite()<<endl;
        cout<<"the card in slot 4 is: "<<card4[0].getValue()<<" of "<<card4[0].getsuite()<<endl;
        cout<<"there are currently "<< card1.size()<<" cards in slot 1"<<endl;
        cout<<"there are currently "<< card2.size()<<" cards in slot 2"<<endl;
        cout<<"there are currently "<< card3.size()<<" cards in slot 3"<<endl;
        cout<<"there are currently "<< card4.size()<<" cards in slot 4"<<endl;
        if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
            ui->punchBtn1->show();
        }
        if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
            ui->punchBtn2->show();
        }
        if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
            ui->punchBtn3->show();
        }
        if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
            ui->punchBtn4->show();
        }
        }
    }
    else if(card1.empty() && card2.empty() && card3.empty() && !card4.empty() ){
        if(Deck.size()>4){
        card2.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel2 = new CardInSlot(this,card2[0].getFront());
        cardLabel2->setScaledContents(true);
        cardLabel2->setFixedSize(161,251);
        cardLabel2->setvalue(card2[0].getValue());
        cardLabel2->setsuite(card2[0].getsuite());
        ui->Card2->addWidget(cardLabel2);
        card3.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel3 = new CardInSlot(this,card3[0].getFront());
        cardLabel3->setScaledContents(true);
        cardLabel3->setFixedSize(161,251);
        cardLabel3->setvalue(card3[0].getValue());
        cardLabel3->setsuite(card3[0].getsuite());
        ui->Card3->addWidget(cardLabel3);
        card1.push_back(Deck.back());
        Deck.pop_back();
        CardInSlot* cardLabel1 = new CardInSlot(this,card1[0].getFront());
        cardLabel1->setScaledContents(true);
        cardLabel1->setFixedSize(161,251);
        cardLabel1->setvalue(card4[0].getValue());
        cardLabel1->setsuite(card4[0].getsuite());
        ui->Card1->addWidget(cardLabel1);
        ui->card1btn->show();
        ui->card2btn->show();
        ui->card3btn->show();
        ui->card4btn->show();
        cout<<"the card in slot 1 is: "<<card1[0].getValue()<<" of "<<card1[0].getsuite()<<endl;
        cout<<"the card in slot 2 is: "<<card2[0].getValue()<<" of "<<card2[0].getsuite()<<endl;
        cout<<"the card in slot 3 is: "<<card3[0].getValue()<<" of "<<card3[0].getsuite()<<endl;
        cout<<"the card in slot 4 is: "<<card4[0].getValue()<<" of "<<card4[0].getsuite()<<endl;
        cout<<"there are currently "<< card1.size()<<" cards in slot 1"<<endl;
        cout<<"there are currently "<< card2.size()<<" cards in slot 2"<<endl;
        cout<<"there are currently "<< card3.size()<<" cards in slot 3"<<endl;
        cout<<"there are currently "<< card4.size()<<" cards in slot 4"<<endl;
        if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
            ui->punchBtn1->show();
        }
        if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
            ui->punchBtn2->show();
        }
        if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
            ui->punchBtn3->show();
        }
        if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
            ui->punchBtn4->show();
        }
        }
    }

        /*end game*/
        else if(Deck.empty()){
            cout<<"game over?"<<endl;
            ui->textLog->setPlainText("you finished the deck and clear the dungeon!");
            ui->Dealbtn->hide();
            ui->escapeRoom->hide();
            ui->RestartBtn->show();

    }
    }

}


/*debug function*/
void MainWindow:: debugDeck(vector<card>&Deck){
    string Diamonds = "Diamonds";
    card Two_Of_Diamonds(Diamonds,"Two",2,QString(":/new/Cards/Assets/PNG-cards-1.3/2_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Two_Of_Diamonds);
    card Three_Of_Diamonds(Diamonds,"Three",3,QString(":/new/Cards/Assets/PNG-cards-1.3/3_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Three_Of_Diamonds);
    card Four_Of_Diamonds(Diamonds,"Four",4,QString(":/new/Cards/Assets/PNG-cards-1.3/4_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Four_Of_Diamonds);
    card Five_Of_Diamonds(Diamonds,"Five",5,QString(":/new/Cards/Assets/PNG-cards-1.3/5_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Six_Of_Diamonds(Diamonds,"Six",6,QString(":/new/Cards/Assets/PNG-cards-1.3/6_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Seven_Of_Diamonds(Diamonds,"Seven",7,QString(":/new/Cards/Assets/PNG-cards-1.3/7_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Eight_Of_Diamonds(Diamonds,"Eight",8,QString(":/new/Cards/Assets/PNG-cards-1.3/8_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Nine_Of_Diamonds(Diamonds,"Nine",9,QString(":/new/Cards/Assets/PNG-cards-1.3/9_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    card Ten_Of_Diamonds(Diamonds,"Ten",10,QString(":/new/Cards/Assets/PNG-cards-1.3/10_of_diamonds.png"),QString(":/new/cardback/Assets/cardback.png"));
    Deck.push_back(Five_Of_Diamonds);
    Deck.push_back(Six_Of_Diamonds);
    Deck.push_back(Seven_Of_Diamonds);
    Deck.push_back(Eight_Of_Diamonds);
    Deck.push_back(Nine_Of_Diamonds);
    Deck.push_back(Ten_Of_Diamonds);
}

/*button function*/
void MainWindow::on_Startbtn_clicked()
{
    healthbar = 20;
    weaponPower = 0;
    isWeaponCursed = false;
    escapedLastRoom = false;
    trueweaponPower = 0;
    monsterPower = 0;
    UpdateHealthBar(healthbar);
    createDeck(Deck);
   // debugDeck(Deck);
    shuffleDeck(Deck);
    showDeck(Deck);
    ui->Startbtn->hide();
    ui->Dealbtn->show();
    ui->textLog->setPlainText("Game start");
    cardCounter(Deck);

}
void MainWindow::terribleDeckCheck(vector<card>card1,vector<card>card2,vector<card>card3,vector<card>card4,vector<card>Deck){
/*checks when there is only 1 card left in order to show the deal button again, allowing the player to take that card with them to the next room,
 also helps with the final room when there are less than 4 cards left in the deck and allows the deal button to fill the empty gaps*/

        if(!card1.empty() && card2.empty() && card3.empty() && card4.empty()){
            ui->Dealbtn->show();
        }else if(card1.empty()&& !card2.empty() && card3.empty() && card4.empty()){
            ui->Dealbtn->show();
        }else if(card1.empty() && card2.empty() && !card3.empty() && card4.empty()){
            ui->Dealbtn->show();
        }else if(card1.empty() && card2.empty() && card3.empty() && !card4.empty()){
            ui->Dealbtn->show();
        }else if(card1.empty() && card2.empty() && card3.empty() && card4.empty()){
            ui->Dealbtn->show();
        }else if(Deck.empty() && card1.empty() && card2.empty() && card3.empty() && card4.empty()){
            cout<<"deck is empty, you win!"<<endl;
            ui->textLog->setPlainText("you beat the dungeon!");
            ui->RestartBtn->show();
            ui->Dealbtn->hide();
        }
    }/*MUST FIX THIS*/

void MainWindow::on_Dealbtn_clicked()
{
    if(Deck.size()> 4){
    cardQueue(Deck,card1,card2,card3,card4,Hand);
    ui->escapeRoom->show();
    if(escapedLastRoom == true){
             escapedLastRoom = false;
    }
    cardCounter(Deck);
    ui->Dealbtn->hide();}
    else if(Deck.size()< 4 && !Deck.empty()){
        ui->escapeRoom->show();
        while(!Deck.empty()){
        if(card1.empty()){
            card1.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel1 = new CardInSlot(this,card1[0].getFront());
            cardLabel1->setScaledContents(true);
            cardLabel1->setFixedSize(161,251);
            cardLabel1->setvalue(card1[0].getValue());
            cardLabel1->setsuite(card1[0].getsuite());
            ui->Card1->addWidget(cardLabel1);
            ui->card1btn->show();
            if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
                ui->punchBtn1->show();
            }
        }
        else if(card2.empty()){
            card2.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel2 = new CardInSlot(this,card2[0].getFront());
            cardLabel2->setScaledContents(true);
            cardLabel2->setFixedSize(161,251);
            cardLabel2->setvalue(card2[0].getValue());
            cardLabel2->setsuite(card2[0].getsuite());
            ui->Card2->addWidget(cardLabel2);
            ui->card2btn->show();
            if(card2[0].getsuite() == "Spades" ||card2[0].getsuite() == "Clubs"){
                ui->punchBtn2->show();
            }
        }
        else if(card3.empty()){
            card3.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel3 = new CardInSlot(this,card3[0].getFront());
            cardLabel3->setScaledContents(true);
            cardLabel3->setFixedSize(161,251);
            cardLabel3->setvalue(card3[0].getValue());
            cardLabel3->setsuite(card3[0].getsuite());
            ui->Card3->addWidget(cardLabel3);
            ui->card3btn->show();
            if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
                ui->punchBtn3->show();
            }
        }
        else if(card4.empty()){
            card4.push_back(Deck.back());
            Deck.pop_back();
            CardInSlot* cardLabel4 = new CardInSlot(this,card4[0].getFront());
            cardLabel4->setScaledContents(true);
            cardLabel4->setFixedSize(161,251);
            cardLabel4->setvalue(card4[0].getValue());
            cardLabel4->setsuite(card4[0].getsuite());
            ui->Card4->addWidget(cardLabel4);
            ui->card4btn->show();
            if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
                ui->punchBtn4->show();
            }
        }
        }
        if(escapedLastRoom == true){
            escapedLastRoom = false;
        }
        cardCounter(Deck);
        ui->Dealbtn->hide();
    }
    else if(Deck.size() <= 0){
        cout<<"deck is empty, you win!"<<endl;
        ui->textLog->setPlainText("you beat the dungeon!");
        ui->healthBar->setPlainText(("you are the hero!!"));
        ui->cardCounter->setPlainText("you are so cool");
        ui->Dealbtn->hide();
        ui->RestartBtn->show();
    }
}

void MainWindow::removeCard(vector<card>&cardSlot,QVBoxLayout* cardLayout, QPushButton* punchButton){
    for(int i = 0;i<cardLayout->count();i++){
        QLayoutItem* item = cardLayout->itemAt(i);
        if(item){
            QWidget* widget = item->widget();
            if(widget){
                CardInSlot*cardLabel = qobject_cast<CardInSlot*>(widget);
                if(cardLabel){
                    cardLayout->removeWidget(cardLabel);
                    cardLabel->deleteLater();
                }
            }
        }
    }
    cardSlot.clear();
    if(punchButton->isVisible()){
        punchButton->hide();
    }
}



void MainWindow::deleteDeck(vector<card>&Deck){
    QVBoxLayout *layout = qobject_cast<QVBoxLayout*>(ui->Deck->layout());
    if(layout && layout->count()>0){

        QLayoutItem* item = layout->itemAt(0);
        if(item){
            QWidget* widget = item->widget();
            if(widget){
                CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                if(cardLabel){
                    layout->removeWidget(cardLabel);
                    cardLabel->deleteLater();
                }

            }
            delete item;
        }
        }

    Deck.clear();
}
void MainWindow:: clearEverything(vector<card>&hand,vector<card>&Deck,vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,int &healthbar, int &weaponPower,int &trueweaponPower){
    if(!Deck.empty()){
        Deck.clear();
    }
    if(!card1.empty()){
        removeCard(card1,ui->Card1,ui->punchBtn1);}
    if(!card2.empty()){
        removeCard(card2,ui->Card2,ui->punchBtn2);}
    if(!card3.empty()){
        removeCard(card3,ui->Card3,ui->punchBtn3);}
    if(!card4.empty()){
        removeCard(card4,ui->Card4,ui->punchBtn4);}

    //hand
    if(!hand.empty()){
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Hand->layout());
    if(layout){
        for(int i= 0;i<layout->count(); i++){
            QLayoutItem* item = layout->itemAt(i);
            if(item){
                QWidget* widget = item->widget();
                if(widget){
                    CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                    if(cardLabel){
                        layout->removeWidget(cardLabel);
                        cardLabel->deleteLater();

                    }
                }
            }
        }
    }
    ui->Startbtn->show();
    hand.clear();
    }

}

/*LETS DO EASY MODE FIRST x(*/
void MainWindow::movecard(std::vector<card>& hand,std::vector<card>& Deck,
              std::vector<card>& cardSlot,QPushButton* cardButton,QPushButton* cardPunchButton,
              QPlainTextEdit* textLog,
              QVBoxLayout* handLayout,
                          int& healthbar,int& weaponPower,int& trueweaponPower,QVBoxLayout* cardLayout){
    if(!hand.empty() && cardSlot.empty()){
        cout<<"error!"<<endl;
        cout<<"card slot is empty!"<<endl;
        textLog->setPlainText("error!\n cardslot is empty");
    }
    if(hand.empty()){
        if(cardSlot[0].getsuite() == "Diamonds"){
            isWeaponCursed = false;
            textLog->setPlainText("weapon power: "+ QString::number(weaponPower));
            hand.push_back(cardSlot[0]);
            weaponPower = hand[0].getValue();
            trueweaponPower = weaponPower;
            textLog->setPlainText("equipping weapon!\n it's power value is" + QString::number(weaponPower));
            CardInSlot* HandLabel = new CardInSlot(this,cardSlot[0].getFront());
            HandLabel->setScaledContents(true);
            HandLabel->setFixedSize(161,251);
            HandLabel->setvalue(hand[0].getValue());
            HandLabel->setsuite(hand[0].getsuite());
            handLayout->addWidget(HandLabel);

            removeCard(cardSlot,cardLayout,cardPunchButton);
            cardButton->hide();
        }
        else if(cardSlot[0].getsuite() == "Hearts"){
            cout<<"you drink a potion and heal"<<endl;
            healthbar += cardSlot[0].getValue();
            UpdateHealthBar(healthbar);
            if(healthbar>=20){
                healthbar = 20;
                UpdateHealthBar(healthbar);
            }

            removeCard(cardSlot,cardLayout,cardPunchButton);
            cardButton->hide();
        }
        else if(cardSlot[0].getsuite() == "Clubs" || cardSlot[0].getsuite() == "Spades"){
            cout<<"you punch the monster withyour bare hands!"<<endl;
            healthbar -=cardSlot[0].getValue() - trueweaponPower;
            weaponPower = cardSlot[0].getValue();
            textLog->setPlainText("weaponPower:"+QString::number(trueweaponPower)+"\nlast killed monster power: "+QString::number(weaponPower));

            removeCard(cardSlot,cardLayout,cardPunchButton);
            cardButton->hide();
            UpdateHealthBar(healthbar);
        }
        /*terrible deck check*/
        terribleDeckCheck(card1,card2,card3,card4,Deck);
    }else if(!hand.empty()){
        if(hand[0].getsuite() == "Diamonds"){
            if(cardSlot[0].getsuite() == "Diamonds"){
                isWeaponCursed = false;
                cout<<"switching weapons..."<<endl;
                cout<<"the new weapon's value is: "<<cardSlot[0].getValue()<<endl;
                hand[0] = cardSlot[0];
                weaponPower = hand[0].getValue();
                trueweaponPower = weaponPower;
                textLog->setPlainText("weapon Power: "+QString::number(weaponPower));
                QVBoxLayout* layout= qobject_cast<QVBoxLayout*>(ui->Hand->layout());
                if(layout){
                    for(int i = 0; i<layout->count(); i++){
                        QLayoutItem* item = layout->itemAt(i);
                        if(item){
                            QWidget* widget = item->widget();
                            if(widget){
                                CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                                if(cardLabel){
                                    layout->removeWidget(cardLabel);
                                    cardLabel->deleteLater();
                                    layout->update();
                                }
                            }
                        }
                    }
                }
                CardInSlot* newLabel = new CardInSlot(this,hand[0].getFront());
                newLabel->setScaledContents(true);
                newLabel->setFixedSize(161,251);
                newLabel->setvalue(hand[0].getValue());
                newLabel->setsuite(hand[0].getsuite());
                ui->Hand->addWidget(newLabel);
                ui->Hand->update();

                removeCard(cardSlot,cardLayout,cardPunchButton);
                cardButton->hide();
            }else if(cardSlot[0].getsuite() == "Hearts"){
                cout<<"you drink a potion and heal"<<endl;
                healthbar += cardSlot[0].getValue();
                if(healthbar > 20){/*health cap*/
                    healthbar = 20;
                    UpdateHealthBar(healthbar);
                }else{
                    UpdateHealthBar(healthbar);
                }

                removeCard(cardSlot,cardLayout,cardPunchButton);
                cardButton->hide();
            }
            else if(cardSlot[0].getsuite() == "Clubs" || cardSlot[0].getsuite() == "Spades"){
                monsterPower = cardSlot[0].getValue();
                if(isWeaponCursed == false){
                    if(trueweaponPower>=monsterPower){
                        cout<<"your weapon is stronger than the monster!"<<endl;
                        cout<<"you slay the monster without taking damage"<<endl;
                        cout<<"your weapon has been cursed..."<<endl;
                        isWeaponCursed = true;
                        cout<<"it can only attack monsters weaker than the one you've just slain"<<endl;
                        weaponPower = monsterPower;
                        cout<<"its current strength is: "<<hand[0].getValue()<<endl;
                        textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                        cardButton->hide();

                        removeCard(cardSlot,cardLayout,cardPunchButton);
                    }
                    else if(trueweaponPower<monsterPower){
                        int damageTaken = monsterPower - trueweaponPower;
                        cout<<"your weapon is weaker than the monster!"<<endl;
                        cout<<"you slay the monster but take "<<damageTaken<<" damage!"<<endl;
                        healthbar -= damageTaken;
                        isWeaponCursed = true;
                        cout<<"it can now only attack monsters weaker than the one you've just slain"<<endl;
                        /*update true weapon power only when the weapon gets cursed*/
                        weaponPower = monsterPower;
                        textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                        UpdateHealthBar(healthbar);

                        removeCard(cardSlot,cardLayout,cardPunchButton);
                        cardButton->hide();
                    }
                }
                else if(isWeaponCursed == true){
                    if(weaponPower<monsterPower){
                        cout<<"your weapon is cursed!!"<<endl;
                        cout<<"you can only attack monsters weaker than it!"<<endl;
                        cout<<"it's current strength is: "<<weaponPower<<endl;
                    }
                    else if(weaponPower>=monsterPower){
                        if(monsterPower>=trueweaponPower){
                            cout<<"the monster is weaker than the last monster you've slain!"<<endl;
                            int damageTaken = monsterPower - trueweaponPower;
                            healthbar -= damageTaken;
                            weaponPower = monsterPower;
                            cout<<"you slay it but take "<<damageTaken<<" damage"<<endl;
                            cout<<"you can now only attack monsters weaker than this one"<<endl;
                            cout<<"your current weapon strength is: "<<weaponPower<<endl;
                            textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                            UpdateHealthBar(healthbar);

                            removeCard(cardSlot,cardLayout,cardPunchButton);
                            cardButton->hide();
                        }
                        else if(monsterPower<trueweaponPower){
                            cout<<"you attack a weaker monster with your cursed sword"<<endl;
                            cout<<"you can now only attack monsters weaker than that one"<<endl;
                            weaponPower = monsterPower;
                            cout<<"the new weapon value is"<<weaponPower<<endl;
                            textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));

                            removeCard(cardSlot,cardLayout,cardPunchButton);
                            cardButton->hide();

                        }
                    }
                }
            }
            /*stopped here*/
        }
        terribleDeckCheck(card1,card2,card3,card4,Deck);
    }
}


void MainWindow::on_card1btn_clicked()
{
    //movecard1(Hand,Deck,card1,card2,card3,card4,healthbar, weaponPower,trueweaponPower);
    movecard(Hand,Deck,card1,ui->card1btn,ui->punchBtn1,ui->textLog,ui->Hand,healthbar,weaponPower,trueweaponPower,ui->Card1);
     ui->escapeRoom->hide();

}


void MainWindow::on_card2btn_clicked()
{
    movecard(Hand,Deck,card2,ui->card2btn,ui->punchBtn2,ui->textLog,ui->Hand,healthbar,weaponPower,trueweaponPower,ui->Card2);
    ui->escapeRoom->hide();
}


void MainWindow::on_card3btn_clicked()
{
    movecard(Hand,Deck,card3,ui->card3btn,ui->punchBtn3,ui->textLog,ui->Hand,healthbar,weaponPower,trueweaponPower,ui->Card3);
    ui->escapeRoom->hide();

}


void MainWindow::on_card4btn_clicked()
{
    movecard(Hand,Deck,card4,ui->card4btn,ui->punchBtn4,ui->textLog,ui->Hand,healthbar,weaponPower,trueweaponPower,ui->Card4);
    ui->escapeRoom->hide();

}


void MainWindow::on_RestartBtn_clicked()
{

    clearEverything(Hand,Deck,card1,card2,card3,card4,healthbar,weaponPower,trueweaponPower);

    //debugDeck(Deck);
    ui->Startbtn->show();
    ui->RestartBtn->hide();
    }
 void MainWindow::punchCard(vector<card>&cardSlot,QPushButton* PunchButton, QPushButton* CardButton,QVBoxLayout*CardLayout,QPushButton *escapeRoom,int&healthbar,QPlainTextEdit* textlog,int trueweaponPower, int weaponPower){
     if(cardSlot[0].getsuite() == "Clubs" || cardSlot[0].getsuite() == "Spades"){
        escapeRoom->hide();
     }
     cout<<"you punch the monster with your bare hands!"<<endl;
     healthbar -=cardSlot[0].getValue() - 0;
     textlog->setPlainText("weapon power: " + QString::number(trueweaponPower)+"\nlast killed monster power: "+ QString::number(weaponPower));
    removeCard(cardSlot,CardLayout,PunchButton);
     //removeCard(vector<card>&cardSlot,QVBoxLayout* cardLayout, QPushButton* punchButton
    CardButton->hide();
    UpdateHealthBar(healthbar);
    if(gameOver(healthbar)){
        ui->RestartBtn->show();
    }
    PunchButton->hide();

}

//if card is monster show this button, otherwise hide it from start
//the set up is inside the deal button
void MainWindow::on_punchBtn1_clicked()
{
    punchCard(card1,ui->punchBtn1,ui->card1btn,ui->Card1,ui->escapeRoom,healthbar,ui->textLog,trueweaponPower,weaponPower);
    terribleDeckCheck(card1,card2,card3,card4,Deck);
}


void MainWindow::on_punchBtn2_clicked()
{
    punchCard(card2,ui->punchBtn2,ui->card2btn,ui->Card2,ui->escapeRoom,healthbar,ui->textLog,trueweaponPower,weaponPower);
    terribleDeckCheck(card1,card2,card3,card4,Deck);
}


void MainWindow::on_punchBtn3_clicked()
{
    punchCard(card3,ui->punchBtn3,ui->card3btn,ui->Card3,ui->escapeRoom,healthbar,ui->textLog,trueweaponPower,weaponPower);
    terribleDeckCheck(card1,card2,card3,card4,Deck);
}


void MainWindow::on_punchBtn4_clicked()
{
    punchCard(card4,ui->punchBtn4,ui->card4btn,ui->Card4,ui->escapeRoom,healthbar,ui->textLog,trueweaponPower,weaponPower);
    terribleDeckCheck(card1,card2,card3,card4,Deck);
}

void MainWindow:: escapeRoom(vector<card>&card1,vector<card>&card2,vector<card>&card3,vector<card>&card4,vector<card>&Deck,bool &escapedLastRoom,vector<card>Hand){
    /*escaping does properly save weapon power, it saves weapon value*/
    if(escapedLastRoom == false){
       // ui->textLog->setPlainText("cannot escape an empty room");
         if(!card1.empty()){
            if(card1[0].getsuite() == "Spades" || card1[0].getsuite() == "Clubs"){
            ui->punchBtn1->hide();
            }
        Deck.push_back(card1[0]);
        card1.clear();
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Card1->layout());
        if(layout){
            for(int i= 0;i<layout->count(); i++){
                QLayoutItem* item = layout->itemAt(i);
                if(item){
                    QWidget* widget = item->widget();
                    if(widget){
                        CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                        if(cardLabel){
                            layout->removeWidget(cardLabel);
                            cardLabel->deleteLater();
                            //layout->update();
                        }
                    }
                }
            }
        }
    }
    if(!card2.empty()){
        if(card2[0].getsuite() == "Spades" || card2[0].getsuite() == "Clubs"){
            ui->punchBtn2->hide();
        }
        Deck.push_back(card2[0]);
        card2.clear();
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Card2->layout());
        if(layout){
            for(int i= 0;i<layout->count(); i++){
                QLayoutItem* item = layout->itemAt(i);
                if(item){
                    QWidget* widget = item->widget();
                    if(widget){
                        CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                        if(cardLabel){
                            layout->removeWidget(cardLabel);
                            cardLabel->deleteLater();
                            //layout->update();
                        }
                    }
                }
            }
        }
    }
    if(!card3.empty()){
        if(card3[0].getsuite() == "Spades" || card3[0].getsuite() == "Clubs"){
            ui->punchBtn3->hide();
        }
        Deck.push_back(card3[0]);
        card3.clear();
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Card3->layout());
        if(layout){
            for(int i= 0;i<layout->count(); i++){
                QLayoutItem* item = layout->itemAt(i);
                if(item){
                    QWidget* widget = item->widget();
                    if(widget){
                        CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                        if(cardLabel){
                            layout->removeWidget(cardLabel);
                            cardLabel->deleteLater();
                            //layout->update();
                        }
                    }
                }
            }
        }
    }
    if(!card4.empty()){
        if(card4[0].getsuite() == "Spades" || card4[0].getsuite() == "Clubs"){
            ui->punchBtn4->hide();
        }
        Deck.push_back(card4[0]);
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Card4->layout());
        if(layout){
            for(int i= 0;i<layout->count(); i++){
                QLayoutItem* item = layout->itemAt(i);
                if(item){
                    QWidget* widget = item->widget();
                    if(widget){
                        CardInSlot* cardLabel = qobject_cast<CardInSlot*>(widget);
                        if(cardLabel){
                            layout->removeWidget(cardLabel);
                            cardLabel->deleteLater();
                            //layout->update();
                        }
                    }
                }
            }
        }
        card4.clear();
    }
    shuffleDeck(Deck);
    if(!Hand.empty()){
        ui->textLog->setPlainText("escaped room!\ncurrent weapon Power is: "+ QString::number(weaponPower));
        cardCounter(Deck);
    }else{
        ui->textLog->setPlainText("you escape the room");
        cardCounter(Deck);
    }
    escapedLastRoom = true;
    ui->escapeRoom->hide();
    }


    }
void MainWindow::cardCounter(vector<card>Deck){
    ui->cardCounter->setPlainText("cards left:\n" + QString::number(Deck.size()));
}
/*whats next:

also exception for final room to only deal for 3/2/1 cards (not really since its 44 cards total so the final room will always have 4 cards and 0 left in the deck
3 one card saved per room:
must allow a deal to happen when 3 cards have been used and keep one card for next room
^ this i kinda must do to be as close as possible to the game*/

void MainWindow::on_escapeRoom_clicked()
{
    escapeRoom(card1,card2,card3,card4,Deck,escapedLastRoom,Hand);
    cardQueue(Deck,card1,card2,card3,card4,Hand);
    cout<<"deck size is: "<<Deck.size()<<" this is after escaping btw"<<endl;
    cardCounter(Deck);

}

