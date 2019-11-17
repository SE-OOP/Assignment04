#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include"Card.h"
#include<vector>


class DeckOfCards
{
public:
    DeckOfCards();//构造函数
    vector<Card>deck;
    void shuffle();//洗牌
    Card dealCard();//下一张牌
    bool moreCards();//是否有下一张牌
private:
    int currentCard=0;//下标
};//


#endif // DECKOFCARDS_H_INCLUDED
