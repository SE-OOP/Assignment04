#include "Card.h"
#include<string>
#include<iostream>
using namespace std;

string Card::Face[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
string Card::Suit[4] = {"Spade","Heart","Diamond","Club"};
    //黑桃（Spade）红桃（Heart）方块（Diamond）梅花（Club）

Card::Card(int f, int s)
{
	setCard(f,s);//初始化牌组
}

void Card::setCard(int f,int s)
{
    setFace(f);
    setSuit(s);
}//初始化牌号和花色

void Card::setFace(int f)
{
    face=f;
}

void Card::setSuit(int s)
{
    suit=s;
}
int Card::getFace() const
{
    return face;
}

int Card::getSuit() const
{
    return suit;
}

string Card::toString() const
{
    return (Face[getFace()]+" of "+Suit[getSuit()]);
}//将牌号与花色连起来
