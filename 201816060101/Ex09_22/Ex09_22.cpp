#include <iostream>
#include "Time.h"

using namespace std;

int main() {
	Time a;
	cout << "Now it's ";
	a.printUniversal();

	//Initialize the time to 11:11:11
	Time b(11, 11, 11);
	cout << "\nInitialize the time to 11:11:11 : \n";
	b.printUniversal();
	//And mow Change the time to 22:22:22
	b = Time(22, 22, 22);
	cout << "And mow Change the time to 22:22:22 : \n";
	b.printUniversal();	//printStandard
	b.printStandard();	//printStandard
	return 0;
}
