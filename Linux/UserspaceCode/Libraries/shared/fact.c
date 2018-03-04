#include"header.h"
int fact(int n)
{
int f = 1;
while(n!=0)
{
f = f*n;
n--;
}

return (f);
}
