#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
#include"Card.h"
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()//初始化一个牌组
{
    currentCard=0;
    for(int i=0;i<52;i++)
    {
        Card flag(i%13,i/13);//先存储1—13的同一花色的牌，再存储下一个花色的1—13
        deck.push_back(flag);
    }
    srand(time(0));
}

vector <Card> DeckOfCards::getDeck()
{
	  return deck;
}

void DeckOfCards::shuffle()//随机交换两张牌
{
    for(int i=1;i<=52;i++)
    {
        int t=rand()%52;
        if(t!=i)
            swap(deck[i],deck[t]);
    }
}

void DeckOfCards::display()
{
    Card flag;int i=0;
    for(int j=0;j<=51;j++)
    {
        cout<<left<<setw(5)<<++i<<(getDeck()[j]).toString()<< endl;
    }
}//展示当前牌组
