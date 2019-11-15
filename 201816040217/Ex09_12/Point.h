#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
//坐标类
class Point
{
public:
    //点的构造函数
    Point(double pon1_x, double pon1_y, double pon2_x, double pon2_y, double pon3_x, double pon3_y, double pon4_x, double pon4_y);
    //横纵坐标
    double len1,wid1;
    //判断
    int flag = 0;
    //工具函数--两点之间的距离
    double pointLen(double, double, double, double);

};



#endif // POINT_H_INCLUDED
