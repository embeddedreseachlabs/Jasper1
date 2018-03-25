#include<stdio.h>
int main(int args,char * arg[])
{
int i;
printf("No of arguments %d\n",args);
for(i=0;i<args;i++)
printf("arguments given are %s\n",arg[i]);
}
