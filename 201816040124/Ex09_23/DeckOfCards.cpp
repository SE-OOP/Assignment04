#include<iostream>
#include"Card.h"
#include"DeckOfCards.h"
#include<vector>
using namespace std;
DeckOfCards::DeckOfCards())//初始化
{
    int i,j;
    for(i=0;i<13;i++)
    {
        for(j=0;j<4;j++)
        {
            Card card(i,j);
            deck.push_back(card);
        }
    }
}//结束
void DeckOfCards::shuffle()//洗牌
{
    int i,x;
    for(i=0;i<53;i++)//对每张牌随机选一张牌进行交换
    {
        x=rand()%52;
        Card card=deck[i];
        deck[i]=deck[x];
        deck[x]=card;
    }
}//结束

Card DeckOfCards::dealCard()
{
    currentCard++;//得到下张牌下标
    return deck[currentCard-1];
}//结束

bool DeckOfCards::moreCards()
{
    if(currentCard>51)//判断是否有下张牌
    {
        return false;
    }
    else if(currentCard<=51)
    {
        return true;
    }
}//结束
