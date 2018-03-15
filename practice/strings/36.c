/*36. What is the difference in the following declaration ?
char *p = “samuel” ;
char a[ ] = “samuel” ;*/
#include<stdio.h>
int main()
{
char *p = "samuel" ;
char a[ ] = "samuel" ;
printf("%s   %s\n",p+1,a+1);
printf("%d   %d\n",sizeof(*p),sizeof(a));
}
