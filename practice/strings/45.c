#include<stdio.h>
int main ( )
{
static char mess[6][30] = {{"Don’t walk in front of me..."} ;{"I may not follow,"} ;{"Don’t walk behind me...."} ;{"just walk beside me..."} ;{"And be my friend."}};
printf( "%c %c\n", *( mess[2] + 9 ), * ( * ( mess + 2 ) + 9 ) ) ;
return 0 ;
}
