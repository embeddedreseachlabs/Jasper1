#include<stdio.h>
struct tryit
{
char *str[] ;
int i ;
} t ;
int main ( )
{
scanf("%s %d" , t.str, &t.i );
printf("%s\n" , *(t.str )) ;
return 0 ;
}
