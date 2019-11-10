#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    Doc mycard;
    mycard.shuffle();
    while(mycard.moreCards()==true){
        mycard.dealCards();
    }
    return 0;
}
