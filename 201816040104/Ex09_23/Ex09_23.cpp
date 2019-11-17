#include "Card.h"
#include<vector>
using std::vector;
#include <iostream>
#include <string>
using namespace std;
#include "DeckOfCards.h"
#include<time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int i=0;
    DeckOfCards p;
    p.shuffle();
    while (i<52)
    {
        i++;
        cout <<p.dealCard().toString()<<endl;
        while (p.moreCards()==0)
            break;
    }




    return 0;
}
