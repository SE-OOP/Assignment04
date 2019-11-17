#include <iostream>
#include "Point.cpp"
#include "Rectangle.cpp"
using namespace std;

int main()
{
	Point a(1,1),b(1,2),c(2,1),d(2,2);
	Rectangle r(a,b,c,d);
	
	cout<<"The length is "<<r.getLength()<<endl;
	cout<<"The width is "<<r.getWidth()<<endl;
	cout<<"The perimeter is "<<r.perimeter()<<endl;
	cout<<"The area is "<<r.area()<<endl;
	cout<<endl;
	
	r.square();
}
