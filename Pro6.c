#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left,*right;
};
void main()
{
	struct node*start=(struct node*)0;
	struct node*insert(struct node*,int);
	struct node*delete(struct node*,int);
	struct node*search(struct node*,int);
	void display(struct node*);
	int opt,data;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Search\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		printf("Enter Your Option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("Enter the Data:");
				scanf("%d",&data);
				start=insert(start,data);
				break;
			case 2:printf("Data to be Deleted:");
				scanf("%d",&data);
				start=delete(start,data);
				break;
			case 3:printf("Item to be Searched:");
				scanf("%d",&data);
				if(search(start,data)==(struct node*)0)
					printf("Item not Found\n");
				else
					printf("Item Found\n");
					break;
			case 4:display(start);
				break;
			case 5:exit(0);
		}
	}
	while(1);
}
void display(struct node *s)
{
	while(s!=(struct node*)0)
	{
		printf("%d\t",s->data);
		s=s->right;
	}
}
struct node*search(struct node*s,int data)
{
	while(s!=(struct node*)0 && s->data!=data)
		s=s->right;
		return s;
}
struct node*insert(struct node*s,int data)
{
	struct node*t;
	t=(struct node*)malloc(sizeof(struct node*));
	t->data=data;
	t->left=(struct node*)0;
	t->right=s;
	if(s!=(struct node*)0)
	{
		s->left=t;
		s=t;
	}
	return t;
}
struct node*delete(struct node*s,int data)
{
	struct node*t;
	t=search(s,data);
	
	if(t!=(struct node*)0)
	{
		if((t->left==(struct node*)0)&&t->right==(struct node*)0)
		{
			s=(struct node*)0;
			printf("Item %d Deleted.\n",data);
		}
		else if(t->left==0)
		{
			s=s->right;
			s->left=0;
			printf("Item %d Deleted.\n",data);
		}
		else if(t->right==0)
		{
			t->left->right=0;
			printf("Item %d Deleted.\n",data);
		}
		else
		{
			t->left->right=t->right;
			t->right->left=t->left;
			printf("Item %d deleted.\n",data);
		}
		free(t);
	}
	else
	{
		printf("Data Not Found\n");
	}
	return s;
}
		
				
		
