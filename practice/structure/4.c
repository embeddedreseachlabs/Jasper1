//find out if there are any errors in the below prgrm
/*typedef struct :no declaration of structure variable
{
int data ;
NODEPTR link ;
} *NODEPTR ;:it is a pointer variable not sturcture variable*/

#include<stdio.h>
typedef struct j
{
char name[20];
int rollno;
int marks;
//j link;// p is stucture name so cannot use within structure
}p;
void main()
{
p s;
p *d;//it is pointer variable of type struct p
scanf("%s %d %d",s.name ,&s.rollno ,&s.marks);
printf("%s %d %d\n",s.name,s.rollno,s.marks);
}

