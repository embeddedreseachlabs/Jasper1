//27. Point out the error, if any, in the follwing code.
#include <stdio.h>
int main ( )
{
struct bits
{
//float f : 2 ;} bit ;bit feild should not have float values
int f : 2 ; 
int i : 2 ; 
int j : 2 ; 
int k : 2 ;} bit ;
printf ( "%d\n" ,sizeof ( bit ) ) ;
return 0 ;
}
