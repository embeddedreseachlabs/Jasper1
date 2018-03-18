#include<stdio.h>
#include<fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main()
{
	int fd1,fd2,count;
	char ch[10]="catch",buf[10];
	char a = 'x';
	int ret;
	fd1 = open("Demo1.txt",O_RDWR);
	if(fd1<0)
	{
	perror("open");
	}
	printf(" New File Desp : %d\n",fd1);
	ret =read(fd1,buf,5);
	if(ret<0)
	{	
	perror("read");
	}
	printf("read - %s\n",buf);
	fd2 = open("Demo2.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
	if(fd2<0)
	{
	perror("open");
	}
	printf(" New File Desp : %d\n",fd2);
	ret = write(fd2,buf,5);
	if(ret<0)
	{	
	perror("read");
	}
	
	close(fd1);
	close(fd2);
}
