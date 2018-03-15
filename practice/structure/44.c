#include<stdio.h>
int main( )
{
struct emp
{
char name[20] ;
int age ;
float sal ;
} ;
struct emp e[2] ;
int i = 0 ;
printf("Enter the name,age,sal\n");
for( i=0 ; i<2 ; i++ )
scanf( "%s %d %f", e[i].name, &e[i].age, &e[i].sal ) ;
for( i=0 ; i<2 ; i++)
printf( "%s %d %f\n", e[i].name, e[i].age, e[i].sal ) ;
return 0 ;
}
