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
if(fd<0)
{
perror("open");
}
if(pd>0)
{
fd=open("hell.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
write(fd,ch,6);
close(fd);
}
if(pd==0)
{
fd1=open("hell1.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
write(fd1,ch,6);
close(fd1);
}
}
