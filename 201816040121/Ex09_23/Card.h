//Ex09_23:Card.h
#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std;
class Card
{
public:
	//constructor face and suit
	Card(int, int);//constructor faces and suits
	static string faceString[13];
	static string suitString[4];
	string toString();//retrieve messages of cards
private:
	int face;
	int suit;
};
#endif // CARD_H
