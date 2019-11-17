//Ex09_23:Card.cpp
#include <iostream>
#include <string>
#include "Card.h"
using namespace std;
//constructor face and suit
Card::Card(int a, int b)
{
	face = a;
	suit = b;
}
string Card::faceString[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
string Card::suitString[4] = { "Heart", "Spade", "Diamond", "Club" };

//fuction to retrieve messages of cards
string Card::toString()
{
	string card = (faceString[face] + " of " + suitString[suit]);
	return card;
}
