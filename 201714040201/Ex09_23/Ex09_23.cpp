//Ex09_23.cpp
#include<iostream>
#include<string>
#include<cstring>
#include<array>
#include"DeckOfCards.h"//DeckOfCards class definition
#include "Card.h"//Card class definition

using namespace std;

int main()
{
    cout<<"Start fighting landlords"<<endl;
    DeckOfCards deckofcards;
    cout<<"Began to shuffle"<<endl;
    deckofcards.shuffle();
    cout<<"Finish shuffling and prepare to play"<<endl;
    cout<<endl;
    cout<<"Deal three player and leave three CARDS"<<endl<<endl;
    array<vector<Card>, 4> player;
    int n=0;
    int num = 0;
    while (deckofcards.moreCard())
    {
        Card card = deckofcards.dealCard();
        if(n<51)
        {
            player[num].push_back(card);
            n++;
            num = (num + 1) % 3;
        }
        else
            player[3].push_back(card);
    }
    for (int i = 0; i < 4; i++)
    {
        if(i<3)
        {
            cout<<i+1<<" player's cards"<<endl<<endl;
            for (Card card : player[i])
            {
                cout << card.toString() << endl;
            }
            cout<<endl;
        }
        else
        {
            cout<<"Three CARDS is: ";
            for (Card card : player[i])
            {
                cout << card.toString() <<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}//end main
