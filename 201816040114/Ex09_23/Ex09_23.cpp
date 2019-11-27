#include "Card.h"
#include "DeckOfCards.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    DeckofCards p;
    p.shuffle();
    for (i=0;i<52;i++)
    {
        cout <<p.dealCard().toString()<<endl;
        if (p.moreCards()==0)
            break;
    }
}
