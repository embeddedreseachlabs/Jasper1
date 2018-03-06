#include<stdio.h>
int main( )
{
char ch = 'A' ;
printf( "%d %d %d" , sizeof(ch),sizeof(sizeof('A')),sizeof(3.14 ) ) ;
printf( "%d %d %d" , sizeof(ch),sizeof('A'),sizeof(3.14 ) ) ;
printf ( "\n" ) ;
return 0 ;
}
