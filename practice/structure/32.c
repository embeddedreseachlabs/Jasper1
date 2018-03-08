#include<stdio.h>
struct transaction
{
int sno ;
char desc[30] ;
char dc ;
float amount ;
};
/* here is the main program. */
int main ( int argc, char *argv[ ] )
{
struct transaction t ;
scanf("%d %s %c %f\n", &t.sno, t.desc, &t.dc, &t.amount );
printf ("%d %s %c %f\n",t.sno, t.desc, t.dc, t.amount ) ;
return 0 ;
}
