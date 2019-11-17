
#include<iostream>
#include<stdexcept>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

int main()
{
		double a, b,c,d,e,f,g,h,;
		cout << "请输入第一个坐标\n";
		cin >> a>>b;
		Point p1(a, b);
		cout << "请输入第二个坐标\n";
		cin >> c>>d;
		Point p2(c, d);
		cout << "请输入第三个坐标\n";
		cin >> e;
		cin >> f;
		Point p3(e, f);
		cout << "请输入第四个坐标\n";
		cin >> g>>h;
		Point p4(g, h);
		Rectangle rectangle(p1, p2, p3, p4);

			rectangle.length();
			rectangle.perimeter();
			rectangle.area();


}
