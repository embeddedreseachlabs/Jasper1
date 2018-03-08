#include"header.h"
#include<stdio.h>
int fact(int n)
{
int f = 1;
printf("In factorial\n");
while(n!=0)
{
f = f*n;
n--;
}

return (f);
}
