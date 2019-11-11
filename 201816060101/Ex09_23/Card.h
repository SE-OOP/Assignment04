#include <string>
using namespace std;

class Card {
public:
	Card() {}	//Constructor
	Card(const int face, const int suit);		//Constructor
	string toString();	//Output the card as string
	bool setFace(const int face);
	bool setSuit(const int suit);
	int getFace() const;
	int getSuit() const;
private:
	int face, suit;	//face and suit of the card
};
