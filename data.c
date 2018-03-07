#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}node;
node *first=NULL,*n,*temp;
void create_list()
{
	char ch ='y';
	while(ch=='y')
	{
		n=(node*)malloc(sizeof(node));
		printf("Enter the data\n");
		scanf("%d",&n->data);
		n->link =NULL;
		if(first==NULL)
		{

			first=temp=n;

		}
		else
		{

			temp->link=n;
			temp=n;

		}

		printf("Another Node y/n");
		fflush(stdin);
		scanf("%c",&ch);
	}
}
void insert_first()
{
	n=(node*)malloc(sizeof(node));
	printf("Enter the data\n");
	scanf("%d",&n->data);
	n->link=first;
	first=n;
}
void insert_last()
{
	temp=first;
	while(temp->link!=NULL)
	{
		temp =temp->link;
	}
	n=(node*)malloc(sizeof(node));
	printf("\nEnter the data");
	scanf("%d",&n->data);
	temp ->link=n;
	n->link=NULL;
}
void insert_between()
{
	node *p1,*p2;
	int pos;
	p1=NULL,p2=first;
	printf("Enter the position\n");
	scanf("%d",&pos);
	while(pos>1)
	{
		p1=p2;
		p2=p2->link;
		pos--;
	}
	n=(node*)malloc(sizeof(node));
	printf("Enter elements\n");
	scanf("%d",&n->data);
		p1->link=n;
		n->link=p2;
}
void retrive_first()
{
	temp =first;
	first=first->link;
	free(temp);
}
void retrive_last()
{
	node *p1;
	temp=first;
	p1=NULL;
	while(temp->link!=NULL)
	{
		p1=temp;
		temp=temp->link;
	}
	free(temp);
	p1->link =NULL;
}
void retrive_between()
{
	node *p1,*p2;
	int pos;
	p1=NULL;
	temp =first;
	p2=first->link;
	printf("Enter the positiin\n");
	scanf("%d",&pos);
	while(pos>1)
	{
		p1=temp;
		temp=p2;
		p2=p2->link;
		pos--;
	}	
	p1->link=p2;
	free(temp);
}
void search()
{
	int key,pos=1,x=0;
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	temp=first;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			x=1;
			break;
		}
		pos++;
		temp=temp->link;
	}
	if(x==0)
		printf("\n No such value");
	else
		printf("pos=%d",pos);

}
void display()
{
	temp=first;
	printf("The list contains\n");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp ->link;
	}
}
void reverse_list()
{
	node *p1,*p2;
	p1=first;
	p2=temp->link;
	p1->link=NULL;
	while(p2!=NULL)
	{
		temp->link=p1;
		p1=temp;
		temp=p2;
		p2=p2->link;
	}
	temp->link=p1;
	first=temp;
}
void main()
{
	int ch;
	first =NULL;

	printf("\n 0.Create List ");
	printf("\n 1.Insert first ");
	printf("\n 2.Insert last");
	printf("\n 3.Insert in between");
	printf("\n 4.Retrive first");
	printf("\n 5.Retrive last");
	printf("\n 6.Retrive in between");
	printf("\n 7.Display");
	printf("\n 8.Search for node");
	printf("\n 9.Reverse the list ");
	printf("\n 10.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	while(ch>=0&&ch<=10)
	{
	switch(ch)
	{

		case 0: 
			create_list();
			break;
		case 1: 
			insert_first();
			break;

		case 2: 
			insert_last();
			break;
		case 3: 
			insert_between();
			break;
		case 4: 
			retrive_first();
			break;
		case 5: 
			retrive_last();
			break;
		case 6: 
			retrive_between();
			break;
		case 7: 
			display();
			break;
		case 8: 
			search();
			break;
		case 9: 
			reverse_list();
			break;
		case 10:
			printf("Exit\n");
	
	
	}
//	printf("Enter your choice\n");
//	scanf("%d",&n);
	}	
	//getch();


}






