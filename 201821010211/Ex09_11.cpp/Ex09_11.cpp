#include <iostream>
#include"Rectangle.h"
using namespace std;
int main()
{
    double length,width;
    cin>>length>>width>>endl;
    Rectangle rectangle(length,width);
    rectangle.setPrecision();
    rectangle.setArea();
    cout<<rectangle.getPrecision()<<"\n"<<rectangle.getArea()endl;
}
