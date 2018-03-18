#include<stdio.h>
#include<fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


int main()
{
	int fd;
	char ch;
	fd = creat("Demo.txt",S_IRWXU|S_IRWXG);
	printf("\n New File Desp : %d",fd);
	getchar();
	close(fd);
}
