#include <iostream>
#include "Rectangle.h"

using namespace std;

int main ()
{
    Rectangle rectangle1 , rectangle2;
    double l, w;
    cout << "Assign a value to the Rectangle object 1" <<endl;
    cout << "The length of rectangle1 is:";
    cin >> l;
    rectangle1.setLength(l);
    l=rectangle1.getLength();
    cout << "The width of rectangle1 is:";
    cin >> w;
    rectangle1.setWidth(w);
    w=rectangle1.getWidth();
    cout << "The perimeter of rectangle1 is :";
    cout<<rectangle1.setPerimeter(l,w);
    cout << endl <<"The area of rectangle1 is :";
    cout<<rectangle1.setArea(l,w)<<endl;
    cout << "Assign a value to the Rectangle object 2" <<endl<<endl;
    cout << "The length of rectangle2:";
    cin >> l;
    rectangle1.setLength(l);
    l=rectangle1.getLength();
    cout << "The width of rectangle2:";
    cin >> w;
    rectangle1.setWidth(w);
    w=rectangle1.getWidth();
    cout << "The perimeter of rectangle2 is :";
    cout<<rectangle2.setPerimeter(l,w);
    cout << endl <<"The area of rectangle2 is :";
    cout<<rectangle2.setArea(l,w);
    return 0;
}
