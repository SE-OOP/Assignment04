#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED

class deckofcards
{
public:
    deckofcards();

    void shuffle();//wish card
    bool morecards();
    int dealcard();

private:
    int currentcard;
    vector<card>deck;

};

#endif // DECKOFCARDS_H_INCLUDED
