#include<stdio.h>
#include<stdlib.h>
#define size 10
int front,rear=0;
int que[size];
void main()
{
	void insertq(int);
	int deleteq();
	int searchq(int);
	int data,opt,ans;
	do
	{
		printf("1.Insert \n");
		printf("2.Delete \n");
		printf("3.Search \n");
		printf("4.Exit \n");
		printf("Your Option: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("Data: ");
				scanf("%d",&data);
				insertq(data);
				break;
			case 2:data=deleteq();
				printf("Delete data=%d\n",data);
				deleteq(1);
				break;
			case 3:printf("Search data:");
				scanf("%d",&data);
				ans=searchq(data);
				if(ans==1)
					printf(" Data Found \n");
				else
					printf("Data not Found \n");
					break;
			case 4:exit(0);
		}
	}
	while(1);
}
void insertq(int item)
{
	int trear=rear;
	trear=(trear+1)%size;
	if(trear==front)
		printf("Queue is Full");
	else
	{
		rear=trear;
		que[rear]=item;
	}
}
int deleteq()
{
	if(front==rear)
	{
		printf("Queue is Empty\n");
		exit(1);
	}
	else
	{
		front=(front+1)%size;
		return que[front];
	}
}
int searchq (int item)
{
	int tfront;
	tfront=(front+1)%size;
	while(tfront!=rear && que[tfront]!=item)
		tfront=(tfront+1)%size;
		if(que[tfront]==item)
			return 1;
		else
			return 0;
}
		
