#include <iostream>
#include <vector>
#include <time.h>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
    currentCard=51;//0-51总共52张牌
    for(int i=0; i<13; i++)//把52张牌放进deck中
    {
        for(int j=0; j<4; j++)
        {
            Card flag(i,j);
            deck.push_back(flag);
        }
    }
}
void DeckOfCards::shuffle()
{
    int flag=0;     //subscribe 0 is not using
    srand(static_cast<unsigned int>(time(NULL)));  //Randomly generated seed
    for(int i=1;i<=52;i++)
    {
        int t=rand()%52;
        if(t!=flag)
        {
            swap(deck[i],deck[t]);  //randomly exchange deck's subscribe
            flag=t;
        }
    }
}
Card DeckOfCards::dealCard()
{
    return deck[currentCard--];;
}
bool DeckOfCards::moreCards()//判断是否还有牌，currentCard为-1说明无牌
{
    if(currentCard==-1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
