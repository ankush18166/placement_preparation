#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;
void createll()
{
	int i,n;
	struct node *temp,*ptr;
	
	printf("Enter how many node in linked list:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:-\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(head==NULL)
		{
			head=ptr=temp;
		}
		else
		{
		
			ptr->next=temp;
			ptr=temp;
		}
	}
}	
void revEven()
{

	struct node *p,*q;
	int temp;
	printf("rearranging linked list is\n");
	p=head->next;
	while(p!=NULL&&p->next!=NULL&&p->next->next!=NULL)
	{	
		q=p->next->next;
		
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		p=q;
	}	
	
	
			
}	
/*
output:-
		ankush@ankush-X553SA:~/Desktop$ ./a.out
Enter how many node in linked list:6
Enter data:-
1
Enter data:-
2
Enter data:-
3
Enter data:-
4
Enter data:-
5
Enter data:-
6
The list elements are 
1	2	3	4	5	6	
rearranging linked list is
The list elements are 
1	4	3	6	5	2	
ankush@ankush-X553SA:~/Desktop$ 
*/	
	
void display()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("list is empty");
	}
	else
	{
		ptr=head;
		printf("The list elements are \n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	printf("\n");
	}
}

void main()
{
	createll();
	display();
	revEven();
	display();
}
