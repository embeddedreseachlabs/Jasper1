#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        //A null terminated array of character 
        //pointers
        execl("cmd","cmd","10","20","30","40",NULL);
     
        /*All statements are ignored after execvp() call as this whole 
        process(execDemo.c) is replaced by another process (EXEC.c)
        */
        printf("Ending-----");
        printf("Ending-----");
        printf("Ending-----");
     
    return 0;
}
