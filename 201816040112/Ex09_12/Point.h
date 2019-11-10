#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
public:
  explicit Point(double=0.0,double=0.0);
  void setxPoint (const double);
  double getxPoint ();
  void setyPoint(const double);
  double getyPoint();
private:
  double x,y;
};


#endif // POINT_H_INCLUDED
