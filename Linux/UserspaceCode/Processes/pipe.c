#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    pid_t pid;
    char *message;
    int n;
    int exit_code;
    char a[30]  = "helloworld";
    int fd[2];
    int ret;

    ret = pipe(fd);
    if(ret<0)
    {
    perror("pipe");
    }
    printf("fork program starting\n");
    pid = fork();
    switch(pid) 
    {
    case -1:
        exit(1);
    case 0:
        message = "This is the child";
        n = 8;
        exit_code = 37;
        strcpy(a,"Linux System Programming");
	ret = write(fd[1],a,15);
        if(ret < 0)
	{
	perror("write");

     }
        break;
    default:
        message = "This is the parent";
        n = 3;
        exit_code = 0;

	ret = read(fd[0],a,15);
        if(ret < 0)
	{
	perror("read");
        }
        break;
    }

    for(; n > 0; n--) {
        printf("%s -- PID = %d\n",a,getpid());
        sleep(2);
    }

/*  This section of the program waits for the child process to finish.  */

    if(pid) {
        int stat_val;
        pid_t child_pid;

        child_pid = wait(&stat_val);

        printf("Child has finished: PID = %d\n", child_pid);
        if(WIFEXITED(stat_val))
            printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
        else
            printf("Child terminated abnormally\n");
    }
    exit (exit_code);
}
