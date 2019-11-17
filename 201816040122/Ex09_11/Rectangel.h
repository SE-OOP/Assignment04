
;using namespace std;
class Rectangel
{
    public:
     explicit Rectangel(double=1,double=1);
     void setRectangel(double,double);
     void setRectangelLength(double);
     void setRectangelWidth(double);
     double getRectangelLength()const;
     double getRectangelWidth()const;
     double Rerimeter();
     double Area();
    private:
        double length;
        double width;
};
