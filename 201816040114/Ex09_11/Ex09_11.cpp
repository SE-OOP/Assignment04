#include <iostream>
#include "Rectangle.h"


using namespace std;

int main()
{
    Rectangle rectangle(10,5);
    rectangle.Range();
    cout<<rectangle.Perimeter()<<" "<<rectangle.Area()<<endl;
}
