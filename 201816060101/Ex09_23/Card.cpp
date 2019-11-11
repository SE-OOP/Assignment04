#include "Card.h"

Card::Card(const int face, const int suit)
{
	setFace(face);
	setSuit(suit);
}

//Output as string
string Card::toString()
{
	//Array of static variables
	static string Face[15] = { "", "ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king", "joker" },
		Suit[5] = { "", "spade", "heart", "club", "diamond" };

	//If it's a ghost card
	if (getFace() == 14) return Face[getFace()];

	//If it's not a ghost card
	return string(Face[getFace()] + " of " + Suit[getSuit()]);
}

bool Card::setFace(const int face)
{
	//data validation
	if (face < 1 || face > 14) return 0;

	this->face = face;
	return 1;
}

bool Card::setSuit(const int suit)
{
	//data validation
	if (suit < 1 || suit > 4) return 0;

	this->suit = suit;
	return 1;
}

int Card::getFace() const
{
	return face;
}

int Card::getSuit() const
{
	return suit;
}
