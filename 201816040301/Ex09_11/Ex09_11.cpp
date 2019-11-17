#ifndef EX09_11_CPP_INCLUDED
#define EX09_11_CPP_INCLUDED



#endif // EX09_11_CPP_INCLUDED
#include <iostream>

#include "Rectangle.h"

using namespace std;

int main()

{

	Rectangle a(1.0,1.0),b;//声明两个对象；

	a.print();

	b.setlength(2.0);

	b.setwidth(3.0);

	b.print();

	return 0;

}
