#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
//一个顶点的坐标设置
class Point
{
public:
    Point(double,double);//point的结构
    void setPointX(double);//横坐标
    double getPointX();
    void setPointY(double);//纵坐标
    double getPointY();
private:
    double X,Y;//横纵坐标

};

#endif // POINT_H_INCLUDED
