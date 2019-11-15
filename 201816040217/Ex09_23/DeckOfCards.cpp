#include<bits/stdc++.h>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;
//构造函数初始化，顺序创建52张牌，将下一张处理的牌设为第一张牌
DeckOfCards::DeckOfCards()
{
    for(int i = 0;i<13;i++){
        for(int j = 0;j < 4;j++){
            deck.push_back(Card(j,i));
        }
    }

    currentCard = 0;
}
//洗牌
void DeckOfCards::shuffle()
{
    int qq;

    //每张牌与生成52以内的一张牌交换
    for(int i = 0;i < 52;i++){
        qq = rand()%52;
        if(qq == i) qq += 1;
        swap(deck[i],deck[qq]);
    }
}
//返回要处理的牌
Card DeckOfCards::dealCard()
{
    return deck[currentCard++];
}
//判断是否还有牌要处理
bool DeckOfCards::moreCards()
{
    if(currentCard == 52)
        return false;
    return true;
}

