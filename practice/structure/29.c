//29. What are the error does the following program give and what is the solution for it?
#include<stdio.h>
int main ( )
{
struct emp
{
char name[20] ;
float sal ;
} ;
struct emp e[10] ;
int i ;
for ( i=0 ; i<= 9 ; i++ )
scanf("%s %f",e[ i].name,&e[i].sal );
return 0 ;
}
