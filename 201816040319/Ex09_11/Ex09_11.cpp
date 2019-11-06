#include <iostream>
#include <stdexcept>

#include "Rectangle.h"

using namespace std;

int main()
{

    Rectangle r;
    double Length;
    double Width;

    cout <<"please enter Length"<<endl;
    cin  >>Length;
    cout <<"please enter width"<<endl;
    cin  >>Width;

    r.setRectangle(Length,Width);

    cout <<"Check the data"<<Length<<"   "<<Width<<endl;

    cout <<"The output value of perimeter:"<<r.perimenter()<<endl;
    cout <<"The output value of area: "<<"    "<<r.area()<<endl;


    return 0;


}
