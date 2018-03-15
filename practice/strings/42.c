#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ( )
{
char sentence[80] ;
int i ;
printf( " enter a line of text\n" ) ;
gets ( sentence ) ;
for ( i=strlen(sentence)-1;i>=0;i-- )
{
putchar ( sentence[ i ] ) ;
printf("\n");
}
printf("reverse of entered string is %s\n",revstr(sentence));
return 0 ;
}
