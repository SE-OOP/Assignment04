using namespace std;

class Rectangle1
{
	public:
	    Rectangle1(double=1 ,double=1);
		void setLength(double);
		double getLength();	
		void setWidth(double);
		double getWidth();
		double perimeter();
		double area();
	private:
		double length;
		double width;
 } ;
