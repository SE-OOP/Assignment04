#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle1;//using the default parameters to initialize the width and length;
    Rectangle rectangle2(2.0, 5);//set the rectangle of width(2.0) and length (5);

    cout << "the rectangle1 longth is: " << rectangle1.getlength() <<endl;
    cout << "the rectangle1 width is: " << rectangle1.getwidth() <<endl;
    cout << "the rectangle1 perimeter is: " << rectangle1.perimeter() <<endl;
    cout << "the rectangle1 area is: " << rectangle1.area() <<endl;

    cout << "\n\nthe rectangle2 longth is: " << rectangle2.getlength() <<endl;
    cout << "the rectangle2 width is: " << rectangle2.getwidth() <<endl;
    cout << "the rectangle2 perimeter is: " << rectangle2.perimeter() <<endl;
    cout << "the rectangle2 area is: " << rectangle2.area() <<endl;
    double len, wid;
    cin >> len >> wid;
    rectangle2.setlength(len);//set the new length;
    rectangle2.setwidth(wid);//set the new width;

    cout << "\n\nafter set the rectangle2 of length and width\n";

    cout << "\nthe rectangle2 longth is: " << rectangle2.getlength() <<endl;
    cout << "the rectangle2 width is: " << rectangle2.getwidth() <<endl;
    cout << "the rectangle2 perimeter is: " << rectangle2.perimeter() <<endl;
    cout << "the rectangle2 area is: " << rectangle2.area() <<endl;

}
