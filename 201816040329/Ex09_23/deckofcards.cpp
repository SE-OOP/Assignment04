#include "deckofcards.h"

#include"card.h"

#include<ctime>

#include<cstdlib>

#include<algorithm>

#include<iostream>

deckofcards::deckofcards()

{

}
bool deckofcards::moreCards()//判断是否还有牌，currentCard为-1说明无牌

{

    if(currentCard!=-1)

    {

        return true;

    }

    else

    {

        return false;

    }

}

void DeckOfCards::shuffle()//洗牌

{

    int flag_skip=0,flag_end=0;
        for(i=0;i<52;i++)
        {
            if(s[i].num==num && s[i].color==color)
            {
                flag_skip=1;
                break;
            }
        }
        if(flag_skip==1)
        {
            continue;
        }

}

int deckofcards::dealCard()

{

    return currentcard=0;


}

