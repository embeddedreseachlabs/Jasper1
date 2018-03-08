#include<stdio.h>
int main ( )
{
union a
{
int i;
char ch[2] ;
};
union a u ;
u. ch[0] = 0 ;
u. ch[1] = 2 ;
u. ch[1] = 0 ;
u. ch[1] = 0 ;
printf( "%d\n" , u. i ) ;
return 0 ;
}
