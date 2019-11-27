#include<iostream>
#include"Card.h"
#include"DeckofCards.h"
using namespace std;

int main()
{
    DeckOfCards poker;
    poker.shuffle();
    cout<<"Player1: ";
    for(int i=0;i<13;i++)
    {
        poker.dealCard(i);
    }
    cout<<endl<<endl;

    cout<<"Player2: ";
    for(int i=13;i<26;i++)
    {
        poker.dealCard(i);
    }
    cout<<endl<<endl;

    cout<<"Player3: ";
    for(int i=26;i<39;i++)
    {
        poker.dealCard(i);
    }
    cout<<endl<<endl;

    cout<<"Player4: ";
    for(int i=39;i<52;i++)
    {
        poker.dealCard(i);
    }
    cout<<endl<<endl;
    return 0;
}
