/*struct emp
{
int ecode;
struct emp e ;
} ;*/
#include<stdio.h>
struct j
{
char name[20];
int rollno;
int marks;
//struct j p; p is undifined
}s;
void main()
{
scanf("%s %d %d",s.name ,&s.rollno ,&s.marks);
printf("%s %d %d\n",s.name,s.rollno,s.marks);
}

