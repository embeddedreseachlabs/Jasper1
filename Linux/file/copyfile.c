#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int fd,fd1;
char ch[10]="hello file",buf[10];
fd=open("hello.txt",O_RDONLY);
if(fd<0)
{
perror("open");
}
read(fd,buf,10);

if(fd<0)
{
perror("read");
}
fd1=open("demo.txt",O_WRONLY|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);

if(fd1<0)
{
perror("open");
}
write(fd1,buf,10);
if(fd<0)
{
perror("write");
}
close(fd);
close(fd1);
}
