#include <iostream>
using namespace std;
#include "Rectangel.h"

int main()
{
    Rectangel a(2,10);
    cout<<"The length of Rectangel is:"<<a.getRectangelLength()<<endl;
    cout<<"The width of Rectangel is:"<<a.getRectangelWidth()<<endl;
    cout<<"The perimeter of rectangel is:"<<a.Rerimeter()<<endl;
    cout<<"The area of rectangel is:"<<a.Area()<<endl;
    return 0;
}
