#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include<bits/stdc++.h>
#include "Card.h"
using namespace std;

class DeckOfCards
{
public:
    //定义存储52张牌的vector
    vector<Card> deck;
    //初始化
    DeckOfCards( );
    //洗牌函数
    void shuffle();
    //返回要处理的牌
    Card dealCard();
    //判断是否还有牌要处理
    bool moreCards();
private:
    //下一张要处理的牌
    int currentCard;


};

#endif // DECKOFCARDS_H_INCLUDED
