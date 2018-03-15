#include<stdio.h>
#include<string.h>
int main ( )
{
struct emp
{
char *n ;
int age ;
} ;
struct emp e1 = {"Dravid", 23 } ;
struct emp e2 = e1 ;
//strupr(e2.n ) ;
printf("%s\n", (e1.n) ) ;
//printf("%s\n", *(e2.n) ) ;
printf("%s\n",strupr("abc"));
return 0 ;
}
