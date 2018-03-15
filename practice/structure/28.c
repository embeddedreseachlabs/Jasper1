//28. Point out the error, if any, in the following code.
#include<stdio.h>
int main ( )
{
struct bits
{
//int i : 40 ;(error: width of i isincreased)
int i : 5;
} bit ;
printf("%d\n", sizeof ( bit ) );
return 0 ;
}
