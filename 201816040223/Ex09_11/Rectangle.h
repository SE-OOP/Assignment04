#include <string> // program uses C++ standard double class
using namespace std;
// Rectangle class definition
class Rectangle
{
public:
    Rectangle(double,double);//constructor
    void setlength(double);//set length
    double getlength();//return length
    void setwidth(double);//set width
    void area();
    void perimeter();
    void compare();
    double getwidth();//return width
    private:
    double length;
    double width;


};
