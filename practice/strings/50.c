#include<stdio.h>
int main( )
{
char str[20], *s ;
printf( "enter a string\n" ) ;
scanf( "%s", str ) ;
s = str ;
while ( *s!= '\0' )
{
if ( *s >= 97 && *s <= 122 )
*s=*s–32;
s++;
}
printf("%s\n",*s);
return 0 ;
}
