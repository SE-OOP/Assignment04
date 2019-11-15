//Card.cpp
//Card class member-function definitions
#include<iostream>
#include<string>
#include "Card.h"//Card class definition

using namespace std;

string Card::faceValue[]={" ","A","2","3","4","5","6","7","8","9","10","J","Q","K","Surname","King"};//Static face value string array initializes

string Card::flowerColor[]={" ","diamonds","plum","spade","hearts"};//Static flower color string array initializes

Card::Card(){}//constructor function

Card::Card(int Face,int Suit)//constructor and initializes face and suit
{
    setFace(Face);
    setSuit(Suit);
}
bool  Card::setFace(int Face)//set the value of face
{
    if(Face<1||Face>15)
        return 0;
    face=Face;
    return 1;
}
bool Card::setSuit(int Suit)//set the value of suit
{
    if(Suit<1||Suit>4)
        return 0;
    suit=Suit;
    return 1;
}
string Card::toString()//return a function with a face value plus suit
{
    if(getFace()==14)
        return faceValue[getFace()];
    else if(getFace()==15)
        return faceValue[getFace()];
    else
        return string(faceValue[getFace()]+" of "+flowerColor[getSuit()]);
}
int Card::getFace() const//get the value of face
{
	return face;
}

int Card::getSuit() const//get the value of suit
{
	return suit;
}
