#include <iostream>
#include <string>
#include "Card.h"
using namespace std;
string Card::Face[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};//初始化它的面值
string Card::Suit[4] = {"Spade","Heart","Diamond","Club"};//初始化它的花色
Card::Card(int f,int s)//声明构造函数
{
    setCard(f,s);
}
void Card::setCard(int f,int s)//接收面值和花色来初始化数据成员
{
    face=f;
    suit=s;
}
string Card::toString()//输出
{
    string z,p=" of ";
    z=Face[face]+p+Suit[suit];//返回正确格式
    return z;
}
