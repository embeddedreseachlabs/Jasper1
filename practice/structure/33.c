#include<stdio.h>
int main ( )
{
struct a
{
int category : 5; 
int scheme : 4 ;
} ;
printf ( " size = %d\n" , sizeof ( struct a ) ) ;
return 0;
}
