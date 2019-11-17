#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;

class Card
{
public:
	Card(int f=0,int s=0);
	string toString()const;//将牌号和花色连接起来
	void setCard(int,int);//设置一张牌
	void setFace(int);//设置一张牌的牌号
	void setSuit(int);//设置一张牌的花色
	int getFace()const;//返回一张牌的牌号
	int getSuit()const;//返回一张牌的花色
private:
	int face;
	int suit;
	static string Face[13];//储存牌号
    static string Suit[4];//储存花色
};
#endif
