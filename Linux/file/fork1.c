#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int fd,fd1;
pid_t pd;
char ch[10],buff[10];
int n=10;
printf("fork is statement\n");
pd=fork();
/*if(fd<0)
{
perror("open");
}*/
if(pd>0)
{
printf("Sasi\n");
sleep(5);
printf("Pushpa\n");
printf("pd is %d\n",pd);
}
if(pd==0)
{
printf("Nagaraju\n");
sleep(5);
printf("Raju\n");
printf("pd is %d\n",pd);
}
}
