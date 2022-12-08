#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;
class Card
{
public:
    explicit Card( int,int );//声明构造函数
    string toString ();//声明一个输出函数
    void setCard(int,int);//声明一个传参赋值函数
private:
    int face;
    int suit;
    static string Face[13];
    static string Suit[4];//声明数据成员
};
#endif // CARD_H_INCLUDED
