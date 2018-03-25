#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
static void * threadfunc(void *arg)
{
        int len;
         char *s=(char *) arg;
        printf("%s",s);
        sleep(1);
        printf("%s",s);
        sleep(1);
        printf("%s",s);
        sleep(1);
        printf("%s",s);
        sleep(1);
        printf("%s",s);
        sleep(1);
        len=strlen(s);
        pthread_exit (&len);


}
static void * func(void *arg)
{
	int *s=(int *)arg;

	printf("%d",*s);
	pthread_exit (&s);
}
int main( int argc ,char *argv[])
{
        pthread_t t1,t2;
        void *res,*res1;
        int ret,ret1, a=100;
	int *s=&a;
        ret=pthread_create (&t1,NULL,threadfunc,"HELLOWORLD\n");
        if(ret!=0)
        perror("pthread_create");
        printf("Message from main()\n");

       
        ret1=pthread_create (&t2,NULL,func,s);
        if(ret1!=0)
	perror("pthread_create");
        printf("Message from main()\n");
        ret=pthread_join(t1,&res);
        if(ret!=0)
        perror("pthread_join");
        ret1=pthread_join(t2,&res1);
        if(ret1!=0)
        perror("pthread_create");
 printf("thread returned %ld\n",(long)res);
 printf("thread returned %d\n",*(int *)res1);
        exit(EXIT_SUCCESS);


}
              
