#include <iostream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

int main()
{

    double a ,b; // Users define their own length and width
    cout << "Please enter the length and width about rectangle : "<<endl;
    cin >> a;
    cin >> b;
    Rectangle rec;

    try // Test the data
    {
        rec.setLength(a,b);
        rec.setWidth(a,b);
        rec.setPerimeter(length , width);
        rec.setArea(length,width);
        cout<<"Perimeter : "<<rec.getPerimeter()<<"   "<<"Area : "<<rec.getArea()<<endl;
    }

    return 0;
}
 
 
