#include<stdio.h>
#include"header.h"
int main()
{
int a=10,b=10,c,d,e,f;
c=add(a,b);
printf("addition of a,b is %d\n",c);
d=sub(a,b);
printf("subtraction of a,b is %d\n",d);
e=mul(a,b);
printf("multiplication of a,b is %d\n",e);
f=div(a,b);
printf("division of a,b is %d\n",f);
return 0;
}
