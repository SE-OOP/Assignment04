class Rectangle  //Rectangle class definition
{
public:
   Rectangle(double = 1, double = 1);  //constructor initializes length  and width
   void setRectangle(double,double);  //function to set the Rectangle
   void setLength(double);
   void setWidth(double);
   double getLength();  //function to get the length
   double getWidth();
   double Perimeter(double,double); //declare function for the Perimeter
   double Area(double,double);  //declare function for the Area
private:
   double length; //length for this Rectangle
   double width;  //width for this Rectangle
};
