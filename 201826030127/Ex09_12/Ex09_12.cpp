#include <iostream>
using namespace std;
#include"Rectangle.h"
#include"point.h"
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    point a(x1,y1);
    point b(x2,y2);
    point c(x3,y3);
    point d(x4,y4);
    Rectangle r(a,b,c,d);
   cout<<r.sqare(a,b,c,d);
    cout<<endl;
    r.display();
    return 0;
}
