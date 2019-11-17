#include<iostream>
#include "Rectangle2.cpp"
using namespace std;

int main()
{
	Rectangle2 rectangle;
	double a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	rectangle.Rectangle2(a,b,c,d,e,f,g,h);
	cout<<"Length:"<<rectangle.Length()<<endl;
	cout<<"Width:"<<rectangle.Width()<<endl;
	cout<<"Perimeter:"<<rectangle.Perimeter()<<endl;
	cout<<"Area:"<<rectangle.Area()<<endl;
	rectangle.square();
}
