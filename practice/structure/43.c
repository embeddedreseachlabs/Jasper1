#include<stdio.h>
int main ( )
{
struct emp
{
char name[ 25 ] ;
int age ;
float bs ;
} ;
struct emp e={"rahul",25} ;
//e.name ="rahul";
//e.age = 25 ;
printf ( "%s %d\n", e.name, e.age ) ;
return 0 ;
}
