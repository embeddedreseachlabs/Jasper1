#include<stdio.h>
#include<string.h>
//void strcpy ( char* , char * ) ;
void st( char* , char * ) ;
int main ( )
{
char str1[ ] = "keep india beautiful... immigrate!" ;
char str2[40] ;
//strcpy ( str2, str1 ) ;
st( str2, str1 ) ;
printf( "%s\n" , str2 ) ;
return 0 ;
}
//void strcpy ( char *t, char *s )
void st( char *t, char *s )
{
while ( *s)
{
*t = *s ;
t++ ;
s++ ;
}
*t = '\0' ;
}
