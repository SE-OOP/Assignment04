using namespace std;

class Point{
public:
	Point() {}
	Point(const double x, const double y);
	void setX(const double x);
	void setY(const double y);
	double getX() const;
	double getY() const;
private:
	double x, y;
};
