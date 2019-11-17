#include <iomanip>
#include "Card.h"

using namespace std;

array <string,13>Card::facename={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
array <string,4>Card::suitname={"hearts","diamonds","clubs","spades"};
Card::Card(int FA,int SU)
{
    if( FA >= 0 && FA <= 12 )
        face = FA;
    if( SU >=0 && SU <= 3 )
        suit = SU;
}
string Card::gettostring()
{
    return facename[face] + " of " + suitname[suit];
}
