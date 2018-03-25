#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
//int a,b;
int a[] = {20,10};
int result;
static void * threadfunc1(void *arg)
{
result=a[0]+a[1];
printf("result=%d\n",result);
return NULL;
}
static void * threadfunc2(void *arg)
{
result=a[0]-a[1];
printf("result=%d\n",result);
return NULL;

}
static void *threadfunc3(void *arg)
{
result=a[0]*a[1];
printf("result=%d\n",result);

return NULL;
}
int main( int argc ,char *argv[])
{
        pthread_t t1,t2,t3;
        void *res;
        int ret;
//printf("Enter a,b values\n");
//scanf("%d%d",&a,&b);  
        ret=pthread_create (&t1,NULL,threadfunc1,NULL);
        if(ret!=0)
        perror("pthread_create t1");

       printf("Main thread\n");
        ret=pthread_create (&t2,NULL,threadfunc2,NULL);
        if(ret!=0)
        perror("pthread_create t2");

        ret=pthread_create (&t3,NULL,threadfunc3,NULL);
        if(ret!=0)
        perror("pthread_create t3");

        ret=pthread_join(t1,&res);
        if(ret!=0)
        perror("pthread_join t1");

        ret=pthread_join(t2,&res);
        if(ret!=0)
        perror("pthread_join t2");

        ret=pthread_join(t3,&res);
        if(ret!=0)
        perror("pthread_join t3");
        exit(EXIT_SUCCESS);


}

