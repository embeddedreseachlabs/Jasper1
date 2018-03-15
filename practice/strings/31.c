#include<stdio.h>
#include<string.h>
int main ( )
{
//char *str1 = "united" ;
//char *str2 = "front" ;
char str1[] = "united" ;
char str2[] = "front" ;
char str3[20];
int i;
//str3 =strcat(str1,str2) ;
strcat(str1,str2) ;
for(i=0;i<20;i++)
str3[i]=str1[i];
printf( " %s\n" , str3 ) ;
return 0 ;
}
