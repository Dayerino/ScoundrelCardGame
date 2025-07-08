# ScoundrelCardGame
a card game made with QT Creator, its based off the game called Scoundrel, it is a single player dungeon crawler  created by Zach Gage and Kurt Bieg

# 1.Game Description:

in the game you face "rooms" with 4 random cards from different suites and values(randomly generated)
the suites define what type of card it is:

Diamonds are weapons their strength is equal to the card's number(face cards and the ace are removed here)

Hearts are health potions, they heal you according to the card's number(face cards and the ace are also removed)

Clubs and Spades are the monster you will have to kill using either your fists or the currently equipped weapon

you start out with 20 health, the max health you can get is 20, so if you use a healing card that takes you over the limit your health will be set to 20

# 1.1 Card Values:

card's values go as follows:
2 of [Suite] = 2

3,4,5...10 are all equal to their numbers

face cards are just a continuation of the same trend

Jacks = 11 // Queens = 12 // Kings = 13 and Aces = 14

# 1.2 Damage And Health:

when the cards are dealt you have two options, you can either attack with your weapon or with your fists

if you attack a monster with your fists you take the monster's value as damage, (eg Attack an Ace of Spades and you take 14 Damage)

if you attack with your weapon there are two cases:

case 1: the monster's value is higher than your value

in this case  the damage taken is =  Monster's value - Weapon Value 
case 2: the Weapon's Value is higher than the monster's:

in this case you dont take any Damage

# 1.3 Weapon Curse

weapons get weaker after they get used, everytime you attack a monster, you can only attack monsters who's value is lower than or equal to that monster

example: you pick up a weapon of the value 10, you attack an Jack of Spades, you take damage but can now only attack monsters lower or equal to it, so you cannot attack a Queen of Spades because it's value is higher than the jack,
this means that the order in which you use the cards is very important

# 2.regarding the terrible source code:
i tried making this multiple times, this was my 5th time, i gave up on the other tries after wanting to make the card interactions without resorting to buttons(i still want to do this)

the big issue i had with that approach was using a lambda function and trying to connect it to the card labels, it could only take a copy of the label and not a reference, that stopped me from taking the values from the cards. so i decided to do the "easy" way.

# 2.1 The "easy" way:

separating the card logic and the UI cards was much easier to do and made this project "completable" without relying too much on ai to write all of the code for me, because i could have finished this the way i wanted to if i were to "vibe" code it(i did not want to do that), while i did use ai to help me find the labels and keywords i needed for the QT framework (instead of reading documentation) it's impact only stopped there.

so with this approach, all i had to do was create buttons to serve as actions the player could take, there are only 2 buttons under each card, the card button to select the card itself and one below it that only appears when the card is a "monster" card, this punch button allows the player to punch the monster and take it's value as damage instead of cursing their weapon if they had one equipped(note: if the player selects a monster card when they have no cards in hand they effectively "punch" the monster and take damage the same way), when pressing the card on a health potion card the player gains that much health (capped to 20 as mentioned before), and finally if the card is a sword, the player equips it replacing any weapon they had equipped.

# 2.1.1 The back end:

cards are moved into 4 vectors of cards each labeled after the slots they are in:

when potion cards are used they get removed from the slot and deleted

when weapons are equipped they get moved to the "hand" vector, replacing any element that was in it

when monsters are attacked the card slot vector's first element (which is the monster card) is compared to the first element of the hand slot vector, if the hand vector is empty the player takes full damage.

if the player has a weapon equipped, first there is a check to see if the weapon is cursed, if not that it gets cursed and gains a value called "weaponPower", this value changes, unlike the weapon's "trueWeaponPower" value which does not change

then the calculation happens to see how much damage the player takes if any, this compares monster's attack power vs weapon's weaponPower(or trueWeaponPower if it is not cursed yet)

after this the weapon gets cursed

# 2.1.2 Cursed weapons:

cursed weapons are weapons which can only attack a monster lower than their weaponPower.

for example if your weapon's trueWeaponPower is 10, you can attack a monster stronger than 10 when it is not cursed, then it gains that weapon's power value as the new baseline to check if you can attack next time.

the damage calculation is always equal to monsterPower - trueWeaponPower

if your weapon is too weak for any monster in the room and you cannot replace it you will have to punch the remaining monsters or escape the room

# 2.2 Escape the room:

there is a mechanic which players can use to either save themselves from an impossible to beat room or to save some good cards for later down the line 

the limitation to this is that players cannot escape 2 rooms in a row, so the option only appears if the player had not escaped the previous room

after escaping the room, the deck gets shuffeled again, unlike in the real game where only the 4 cards are shuffeled and then placed at the bottom of the deck

# 3. Going forward:

this project is really just me learning how to enjoy programming and i learned that, at least for me, programming a project gets fun when you have a clear plan on what how you want to do it, at first i was procrastinating it, only writing a few lines a day, but as i reached some milestones i got really into it and worked on it alot more and started having fun with it, i will hopefully keep this in mind for my next projects!
