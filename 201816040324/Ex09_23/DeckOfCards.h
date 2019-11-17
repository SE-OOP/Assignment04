#ifndef DeckOfCardsS_H
#define DeckOfCardsS_H
using namespace std ;
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include "card.h"
class DeckOfCards
{
public:
    DeckOfCards () ;
    bool morecard () ;
    void dealcard () ;
    void shuffle () ;
    void getcard (int ) ;
public:
    vector < Card > deck;
    int currentCard;
    static int total;
};
#endif
