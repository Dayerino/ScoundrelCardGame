void MainWindow:: movecard4(vector<card>&card4, vector<card>&hand,int &healthbar, int &weaponPower, int& trueweaponPower, int& monsterPower){
    if(!hand.empty() && card4.empty()){
        cout<<"error!"<<endl;
        cout<<"card slot is empty!"<<endl;
        ui->textLog->setPlainText("error!\n cardslot is empty!");
    }
    if(hand.empty()){
        weaponPower = 0;
        trueweaponPower = 0;
        if(card4[0].getsuite() == "Diamonds"){
            isWeaponCursed = false;
            ui->textLog->setPlainText("weapon power: "+ QString::number(weaponPower));
            hand.push_back(card4[0]);
            weaponPower = hand[0].getValue();
            trueweaponPower=weaponPower;
            ui->textLog->setPlainText("equipping weapon!\nit's power value is"+ QString::number(weaponPower));
            CardInSlot* HandLabel = new CardInSlot(this,hand[0].getFront());
            HandLabel->setScaledContents(true);
            HandLabel->setFixedSize(150,200);
            HandLabel->setvalue(hand[0].getValue());
            HandLabel->setsuite(hand[0].getsuite());
            ui->Hand->addWidget(HandLabel);
            /*this dynamically detects the cards inside the detected layout, im still gonna have to rewrite this in the other functions*/
            removeCard4(card4);
            ui->card4btn->hide();
        }
        else if(card4[0].getsuite() == "Hearts"){
            cout<<"you drink a potion and heal"<<endl;
            healthbar += card4[0].getValue();
            if(healthbar > 20){/*health cap*/
                healthbar = 20;
                UpdateHealthBar(healthbar);
            }else{
                UpdateHealthBar(healthbar);
            }
            removeCard4(card4);
            ui->card4btn->hide();
        }
        else if(card4[0].getsuite()== "Clubs" || card4[0].getsuite()== "Spades"){
            cout<<"you punch the monster with your bare hands!"<<endl;
            healthbar -= card4[0].getValue() - trueweaponPower;
            weaponPower = card4[0].getValue();
            /*make this a function, for each card slot*/
            ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster power: "+QString::number(weaponPower));
            removeCard4(card4);
            ui->card4btn->hide();
            UpdateHealthBar(healthbar);
            /*GAME OVER CHECK HERE*/
            /*gameover(); if health <=0*/
        }

    }else if(!hand.empty()){
        if(hand[0].getsuite() == "Diamonds"){
            if(card4[0].getsuite() == "Diamonds"){
                isWeaponCursed = false;
                cout<<"switching weapons..."<<endl;
                cout<<"the new weapon's value is: "<<card4[0].getValue()<<endl;
                hand.pop_back();
                hand.push_back(card4[0]);
                weaponPower = hand[0].getValue();
                trueweaponPower = weaponPower;/*no reason to update this beyond this point*/
                ui->textLog->setPlainText("weapon power: "+ QString::number(weaponPower));
                /*this is replacing hand not removing card*/
                QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Hand->layout());
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
                newLabel->setFixedSize(150,200);
                newLabel->setvalue(hand[0].getValue());
                newLabel->setsuite(hand[0].getsuite());
                ui->Hand->addWidget(newLabel);
                ui->Hand->update();
                removeCard4(card4);
                ui->card4btn->hide();
            }
            else if(card4[0].getsuite()== "Hearts"){
                cout<<"you drink a potion and heal"<<endl;
                healthbar += card4[0].getValue();
                if(healthbar > 20){/*health cap*/
                    healthbar = 20;
                    UpdateHealthBar(healthbar);
                }else{
                    UpdateHealthBar(healthbar);
                }
                removeCard4(card4);
                ui->card4btn->hide();
            }
            else if(card4[0].getsuite() == "Clubs" || card4[0].getsuite() == "Spades"){
                monsterPower = card4[0].getValue();
                if(isWeaponCursed == false){
                    if(trueweaponPower>monsterPower){
                        cout<<"your weapon is stronger than the monster!"<<endl;
                        cout<<"you slay the monster without taking damage"<<endl;
                        cout<<"your weapon has been cursed..."<<endl;
                        isWeaponCursed = true;
                        cout<<"it can only attack monsters weaker than the one you've just slain"<<endl;
                        weaponPower = monsterPower;
                        cout<<"its current strength is: "<<hand[0].getValue()<<endl;
                        ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));

                        ui->card4btn->hide();
                        removeCard4(card4);
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
                        ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                        UpdateHealthBar(healthbar);
                        /*GAME OVER CHECK HERE*/
                        removeCard4(card4);
                        ui->card4btn->hide();
                    }
                }
                else if(isWeaponCursed == true){
                    if(weaponPower<monsterPower){
                        cout<<"your weapon is cursed!!"<<endl;
                        cout<<"you can only attack monsters weaker than it!"<<endl;
                        cout<<"it's current strength is: "<<weaponPower<<endl;
                    }
                    else if(weaponPower>monsterPower){
                        if(monsterPower>trueweaponPower){
                            cout<<"the monster is weaker than the last monster you've slain!"<<endl;
                            int damageTaken = monsterPower - trueweaponPower;
                            healthbar -= damageTaken;
                            weaponPower = monsterPower;
                            cout<<"you slay it but take "<<damageTaken<<" damage"<<endl;
                            cout<<"you can now only attack monsters weaker than this one"<<endl;
                            cout<<"your current weapon strength is: "<<weaponPower<<endl;
                            ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                            UpdateHealthBar(healthbar);
                            removeCard4(card4);
                            ui->card4btn->hide();
                        }
                        else if(monsterPower<trueweaponPower){
                            cout<<"you attack a weaker monster with your cursed sword"<<endl;
                            cout<<"you can now only attack monsters weaker than that one"<<endl;
                            weaponPower = monsterPower;
                            cout<<"the new weapon value is"<<weaponPower<<endl;
                            ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                            removeCard4(card4);
                            ui->card4btn->hide();
                        }
                    }
                }
            }
        }
    }
}


















/*void MainWindow:: movecard4(vector<card>&card4, vector<card>&hand,int &healthbar, int &weaponPower,int &trueweaponPower, int &monsterPower){
    if(!hand.empty() && card4.empty()){
        cout<<"error!"<<endl;
        cout<<"card slot is empty!"<<endl;
        ui->textLog->setPlainText("error!\n cardslot is empty!");
    }
    if(hand.empty()){
        weaponPower = 0;
        trueweaponPower = 0;
        if(card4[0].getsuite() == "Diamonds"){
            isWeaponCursed = false;
            ui->textLog->setPlainText("weapon power: "+ QString::number(weaponPower));
            hand.push_back(card4[0]);
            weaponPower = hand[0].getValue();
            trueweaponPower=weaponPower;
            ui->textLog->setPlainText("equipping weapon!\nit's power value is"+ QString::number(weaponPower));
            CardInSlot* HandLabel = new CardInSlot(this,hand[0].getFront());
            HandLabel->setScaledContents(true);
            HandLabel->setFixedSize(150,200);
            HandLabel->setvalue(hand[0].getValue());
            HandLabel->setsuite(hand[0].getsuite());
            ui->Hand->addWidget(HandLabel);
            /*this dynamically detects the cards inside the detected layout, im still gonna have to rewrite this in the other functions
            removeCard4(card4);
            ui->card4btn->hide();
        }
        else if(card4[0].getsuite() == "Hearts"){
            cout<<"you drink a potion and heal"<<endl;
            healthbar += card4[0].getValue();
            if(healthbar > 20){/*health cap
                healthbar = 20;
                UpdateHealthBar(healthbar);
            }else{
                UpdateHealthBar(healthbar);
            }
            removeCard4(card4);
            ui->card4btn->hide();
        }
        else if(card4[0].getsuite()== "Clubs" || card4[0].getsuite()== "Spades"){
            cout<<"you punch the monster with your bare hands!"<<endl;
            healthbar -= card4[0].getValue() - trueweaponPower;
            weaponPower = card4[0].getValue();
            /*make this a function, for each card slot
            ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster power: "+QString::number(weaponPower));
            removeCard4(card4);
            ui->card4btn->hide();
            UpdateHealthBar(healthbar);
            /*GAME OVER CHECK HERE*/
            /*gameover(); if health <=0
        }

    }else if(!hand.empty()){
        if(hand[0].getsuite() == "Diamonds"){
            if(card4[0].getsuite() == "Diamonds"){
                isWeaponCursed = false;
                cout<<"switching weapons..."<<endl;
                cout<<"the new weapon's value is: "<<card4[0].getValue()<<endl;
                hand.pop_back();
                hand.push_back(card4[0]);
                weaponPower = hand[0].getValue();
                trueweaponPower = weaponPower;/*no reason to update this beyond this point
                ui->textLog->setPlainText("weapon power: "+ QString::number(weaponPower));
                /*this is replacing hand not removing card
                QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->Hand->layout());
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
                newLabel->setFixedSize(150,200);
                newLabel->setvalue(hand[0].getValue());
                newLabel->setsuite(hand[0].getsuite());
                ui->Hand->addWidget(newLabel);
                ui->Hand->update();
                removeCard4(card4);
                ui->card4btn->hide();
            }
            else if(card4[0].getsuite()== "Hearts"){
                cout<<"you drink a potion and heal"<<endl;
                healthbar += card4[0].getValue();
                if(healthbar > 20){/*health cap
                    healthbar = 20;
                    UpdateHealthBar(healthbar);
                }else{
                    UpdateHealthBar(healthbar);
                }
                removeCard4(card4);
                ui->card4btn->hide();
            }
            else if(card4[0].getsuite() == "Clubs" || card4[0].getsuite() == "Spades"){
                monsterPower = card4[0].getValue();
                if(isWeaponCursed == false){
                    if(trueweaponPower>monsterPower){
                        cout<<"your weapon is stronger than the monster!"<<endl;
                        cout<<"you slay the monster without taking damage"<<endl;
                        cout<<"your weapon has been cursed..."<<endl;
                        isWeaponCursed = true;
                        cout<<"it can only attack monsters weaker than the one you've just slain"<<endl;
                        weaponPower = monsterPower
                                          cout<<"its current strength is: "<<hand[0].getValue()<<endl;
                        ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));

                        ui->card4btn->hide();
                        removeCard4(card4);
                    }
                    else if(trueweaponPower<monsterPower){
                        int damageTaken = monsterPower - trueweaponPower;
                        cout<<"your weapon is weaker than the monster!"<<endl;
                        cout<<"you slay the monster but take "<<damageTaken<<" damage!"<<endl;
                        healthbar -= damageTaken;
                        isWeaponCursed = true;
                        cout<<"it can now only attack monsters weaker than the one you've just slain"<<endl;
                        /*update true weapon power only when the weapon gets cursed
                        weaponPower = monsterPower;
                        ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                        UpdateHealthBar(healthbar);
                        /*GAME OVER CHECK HERE
                        removeCard4(card4);
                        ui->card4btn->hide();
                    }
                }
                else if(isWeaponCursed == true){
                    if(weaponPower<monsterPower){
                        cout<<"your weapon is cursed!!"<<endl;
                        cout<<"you can only attack monsters weaker than it!"<<endl;
                        cout<<"it's current strength is: "<<weaponPower<<endl;
                    }
                    else if(weaponPower>monsterPower){
                        if(monsterPower>trueweaponPower){
                            cout<<"the monster is weaker than the last monster you've slain!"<<endl;
                            int damageTaken = monsterPower - trueweaponPower;
                            healthbar -= damageTaken;
                            weaponPower = monsterPower;
                            cout<<"you slay it but take "<<damageTaken<<" damage"<<endl;
                            cout<<"you can now only attack monsters weaker than this one"<<endl;
                            cout<<"your current weapon strength is: "<<weaponPower<<endl;
                            ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                            UpdateHealthBar(healthbar);
                            removeCard4(card4);
                            ui->card4btn->hide();
                        }
                        else if(monsterPower<trueweaponPower){
                            cout<<"you attack a weaker monster with your cursed sword"<<endl;
                            cout<<"you can now only attack monsters weaker than that one"<<endl;
                            weaponPower = monsterPower;
                            cout<<"the new weapon value is"<<weaponPower<<endl;
                            ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                            removeCard4(card4);
                            ui->card4btn->hide();
                        }
                    }
                }
            }
        }
    }
}
/*
    else if( hand[0].getsuite() == "Diamonds" && card4[0].getsuite() == "Diamonds"){

    }
    else if(hand[0].getsuite() == "Diamonds" && card4[0].getsuite() == "Clubs"){
        monsterPower = card4[0].getValue();
        kill monster with sword
        cout<<"attacking the monster!"<<endl;
        if(isWeaponCursed == false){
            if(trueweaponPower>monsterPower){

            }
            else if(trueweaponPower < monsterPower){

            }
        }
        else if(isWeaponCursed == true){
            if(weaponPower < monsterPower){

            }else if(weaponPower>monsterPower){
                if(monsterPower>trueweaponPower){

                }
                else{
                cout<<"you attack a weaker monster with your cursed sword"<<endl;
                cout<<"you can now only attack monsters weaker than that one"<<endl;
                weaponPower = monsterPower
                cout<<"the new weapon value is"<<weaponPower<<endl;
                ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                removeCard4(card4);
                ui->card4btn->hide();
                }
            }
        }
        /*remove the card from it's slot only if the monster is killed

    }else if(hand[0].getsuite() =="Diamonds" && card4[0].getsuite() == "Spades"){
        monsterPower = card4[0].getValue();
        /*kill monster with sword
        cout<<"attacking the monster!"<<endl;
        if(isWeaponCursed == false){
            if(trueweaponPower>monsterPower){
                cout<<"your weapon is stronger than the monster!"<<endl;
                cout<<"you slay the monster without taking damage"<<endl;
                cout<<"your weapon has been cursed..."<<endl;
                isWeaponCursed = true;
                cout<<"it can only attack monsters weaker than the one you've just slain"<<endl;
                weaponPower = monsterPower
                                  cout<<"its current strength is: "<<hand[0].getValue()<<endl;
                ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));

                ui->card4btn->hide();
                removeCard4(card4);
            }
            else if(trueweaponPower < monsterPower){
                int damageTaken = monsterPower - trueweaponPower;
                cout<<"your weapon is weaker than the monster!"<<endl;
                cout<<"you slay the monster but take "<<damageTaken<<" damage!"<<endl;
                healthbar -= damageTaken;
                isWeaponCursed = true;
                cout<<"it can now only attack monsters weaker than the one you've just slain"<<endl;
                /*update true weapon power only when the weapon gets cursed
                weaponPower = monsterPower
                                  ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                UpdateHealthBar(healthbar);
                /*GAME OVER CHECK HERE
                removeCard4(card4);
                ui->card4btn->hide();
            }
        }
        else if(isWeaponCursed == true){
            if(weaponPower < monsterPower){
                cout<<"your weapon is cursed!!"<<endl;
                cout<<"you can only attack monsters weaker than it!"<<endl;
                cout<<"it's current strength is: "<<weaponPower<<endl;
                /*this means u cant attack so i might have to make this an exception, make sure this doesnt move the card
                return;
            }else if(weaponPower>monsterPower){
                if(monsterPower>trueweaponPower){
                    cout<<"the monster is weaker than the last monster you've slain!"<<endl;
                    int damageTaken = monsterPower - trueweaponPower;
                    healthbar -= damageTaken;
                    weaponPower = monsterPower;
                    cout<<"you slay it but take "<<damageTaken<<" damage"<<endl;
                    cout<<"you can now only attack monsters weaker than this one"<<endl;
                    cout<<"your current weapon strength is: "<<weaponPower<<endl;
                    ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                    UpdateHealthBar(healthbar);
                    removeCard4(card4);
                    ui->card4btn->hide();
                }
                else{
                    cout<<"you attack a weaker monster with your cursed sword"<<endl;
                    cout<<"you can now only attack monsters weaker than that one"<<endl;
                    weaponPower = monsterPower
                                      cout<<"the new weapon value is"<<weaponPower<<endl;
                    ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster: "+QString::number(weaponPower));
                    removeCard4(card4);
                    ui->card4btn->hide();
                }
            }
        }
    }
    else if(hand[0].getsuite()== "Diamonds" && card4[0].getsuite() == "Hearts"){

    }
    else if(hand.empty() && card4[0].getsuite() == "Hearts"){
        cout<<"you drink a potion and heal"<<endl;
        healthbar += card4[0].getValue();
        if(healthbar > 20){/*health cap
            healthbar = 20;
            UpdateHealthBar(healthbar);
        }else{
            UpdateHealthBar(healthbar);
        }
        removeCard4(card4);
        ui->card4btn->hide();
    }else if(hand.empty() && card4[0].getsuite() == "Clubs"){
        weaponPower = 0;
        trueweaponPower = 0;
        cout<<"you punch the monster with your bare hands!"<<endl;
        healthbar -= card4[0].getValue() - trueweaponPower;
        weaponPower = card4[0].getValue();
        /*make this a function, for each card slot
        ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster power: "+QString::number(weaponPower));
        removeCard4(card4);
        ui->card4btn->hide();
        UpdateHealthBar(healthbar);
        /*GAME OVER CHECK HERE*/
        /*gameover(); if health <=0
    }else if(hand.empty() && card4[0].getsuite() == "Spades"){
        weaponPower = 0;
        trueweaponPower = 0;
        cout<<"you punch the monster with your bare hands!"<<endl;
        healthbar -=card4[0].getValue() - trueweaponPower;
        weaponPower = card4[0].getValue();
        ui->textLog->setPlainText("weapon power: "+ QString::number(trueweaponPower)+"\nlast killed monster power: "+QString::number(weaponPower));
        removeCard4(card4);
        ui->card4btn->hide();
        /*gameover(); if health <=0
        UpdateHealthBar(healthbar);
        /*GAME OVER CHECK HERE
    }
}*/
