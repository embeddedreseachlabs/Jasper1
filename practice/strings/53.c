#include<stdio.h>
int main( )
{
char *names[ ]= {
"Roshni" ;
"Manish" ;
"Sona" ;
"Honey" ;
"Ritu" ;
} ;
int i ;
char *t ;
t = names[3] ;
names[3]= names[4] ;
names[4] = t ;
for( i=0 ; i<= 4 ; i++ ) ;
printf("%s", names[i] ) ;
printf("\n") ;
return 0 ;
}
