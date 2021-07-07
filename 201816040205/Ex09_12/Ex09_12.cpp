#include <iostream>
#include <cmath>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main()
{
Point a(1,1);
Point b(1,2);
Point c(2,2);
Point d(2,1);
Rectangle r(a,b,c,d);
cout<<"length is "<<cout<<r.length()<<endl;
cout<<"width is "<<cout<<r.width()<<endl;
cout<<"perimeter is "<<cout<<r.perimeter()<<endl;
cout<<"area is "<<cout<<r.area()<<endl;


}
