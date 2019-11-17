#ifndef CARD_H
#define CARD_H
#include<string>
using namespace std;

class Card
{
public:
    static const int totalFaces=13;
    static const int totalSuits=4;

    Card(int,int);
    int getFace();
    int getSuit();
    string toString();

private:
    int face,suit;
    static const string faceNames[totalFaces];
    static const string suitNames[totalSuits];

};
