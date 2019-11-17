#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle( float , float );
    void setwidth(float );
    void setlength( float);
    float getwidth( );
    float getlength();
    float getperimeter();
    float getarea();
private:
    float width;
    float length;
};
