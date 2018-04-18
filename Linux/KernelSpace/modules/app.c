#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int
main ()
{
  int fd;
  char ch[] = "Helloworld";
  char rBuf[50];
  fd = open ("/dev/mynull1", O_RDWR);
  printf("open called\n");
  sleep (2);
  write (fd, ch, 1);
  printf("write called\n");
  sleep (2);
  read (fd, rBuf, 30);
  printf("read called\n");
  sleep (2);

  close (fd);
  printf("close called\n");
}
