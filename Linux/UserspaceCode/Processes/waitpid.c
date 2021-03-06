#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, stat;
    pid_t pid[5];
    for (i=0; i<5; i++)
    {
        if ((pid[i] = fork()) == 0)
        {
	    if(0 == i)
	    {
            sleep(5);
            exit(100 + i);
            }
	    else
	    {
            sleep(30);
            exit(100 + i);
           }
	}
    }
 
    // Using waitpid() and printing exit status
    // of children.
    for (i=0; i<1; i++)
    {
	if(pid[i])
        {
        pid_t cpid = waitpid(pid[i], &stat, 0);
        if (WIFEXITED(stat))
            printf("Child %d terminated with status: %d\n",
                   cpid, WEXITSTATUS(stat));
        }
    }
return 0;
}
