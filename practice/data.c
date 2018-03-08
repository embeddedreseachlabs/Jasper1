#include<stdio.h>
#include<malloc.h>
typedef struct node
{
int num;
struct node *next;
}node;
void insert_first(void);
void insert_last(void);
int main()
{
node *n,*first=NULL,*temp=NULL;
int c;
do
{
n=(node *)malloc(sizeof(node));
printf("Enter the data\n");
scanf("%d",&(n->num));
n->next=NULL;
if(first==NULL)
{
first=n;
}
else
{
temp->next=n;
}
temp=n;
printf("create a new node 1/0\n");
scanf("%d",&c);
//free(n);
}
while(c==1);
}

