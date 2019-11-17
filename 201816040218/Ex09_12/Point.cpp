#include "Point.h"



Point::Point(float x1, float y1 ,float x2, float y2 ,float x3, float y3 ,float x4, float y4 )
{
    if(!(x1>=0&&x1<=20&&y1>=0&&y1<=20&&x2>=0&&x2<=20&&y2>=0&&y2<=20&&x3>=0&&x3<=20&&y3>=0&&y3<=20&&x4>=0&&x4<=20&&y4>=0&&y4<=20))
        cout << "input error!"<<endl;
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;
    this->x3=x3;
    this->y3=y3;
    this->x4=x4;
    this->y4=y4;
    if(checkrec())
    {
        float q1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        float q2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y2));
        if(q1>q2)
            {
                l=q1;
                w=q2;
            }
        else
        {
            l=q2;
            w=q1;
        }
    }
    else
        cout<< "this is not rectangle"<<endl;
}

bool Point::checkrec()
{
    float x=(x1+x2+x3+x4)/4, y=(y1+y2+y3+y4)/4;
    if(((x1-x)*(x1-x)+(y1-y)*(y1-y)==(x2-x)*(x2-x)+(y2-y)*(y2-y))
       &&((x1-x)*(x1-x)+(y1-y)*(y1-y)==(x3-x)*(x3-x)+(y3-y)*(y3-y))
       &&((x1-x)*(x1-x)+(y1-y)*(y1-y)==(x4-x)*(x4-x)+(y4-y)*(y4-y)))
        return true;
    else
        return false;
}
float Point ::getlength()
{
    return l;
}

float Point::getwidth()
{
    return w;
}

bool Point::square()
{
    if(l==w)
        return true ;
    else
        return false;
}


