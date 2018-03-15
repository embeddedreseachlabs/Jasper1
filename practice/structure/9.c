typedef struct data mystruct ;
struct data
{
int x ;
mystruct *b ;
}s;
#include<stdio.h>
/*typedef struct j y
{
char name[20];
int rollno;
int marks;
//struct j y;y is not complete is the error
struct y *p;
}s;*/
void main()
{
scanf("%s %d %d",s.name ,&s.rollno ,&s.marks);
printf("%s %d %d\n",s.name,s.rollno,s.marks);
}

