#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include "Card.h"
#include<vector>
class DeckOfCards
{
public:
    DeckOfCards();//构造函数
    void shuffle();//洗牌
    Card dealCard();//下一张牌
    bool moreCards();//判断是否要处理
    Card getCards(int );
private:
    vector <Card> deck;
    int currentCard=0; //声明数据成员
};
#endif // DECKOFCARDS_H_INCLUDED
