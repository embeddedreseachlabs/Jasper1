#include<stdio.h>
int main( )
{
char str[ ]= "nagpur" ;
str[0] = 'k' ;
printf("%s\n", str );
//str[] = "kanpur" ;
printf ("%s\n" , str + 1 ) ;
return 0 ;
}
