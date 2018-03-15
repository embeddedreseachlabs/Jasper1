//6. Point out the error, if any, in the following code.
#include<stdio.h>
#include<string.h>

struct emp
{
char name[20] ;
int age ;
};
void modify( struct emp * ) ;
int main ( )
{
struct emp e = {"sanjay", 35 } ;
modify( &e ) ;
printf ( "%s %d\n" , e.name , e.age ) ;
return 0 ;
}
void modify( struct emp *p )
{
( p -> name );
p -> age = p-> age + 2 ;
}
