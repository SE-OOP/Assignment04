#include "Card.h"
#include<vector>
#include <iostream>
#include <string>
#include "DeckOfCards.h"
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;
DeckOfCards::DeckOfCards()//初始化
{
    int i ,j ;
    for (i=0;i<4;i++)
    {
        for( j=0 ; j<13 ;j++)
        {
            Card a( j , i );
            deck.push_back(a);
        }
    }
}
void DeckOfCards::shuffle()//洗盘
{
    int i,z;
    srand((unsigned int)time (NULL));
    for (i=0 ;i<52 ;i++) //随机选取两只牌并进行交换
    {
        z=rand()%51;
        Card f=deck[i];
        deck[i]=deck[z];
        deck[z]=f;
    }
}
Card DeckOfCards::dealCard()//获取面值
{
    currentCard++;
    return deck[currentCard-1];
}
bool DeckOfCards::moreCards()//判断下一个牌是否要处理
{
    if(currentCard>51)
    {
        return false;
    }
    else if(currentCard<=51)
    {
        return true;
    }
}

Card DeckOfCards::getCards(int i)
{
    return deck[i];
}
