#include "Card.h"
#include "DeckOfCards.h"
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

DeckOfCards::DeckOfCards()
{
	for(int i=0;i<4;i++)
		for(int j=12;j>=0;j--)
			{
				Card temp(j,i);
				deck.push_back(temp);
			}
}

void  DeckOfCards::shuffle()
{
	vector<int> temp;
    int i,j=0;
    for(i=51;i>=0;i--)
	{
        temp.push_back(i);
    }
    random_shuffle(temp.begin(), temp.end());
    for(i=0;i<52;i++)
	{
        j=(i+1)%52;
        swap(deck[temp[i]],deck[temp[j]]);
    }
}

void DeckOfCards::dealCards()
{
   cout<<deck[k].toString()<<endl;
   k++;
}

bool DeckOfCards::moreCards()
{
    if(k>51)
        return false;
    else
        return true;
}
