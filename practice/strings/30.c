#include<stdio.h>
#include<string.h>
int main ( )
{
//char *str1 = "united" ;
//char *str2 = "front" ;
char str1[] = "united" ;
char str2[] = "front" ;
char str3;
//str3 =strcat(str1,str2) ;
strcat(str1,str2) ;
printf( " %s\n" , str1 ) ;
return 0 ;
}
