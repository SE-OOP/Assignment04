#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"

int main()
{
    Card a(0,0);
    DeckOfCards b;

    cout << "洗牌前:" << endl;
    b.display();//输出当前牌的顺序
    cout << endl;
    b.shuffle();//洗牌
    cout << "洗牌后:" << endl;
    b.display();//输出洗过牌后的顺序
    cout<<endl;
}
