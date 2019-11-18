//Card.h
//Card class definition
//Member functions defined in Card.cpp
#ifndef CARD_H
#define CARD_H
#include<string>
#include<iostream>
#include<cstring>

using namespace std;
class Card
{
public:
    Card();//constructor function
    Card(int ,int );//constructor and initializes face and suit
    string toString();//return a function with a face value plus suit
    bool setFace(int );//set the value of face
    bool setSuit(int );//set the value of suit
    int getFace()const ;//get the value of face
    int getSuit()const ;//get the value of suit
private:
    int face;
    int suit;
    static string faceValue[16];//Static face value string array
    static string flowerColor[5];//Static flower color string array

};
#endif // CARD_H
