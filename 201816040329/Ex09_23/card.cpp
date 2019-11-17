
#include "Card.h"


     mycard(int,int);
     card::card(int fa,int su)
     {
         setface(fa);
         setsuit(su);
     }
     string card::tostring()
     {
         return card;
     }
     void card::setsuit(int su)
     {
         suit=su;
     }
     int card::getsuit()
     {
         return su;
     }
     void card::setface(int fa)
     {
f    face=fa;
     }
     int card::getface()
     {
         return fa;
     }
