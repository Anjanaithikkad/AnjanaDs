#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE];
int sp=-1;
void main()
{
	void push(int);
	int opt,data;
	int pop();
	void display();
	do
	{
		printf(" 1.Push \n");
		printf(" 2.Pop \n");
		printf(" 3. Display \n");
		printf(" 4.exit \n");
		printf(" Your Option is: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:printf("Data: ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:data=pop();
				printf("Popped item= %d\n",data);
				break;
			case 3:display();
				break;
			case 4:exit(1);
		}
	}
	while(1);
}
void push(int data)
{
	if(sp==SIZE-1)
		printf("Full Stack");
	else
		stack[++sp]=data;
}
int pop()
{
	if(sp==-1)
		printf("Empty Stack");
	else
		 return stack[sp--];
}
void display()
{
	int tsp=sp;
	printf("Stack Contents:\n");
	while(tsp!=-1)
	{
		printf("%d,",stack[tsp]);
		tsp--;
	}
	if(sp==-1)
	{
		printf("Empty stack\n");
		exit(1);
	}
	printf("\n");
}
	
			

