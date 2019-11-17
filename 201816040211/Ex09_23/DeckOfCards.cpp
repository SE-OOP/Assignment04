#include "DeckOfCards.h"
#include "Card.h"
#include<string>
#include<vector>

using namespace std;

DeckOfCards::DeckOfCards()
{
    int i=0;
    int j=0;
    for(i;i<4;i++)
    {
        for(j=0;j<13;j++)
        {
            deck.push_back(Card(i,j));
            currentCard=0;
            shuffle;
        }
    }
}// end DeckOfCard

void DeckOfCards:: shuffle()
{
    srand( time(0));
    for(int x=0; x<52; x++)
    {
        int y=rand()%52;
        swap(deck[x],deck[y]);
    }
}//洗牌操作

bool DeckOfCards:: moreCard()
{
    if(currentCard>=-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}//判断是否有牌要处理

Card DeckOfCards::dealCard()
{
    return deck{currentCard++};
}//返回下一张牌

void DeckOfCard::Flower()
{
    int i=0;
    int j=0;
    for(i=0;i<5;i++)
    {
        colors[i]=deck[i].getsuit();
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(colors[i]>colors[j])
            {
                swap(colors[i],colors[j])
            }
        }
    }
    if(colors[4]-colors[0]==4)
    {
        cout<<"There is a flower"<<endl;
    }
}// end Flower
