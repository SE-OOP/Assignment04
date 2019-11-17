#include "Card.h"
using namespace std;

Card::Card(int f,int s)
{
	face=f;
	suit=s;
}

string Card::toString()
{
	string ok="";
	ok=color[suit]+" of "+number[face];
	return ok;
}
