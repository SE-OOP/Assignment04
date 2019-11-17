#include "DeckOfCards.h"
#include <cstdlib>
#include <ctime>
using namespace std ;

int DeckOfCards::total = 52;

DeckOfCards::DeckOfCards ()
{
    currentCard =52 ;
    for( int i = 0;i < 13; ++i)
    {
        for( int j = 0;j < 4; ++j)
        {
            currentCard--;
            Card card(i,j);
            deck.push_back(card);
        }
    }
    srand( time(0) );
}

void DeckOfCards::shuffle()
{
    int flag;
    Card temp;
    for( int i = 0;i < 52; ++i)
    {
        flag = rand() % total;
        temp = deck[i];
        deck[i] = deck[flag];
        deck[flag] = temp;
    }
}

void DeckOfCards::dealcard()
{
    int x=currentCard ;
    for (int t=0;t<52;t++)
    {
       getcard(x) ;
       ++x ;
    }
}
void DeckOfCards::getcard (int y)
{
    cout << deck[y].gettostring()<<endl;
}
bool DeckOfCards::morecard()
{
    if (currentCard < total)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
