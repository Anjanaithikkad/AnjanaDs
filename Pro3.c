#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front=-1,rear=-1;
void main()
{
	void insertq(int);
	int deleteq();
	int searchq(int);
	int data,opt,ans;
	do
	{
		printf("\n 1.insertq ");
		printf("\n 2. deleteq ");
		printf("\n 3.searchq ");
		printf("\n 4.Exit ");
		printf("\n Your option is:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: printf("Data: ");
				scanf("%d",&data);
				insertq(data);
				break;
			case 2: data=deleteq();
				printf("Deleted item= %d ",data);
				break;
			case 3: printf("Item to be Searched:");
				scanf("%d",&data);
				ans=searchq(data);
				if(ans==1)
					printf("Element Found \n");
				else 
					printf("Element not Found \n");
				break;
			case 4: exit(0);
		}
	}
	while(1);
}
void insertq(int data)
{
	if(rear==SIZE-1)
		printf("Queue is Full \n");
	else
		queue[++rear]=data;
}
int deleteq()
{
	if(front==rear)
	{
		printf("Queue is Empty \n");
		exit(1);
	}
	else
	return queue[++front];
}
int searchq(int item)
{
	int tfront;
	if(front!=rear)
		{
			tfront=front+1;
	while(tfront!=rear && queue[tfront]!=item)
		++tfront;
	if(queue[tfront]==item)
		return 1;
	else
		return 0;
		}
		else
		{
		printf("Queue is Empty");
		exit(1);
		}
		
}
			
