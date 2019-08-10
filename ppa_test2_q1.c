#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
  int data;
  struct queue *next;
}Q;

Q *front=NULL,*rear=NULL;

void enQueue()
{
  int n,i;
  printf("Enter how many elements in queue to inserted:-");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      Q *temp=(Q *)malloc(sizeof(Q));
      printf("Enter %d queue element:-",i);
      scanf("%d",&temp->data);
      temp->next=NULL;
      if(front==NULL)
	{
	  front=rear=temp;
	}
      else
	{
	  rear->next=temp;
	  rear=temp;
	}
    }
  printf("\n%d Elements are inserted in queue\n",n);
}

void peek()
{
  Q *temp=front;
  if(temp==NULL)
    printf("Queue is empty\n");
  else
    {
      printf("\nQueue elements are:-\t");
      while(temp!=NULL)
	{
	  printf("%d\t",temp->data);
	  temp=temp->next;
	}
    }
  printf("\n");
}

void deQueue()
{
  Q *temp=front;
  if(temp==NULL)
    printf("\nQueue is empty\n");
  else
    {
      printf("\nFirst element of queue i.e. %d is deleted",temp->data);
      front=front->next;
      temp->next=NULL;
      free(temp);
    }
  printf("\n");
}

void main()
{
  int ch;
  while(1)
    {
      printf("1.enQueue\n");
      printf("2.peek\n");
      printf("3.deQueue\n");
      printf("4.exit\n");
      printf("Enter your choice:-");
      scanf("%d",&ch);
      switch(ch)
	{
	case 1:
	  enQueue();
	  break;

	case 2:
	  peek();
	  break;

	case 3:
	  deQueue();
	  break;

	case 4: exit(0);
	  break;

	default:printf("Invalid choice\n");
	}
    }
}

/*
ankush@ankush-X553SA:~/Desktop$ ./a.out
1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-1
Enter how many elements in queue to inserted:-4
Enter 0 queue element:-1
Enter 1 queue element:-2
Enter 2 queue element:-3
Enter 3 queue element:-4

4 Elements are inserted in queue
1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-3

First element of queue i.e. 1 is deleted
1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-3

First element of queue i.e. 2 is deleted
1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-3

First element of queue i.e. 3 is deleted
1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-3

First element of queue i.e. 4 is deleted
1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-3

Queue is empty

1.enQueue
2.peek
3.deQueue
4.exit
Enter your choice:-4
ankush@ankush-X553SA:~/Desktop$ 
*/
