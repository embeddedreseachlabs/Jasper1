#include<stdio.h>
int main( )
{
enum days { MON = -1, TUE, WED = 6, THU, FRI, SAT };
//printf("%d %d %d %d %d %d", ++MON, TUE, WED, THU, FRI, SAT ); increment should not be done
printf("%d %d %d %d %d %d", MON, TUE, WED, THU, FRI, SAT );
printf ( "\n" ) ;
return 0 ;
}
