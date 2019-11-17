#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include<string>
using namespace std;

class Card
{
public:
    Card(int ,int );//声明构造函数
    static string faceTotal[13];//牌值数组
    static string suitTotal[4];//花色数组
    string toString();//

private:
    int face;//牌值下标
    int suit;//花色下标
};//
#endif // CARD_H_INCLUDED
