#include<stdio.h>
/*typedef struct s// this declaration is working
{
char name[20];
int rollno;
int marks;
}s;*/
typedef struct p
{
char name[20];
int rollno;
int marks;
}p;
void main()
{
p s;
scanf("%s %d %d",s.name ,&s.rollno ,&s.marks);
printf("%s %d %d\n",s.name,s.rollno,s.marks);
}

