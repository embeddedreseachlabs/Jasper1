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
//struct j y;y is not complete is the error
struct j *p;
}s;
void main()
{
scanf("%s %d %d",s.name ,&s.rollno ,&s.marks);
printf("%s %d %d\n",s.name,s.rollno,s.marks);
}

