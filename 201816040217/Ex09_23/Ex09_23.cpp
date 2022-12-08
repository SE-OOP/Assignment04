#include "Card.h"

using namespace std;
string Card::allface[4] = {"红桃","方块","黑桃","梅花"};
string Card::allsuit[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
//初始化拍的花色和面值
Card::Card(int f,int s)
{
    setFace(f);
    setSuit(s);
}

//set和get函数，判断范围
void Card::setFace(int f)
{
    if(f>=0&&f<=3)
        face = f;
}
void Card::setSuit(int s)
{
    if(s>=0&&s<=12)
        suit = s;
}
int Card::getFace()
{
    return face;
}
int Card::getSuit()
{
    return suit;
}
//返回string类型的花色和面值
string Card::toString()
{
    return allface[face]+allsuit[suit];
}
