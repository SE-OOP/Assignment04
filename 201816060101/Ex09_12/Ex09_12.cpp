#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	//Declare an rectangle object8
	Rectangle a;

	//Check if a is a square
	cout << "Now check if a is a square...\n";
	if (!a.checkSquare()) cout << "The rectangle is not a square!\n";
	else cout << "The rectangle is a square!\n";
	return 0;
}

/*
Please enter the coordinates of the top left, bottom left, top right and bottom right points, separed by a space character:
0 0
1 1
2 2
2 1
Invalid value!
Please enter the coordinates of the top left, bottom left, top right and bottom right points, separed by a space character:
1 2
1 1
2 2
2 1
Successful information entry!
Now check if a is a square...
The rectangle is a square!
*/
