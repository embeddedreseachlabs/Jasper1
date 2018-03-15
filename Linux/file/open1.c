#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int fd;
char ch[10]="hello file";
fd=open("hello.txt",O_WRONLY|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
write(fd,ch,10);
close(fd);
}

