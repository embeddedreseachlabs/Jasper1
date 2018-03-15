//6. Which of the following is the correct output for the program given below?
#include<stdio.h>
int main ( )
{
int i ;
char a[ ] = "\0" ;
if ( printf ( "%s" , a) )
printf( "The string is not empty\n") ;
else
printf( "The string is empty\n" ) ;
return 0;
}
