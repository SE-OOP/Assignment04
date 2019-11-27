//Card.cpp
#include"DeckofCards.h"
#include<cstdlib>
#include<ctime>
#include<iostream>

DeckOfCards::DeckOfCards()//initialize the default constructor of card in deck
{
    for(int i=0;i<52;i++)
    {
        Card card(i%13,i/13);
        deck.push_back(card);
    }
}

void DeckOfCards::shuffle()//function of shuffle
{
    srand(time(0));//set seed
    for(int i=1;i<53;i++)
    {
        int j=rand()%52;//get a random number
        if(i!=j)
        {
           swap(deck[i],deck[j]);//exchange two cards
        }
    }

}

Card DeckOfCards::dealCard(int i)
{
        cout<<deck[i].toString()<<" ,";
}

bool DeckOfCards::moreCards()//are there any cards to deal with
{
    if(deck.empty())
        return true;
    else
        return false;
}
