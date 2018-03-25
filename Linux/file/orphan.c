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
n = 8;
break;
default:
message = "This is the parent";
n = 3;
break;
}
for(i=0;i<n;i++)
{
puts(message);
sleep(5);
}
}
