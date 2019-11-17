#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle r(1,1);
    double l,w;

    cin>>l>>w;
    r.setlength(l);
    r.setwidth(w);
    r.getlength();
    r.getwidth();
    cout<<r.perimeter()<<endl;
    cout<<r.area()<<endl;
    return 0;
}
