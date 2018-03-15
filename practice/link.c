#include<stdio.h>
#include<malloc.h>
typedef struct node
 {
	int num;
	struct node *next;
 }node; 
  node *n,*first,*temp=NULL;

void insert_first(void);
void insert_last(void);
void insert_middle(void);
void reverse_list(void);


int main()
 {
    int c,s;
    first=NULL;
   
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
	}
      while(c==1);


   printf("select s value:\n");
   printf(" 1.insert_first\n");
   printf(" 2.insert_last\n");
   printf(" 3.insert_middle\n");
   printf(" 4.reverse_list\n");
   
   scanf("%d",&s);


switch(s)
{
	case 1: insert_first();
	break;
	case 2: insert_last();
	break;	
	case 3: insert_middle();
	break;
	case 4:reverse_list();
	
default: 
	 printf("End of Program");
}
}

void insert_first(void)
{
	n=(node *)malloc(sizeof(node));
	printf("Enter the data\n");
	scanf("%d",&(n->num));
	n->next=first;
	first=n;
	printf("node is inserted at first");
}

void insert_last(void)
{
	n=(node *)malloc(sizeof(node));
	printf("Enter the data\n");
	scanf("%d",&(n->num));
	temp->next=n;
	temp=n;
	printf("node is inserted at end\n");
}

void insert_middle(void)
{
	node *p1=first,*p2;
	int pos;
	n=(node *)malloc(sizeof(node));
	printf("Enter position to insert\n");
	scanf("%d",&pos);
	printf("Enter the data\n");
	scanf("%d",&(n->num));
		
	while(pos>1)
	  {
	  
	   p1=p2;
	   p2=p2->next;  
	  --pos;
	  }	
	p1->next=n;
	n->next=p2;
	printf("Node instered in Position Given\n");	
}

void reverse_list(void)
  {
	node *p1,*p2,*p3;
	p1=first;
	p2=p1->next;
	p3=p2->next;
	p1->next=NULL;
	
	  while(p3!=NULL)
	    {
	      p2->next=p1;
	      p1=p2;
	      p2=p3;
	      p3=p3->next;
	    }
	p2->next=p1;
	first=p2;
	printf("the list was reversed\n");
  }	


