#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int fd,fd1;
pid_t pid;
int n,i;
char *message;
printf("fork is statement\n");

pid=fork();
switch(pid)
{
case -1:
perror("fork failed");
exit(1);
case 0:
message = "This is the child";
n = 3;
break;
default:
message = "This is the parent";
n = 5;
break;
}
/*if(pd>0)
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
}*/
for(i=0;i<n;i++)
{
puts(message);
sleep(2);
}
}
