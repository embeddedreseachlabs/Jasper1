#include<stdio.h> 
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd;
	char ch;
	fd = open("Demo.txt",O_RDONLY);
	while(read(fd,&ch,1)!=0)	
		putchar(ch);
	close(fd);
	printf("\n");
}
