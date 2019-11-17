#include <iostream>
#include "Rectangle.cpp"
using namespace std;

int main()
{
	Rectangle a(2.0,4.0);
	cout<<"The perimeter is "<<a.perimeter();
	cout<<endl;
	cout<<"The area is "<<a.area();
 } 
