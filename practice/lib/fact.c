#include<stdio.h>
int fact(int p)
{
//int n=1;
if(p==0)
return 1;
return(p*fact(p-1));
}
