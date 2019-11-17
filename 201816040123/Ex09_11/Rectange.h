#ifndef RECTANGE_H_INCLUDED
#define RECTANGE_H_INCLUDED
class Rectange
{
public:
    Rectange(double=1,double=1);
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    double perimeter();
    double area();
    void disPlay();
private:
    double length;
    double width;
};
#endif // RECTANGE_H_INCLUDED
