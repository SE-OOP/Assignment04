#include <iostream>
#include"Rectangle.h"
#include<stdexcept>
using namespace std;

int main()
{
   double a,b;
   cout<<"input length:"<<endl;
   cin>>a;
   cout <<"input width:" <<endl;
   cin>>b;
   Rectangle r(a,b);
   cout << "perimeter of rectangle is :" <<r.getPerimeter()<<endl;
   cout << "area of rectangle is :"<<r.getArea()<<endl;

}
