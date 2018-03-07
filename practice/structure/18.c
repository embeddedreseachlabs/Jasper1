#include<stdio.h>
int main ( )
{
struct emp
{
char n[ 20 ];
int age ;
};
struct emp e1 = {"Dravid",23} ;
struct emp e2 = e1 ;
if (struct emp e1 == struct emp e2 )
printf("The structures are equal\n" ) ;
return 0 ;
}
