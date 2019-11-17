#include<iostream>
#include"card.cpp"
#include"deckofcards.cpp"
using namespace std;

  int main()
{
      DeckOfCards deck1; //create a deck1 object

     cout <<"Deal all cards before shuffle." <<endl;
     deck1.dealCard(deck1.allCards);

    deck1.shuffle(); //call to the function of shuffle

     cout <<"Deal five cards after shuffle." <<endl;
     deck1.dealCard(deck1.fiveCards);

     return 0;
 }
