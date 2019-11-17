#include <iostream>
#include "Rectangle1.cpp"
using namespace std;

int main()
{
	Rectangle1 rectangle1(1.0,1.0),rectangle2;
	cout<<"Perimeter:"<<rectangle1.perimeter()<<endl;
	cout<<"Area:"<<rectangle1.area()<<endl;
	rectangle2.setLength(10.0);
	rectangle2.setWidth(5.0);
	cout<<"Perimeter:"<<rectangle2.perimeter()<<endl;
	cout<<"Area:"<<rectangle2.area()<<endl;
}
