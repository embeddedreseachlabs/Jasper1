#include<stdio.h> 
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd;
	char ch;
	fd = open("Demo.txt",O_RDWR|O_CREAT);
	while((ch=getchar())!=EOF)
		write(fd,&ch,1);
	close(fd);
}
