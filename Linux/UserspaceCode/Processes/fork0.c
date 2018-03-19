#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    char *message;
    int n;

    printf("fork program starting\n");
    pid = fork();
    printf("sasi,from %d\n",getpid());
    sleep(2);
    printf("Pushpa, from %d\n",getpid());
    sleep(2);
    printf("Nagarjuna,from %d\n",getpid());
    sleep(2);
    printf("Raju from %d\n",getpid());
    sleep(2);
return 0;
}
