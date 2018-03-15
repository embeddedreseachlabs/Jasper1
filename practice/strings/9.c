#include<stdio.h>
void xyz ( char * , char * ) ;
int main( )
{
char * pstr[2] = {
"hello" ,
"good morning"
} ;
xyz ( pstr[0], pstr[1] ) ;
printf( "%s\n%s" , pstr[0], pstr[1] ) ;
return 0 ;
}
void xyz ( char *t1, char *t2 )
{
char *t ;
t= t1;
t1 = t2 ;
t2 = t ;
}
