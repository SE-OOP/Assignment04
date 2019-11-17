#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;
int main()
{
     DeckOfCards a;//to create a of class DeckOfCards
     for(int i=0;i<52;i++)
     {
         cout<<a.dealCard().toString()<<"\n";
     }//output a
     cout<<"\n\n";
     cout<<"after shuffling:\n\n";
     a.shuffle();//shuffle
     for(int i=0;i<52;i++)
     {
         cout<<a.dealCard().toString()<<"\n";
     }//output
}
