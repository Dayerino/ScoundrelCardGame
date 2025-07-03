# ScoundrelCardGame
a card game made with QT Creator, its based off the game called Scoundrel, it is a single player dungeon crawler it was created by Zach Gage and Kurt Bieg

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
rn im just happy i finished this, i will write about the process and start to finish

just know im planning on refactoring ALOT of the code to make it more readable and more efficient
