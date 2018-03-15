#include<stdio.h>
int main(void)
{
int a=5;
begin:
if(a)
{
printf("%d ",a);
a--;
goto begin;
}
return 0;
}
