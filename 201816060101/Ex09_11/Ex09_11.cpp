#include "Rectangle.h"
#include <iostream>
using namespace std;
int main() {
	Rectangle a;	//Create an object
	cout << "Before change: \n";
	a.print();
	a.setLength(10);	//A valid data
	a.setWidth(20);	//An invalid data
	cout << "\nAfter change: \n";
	a.print();
	return 0;
}
