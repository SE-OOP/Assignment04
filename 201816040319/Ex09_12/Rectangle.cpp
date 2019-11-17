
#include<iostream>
#include"Rectangle.h"
#include<string.h>
#include<fstream>
#include<iomanip>
using namespace std;
Rectangle::Rectangle(double length,double width)
{
    setlength(length);
    setwidth(width);
}
double Rectangle::perimeter()
{
    int perimeter;
    perimeter = 2*Length+2*Width;
    return perimeter;
}
double Rectangle::area()
{
    int area;
    area = Length*Width;
    return area;
}
void Rectangle::setlength(double length)
{
    Length = length;
}
void Rectangle::setwidth(double width)
{
    Width = width;
}
void Rectangle::draw()
{

    double l=(25-Length)/2;
    double w=(25-Width)/2;
    int i,k;
    for( i = 0;i<25;i++)
    {
        if(i==0||i==24)
        {   for(int j =0; j <25;j++)
                {
                    cout<<outnumber<<" ";
                }
                cout<<endl;
        }
        
        else if(i==w-1)
        {

            for(i=w-1;i<w+Width-1;i++)
            {
                cout<<outnumber<<setw((l)*2);
                if(i==w-1||i==w+Width-2)
                {
                    for(k=0;k<Length;k++)
                    {
                        if(k==Length-1)
                            cout<<innumber;
                        else
                            cout<<innumber<<" ";
                    }

                }
                else
                {
                    cout<<innumber<<setw((Length-1)*2)<<innumber;

                }
                cout<<setw((l)*2)<<outnumber<<endl;
            }


        }
        else
        {

            cout<<outnumber<<setw(48)<<outnumber<<endl;
        }
    }


}
void Rectangle::setCharacter(char out)
{

    outnumber=out;
}
void Rectangle::setPerimeterCharacter(char in)
{
   innumber=in;
}

double Rectangle::getlength()
{
    return Length;
}
double Rectangle::getwidth()
{
    return Width;
}




