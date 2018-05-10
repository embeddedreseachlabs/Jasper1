#include<stdio.h>
#include"header.h"
int main()
{
int a=4,b=2,m,n,o,p;
m=add(a,b);
printf("addition of a,b is %d\n",m);
n=sub(a,b);
printf("sub of a,b is %d\n",n);
o=mul(a,b);
printf("multiplication of a,b is %d\n",o);
p=div(a,b);
printf("division of a,b is %d\n",p);


return 0;
}

