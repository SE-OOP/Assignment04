//Ex09_12.cpp
#include<iostream>
#include"Point.h"//Point class definition
#include"Rectangle.h"//Rectangle class definition

using namespace std;

int main()
{
    Point first(1,1);//create first POint object
    Point second(9,1);//create second POint object
    Point third(9,10);//create third POint object
    Point fourth(1,10);//create fourth POint object
    Rectangle rectangle(first,second,third,fourth);//create Point object
    cout<<rectangle.getLength()<<endl;//output length
    cout<<rectangle.getWidth()<<endl;//output width
    cout<<rectangle.getPerimeter()<<endl;//output perimeter
    cout<<rectangle.getArea()<<endl;//output area
}//end main
