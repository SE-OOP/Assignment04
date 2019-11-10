#include "Card.h"
#include "DeckOfCards.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include<iomanip>
Doc::Doc()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<13;j++){
            Card temp(j,i);
            deck.push_back(temp);

        }


    }
}
void Doc::shuffle()
{
    vector<int> temp;
    int j=0,i;
    for(i=0;i<52;i++){
        temp.push_back(i);
    }
    std::random_shuffle(temp.begin(), temp.end());
    for(i=0;i<52;i++){
        j=i+1;
        swap(deck[temp[i]],deck[temp[j]]);
        i++;
    }


}
void Doc::dealCards()
{

   cout<<deck[k].toString()<<endl;
   k++;
}
bool Doc::moreCards()
{
    if(k>=52)
        return false;
    else
        return true;
}
