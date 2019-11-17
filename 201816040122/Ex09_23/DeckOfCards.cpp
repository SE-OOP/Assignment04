#include "DeckOfCard.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

DeckOfCard::DeckOfCard()//default constructor
{
    currentCard=0;
    for(int i=1;i<14;i++)
        for(int j=1;j<5;j++)
        {
         deck.push_back(Card(i,j));
        }
}
void DeckOfCard::shuffle()
{
    srand((unsigned)time(NULL));
    int flag=rand()%52;//Ëæ»úÊýfalg
    for(int i=0;i<+52;i++)
    {
        flag=rand()%52;
        if(flag!=i&&flag<52&&flag>=0)
        {
            deck[52]=deck[i];
            deck[i]=deck[flag];
            deck[flag]=deck[52];
        }
        else
            i--;

    }
}
Card DeckOfCard::dealCard()
{
    return deck[currentCard++];;
}
bool DeckOfCard::moreCards()//判断是否还有牌，currentCard为-1说明无牌
{
    if(currentCard>51)
    {
        return false;
    }
    else
    {
        return true;
    }
}
