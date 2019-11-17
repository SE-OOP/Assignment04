#ifndef CARD_H
#define CARD_H
using namespace std ;
#include <iostream>
#include <string>
#include <array>
class Card
{
public:
    Card (int =0,int = 00 ) ;
    string gettostring () ;
private:
    int face ;
    int suit ;
    static array <string,13> facename ;
    static array <string,4> suitname ;
};
#endif
