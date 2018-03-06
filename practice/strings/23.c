#include<stdio.h>
#include<string.h>
int main( )
{
char str[ ] = "sales\0\man\0" ;
printf( "%d\n" , strlen ( str ) ) ;
return 0 ;
}
