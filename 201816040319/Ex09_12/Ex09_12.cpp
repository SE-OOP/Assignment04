#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle r(5.0,2.0);
    int perimeter,area,width,length;
    width = r.getwidth();
    length = r.getlength();
    perimeter=r.perimeter();
    area = r.area();
    cout<<"this width is :"<<width<<endl;
    cout<<"this length is :"<<length<<endl;
    cout<<"this perimeter is :"<<perimeter<<endl;
    cout<<"this area is :"<<area<<endl;
    r.setCharacter('*');
    r.setPerimeterCharacter('#');
    r.draw();
    return 0;
}
