#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Point.h"


int main()
{
    Point A(1,1);
    Point B(1,6);
    Point C(6,6);
    Point D(6,1);
    Rectangle rectangle(A,B,C,D);
    if(rectangle.getLength()==-1||rectangle.getWidth()==-1)
    {
        cout<<"The value of length or/and with is illegal"<<endl;
    }
    else
    {
        cout<<"The perimeter is  "<<rectangle.perimeter()<<endl;
        cout<<"The area is  "<<rectangle.area()<<endl;

        if(rectangle.square()==1)
        {
            cout<<"It's square"<<endl;
        }
        else if(rectangle.area()==0)
        {
            cout<<"It isn't a sqare"<<endl;
        }
    }


}
