#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        //A null terminated array of character 
        //pointers
      
        //execl("/demo/Jasper1/Linux/UserspaceCode/Processes/arg","arg","10","20","30",NULL);
        execl("./arg","arg","10","20","30",NULL);
     
        /*All statements are ignored after execvp() call as this whole 
        process(exec_arg.c) is replaced by another process (arg.c)
        */
        printf("Ending-----");
     
    return 0;
}
