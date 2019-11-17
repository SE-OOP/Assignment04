//Ex09_12:RectanglePro.h
//RectanglePro class definition
class RectanglePro
{
public:
	friend double distance(double, double, double, double);//calculator the distance between two points
	//constructor four coordinates
	RectanglePro(Point&, Point&, Point&, Point&);
	void setPoint();//Set the point;
	double getLength();//retrieve length of rectangle
	double getWidth();//retrieve width of rectangle
	double getPerimeter();//retrieve perimeter of rectangle
	double getArea();//retrieve area of rectangle
	bool square();//judge the shape
private:
	Point c1;
	Point c2;
	Point c3;
	Point c4;
};
