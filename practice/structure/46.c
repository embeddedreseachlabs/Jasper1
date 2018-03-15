//47. Which of the following statement correctly assigns 45 to month using pointer variables pdt ?
#include<stdio.h>
struct date
{
int day ;
int month ;
int year ;
} ;
int main( )
{
struct date d ;
struct date *pdt ;
pdt = &d ;
scanf("%d",&(pdt->month));
printf("%d",pdt->month);
return 0 ;
}
