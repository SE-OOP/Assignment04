#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
Rectangle n(1.2,3.4);
cout<<"length is: "<<n.getLength()<<endl;
cout<<"width is: "<<n.getWidth()<<endl;
cout<<"perimeter is: "<<n.perimeter()<<endl;
cout<<"area is: "<<n.area()<<endl;
}
