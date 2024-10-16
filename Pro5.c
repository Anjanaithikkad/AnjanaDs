struct node
{
	int data;
	struct node*next;
};
#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node*start=(struct node*)0;
	struct node*insert(struct node*,int);
	struct node*delete(struct node*);
	void display(struct node*);
	int opt,data;
	do
	{
		printf("1.Insert \n");
		printf("2.Delete \n");
		printf("3.Display \n");
		printf("4.Exit \n");
		printf("Enter Your Option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("Enter the Data:");
				scanf("%d",&data);
				start=insert(start,data);
				break;
			case 2:start=delete(start);
				break;
			case 3:display(start);
				break;
			case 4:exit(0);
		}
	} while(1);
}
struct node*insert(struct node*s,int item)
{
	struct node*t;
	t=(struct node*)malloc(sizeof(struct node*));
	t->data=item;
	t->next=s;
	return t;
}
struct node*delete(struct node*s)
{
	struct node*t=s;
	if(s!=(struct node*)0)
	{
		printf("%d deleted\n",s->data);
		s=s->next;
		free(t);
	}
	else
			printf("Empty list\n");
			return s;
}
void display(struct node*s)
{
	if(s==(struct node*)0)
		printf("List is Empty");
	else
	while(s!=(struct node*)0)
	{
		printf("%d\t\n",s->data);
		s=s->next;
	}
}
	
	
