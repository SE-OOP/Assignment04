#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"card.h"
#include"deckofcards.h"
struct POKER
{
    int num; // A:1 , J:11 , Q:12 , K:13
    int color; //黑1,红2,梅3,方4
}s[52];

int main()
{

    for(i=0;i<52;i++)
    {
        if(i%13==0)
        {
            cout<<"\n玩家%d : "<<i/13+1;
        }
        switch(s[i].num)
        {
            case 1: putchar('A');break;
            case 11: putchar('J');break;
            case 12: putchar('Q');break;
            case 13: putchar('K');break;
            default: printf("%d",s[i].num);
        }
        switch(s[i].color)
        {
            case 1:    putchar(6);break;
            case 2: putchar(3);break;
            case 3: putchar(5);break;
            case 4: putchar(4);break;
            default: printf(" ");
        }
      cout<<" ";
    }
    return 0;
}
