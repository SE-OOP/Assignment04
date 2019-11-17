#include <iostream>

using namespace std;
#include"Rectangel2.h"
int main()
{
    double a,b,c,d,e,f,g,h;
    Rectangel2 s;
    cout<<"请输入下x1,y1,x2,y2,x3,y3,x4,y4的值"<<endl;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    s.setDate(a,b,c,d,e,f,g,h);
    s.display();
    s.setSide();
    if(s.Check())
    {
        cout<<"周长为："<<s.Perimeter()<<endl;
        cout<<"面积为："<<s.Area()<<endl;
    }
    else
        cout<<"错误输入"<<endl;

    return 0;
}
