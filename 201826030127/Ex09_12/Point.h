#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class point
{
    public:
    point(int,int);
    double distance(const point);
    int getx();
    int gety();

    private:
    int x;
    int y;

};
#endif // POINT_H_INCLUDED
