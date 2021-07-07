#include<iostream>
#include<string>
using namespace std;

class Card
{
public:
    static const int facenumber = 13;
    static const int suitnumber = 4;
    Card(int ,int );
    int getface();
    int getsuit();
    string toString();
private:
    int face;
    int suit;
    static const string facedata[facenumber];
    static const string suitdata[suitnumber];


};
 


