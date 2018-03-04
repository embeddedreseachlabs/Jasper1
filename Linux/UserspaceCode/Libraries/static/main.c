#include<stdio.h>
#include"header.h"
int main()
{
int n,a,b;
printf("Enter a number to find factorial\n");
scanf("%d",&n);
printf("Enter two number for multiplication\n");
scanf("%d%d",&a,&b);
printf("factorial of %d = %d\n",n,fact(n));
printf("multiplication of %d, %d = %d\n",a,b,mul(a,b));

return 0;
}

