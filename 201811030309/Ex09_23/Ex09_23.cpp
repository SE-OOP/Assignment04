#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards Deck;
    cout <<"deal all of cards before shuffle." <<endl;
    Deck.dealCard(52);//take 52 cards out berfpre shuffle;
    if(!Deck.moreCards())//judge it have card neeed take out;
        cout << "all the cards have been dealed!\n";

    Deck.shuffle();//shufffle the cards;

    cout <<"deal some of cards after shuffle." <<endl;
    Deck.dealCard(52);//take 522 cards out after shuffle;

    if(!Deck.moreCards())//judge it have card neeed take out;
        cout << "all the cards have been dealed\n";
}

