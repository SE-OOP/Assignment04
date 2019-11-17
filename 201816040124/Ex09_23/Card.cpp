#include<iostream>
#include"Card.h"
#include<string>
using namespace std;
 string Card::faceTotal[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};//初始化面值
 string Card::suitTotal[4]={"Hearts","Spades","Diamonds"," Clubs"};//初始化花色
Card::Card(int f,int s)//声明构造函数
: face(f),suit(s)
{

}//结束
string Card::toString()
{
    string temp;
    temp=faceTotal[face]+" of "+suitTotal[suit];//返回正确格式
    return temp;
}//结束
