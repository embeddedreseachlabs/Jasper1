#include<stdio.h>
struct course
{
int courseno ;
char coursename [25] ;
} ;
int main( )
{
struct course c[ ] = {
{ 102 , " thermal " },
{ 103 , " manufacturing " },
{ 104 , " design " }
} ;
printf( "%d" , c[1] .courseno ) ;
printf( "%s\n" , ( * ( c+2 ) ).coursename );
return 0 ;
}
