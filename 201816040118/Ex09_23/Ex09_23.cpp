#include<vector>
#include <iostream>
#include <string>
#include "DeckOfCards.h"
#include "Card.h"
#include<time.h>
using namespace std;
int main()
{
    int i;
    DeckOfCards p; //定义一个DeckOfCards 对象
    p.shuffle();//洗牌
    for (i=0;i<52;i++) //输出
    {
        cout <<p.dealCard().toString()<<endl;
        if (p.moreCards()==0) //判断是否继续
        {
            break;
        }
    }
    return 0;
}
