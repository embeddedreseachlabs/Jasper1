#include<stdio.h>
#include<string.h>
int main( )
{
static char str1[ ] = "dills" ;
static char str2[20] ;
static char str3[20] = "daffo" ;
int I ;
I = strcmp ( strcat ( str3, strcpy ( str2, str1 ) ), "daffodills" ) ;
printf( " %d\n" , I ) ;
return 0 ;
}
