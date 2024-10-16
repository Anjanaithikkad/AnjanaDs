#include<stdio.h>
void main()
{
	int ar1[20],ar2[20],ar3[40];
	int n1,n2;
	void readarray(int[],int);
	void printarray(int[],int);
	void sortarray(int[],int);
	void merge(int[],int,int[],int,int[]);
	printf("Number of Elements in First Array[1-20]:");
	scanf("%d",&n1);
	printf("Enter %d Numbers:",n1);
	readarray(ar1,n1);
	printf("Number of Elements in Second Array[1-20]:");
	scanf("%d",&n2);
	printf("Enter %d Numbers:",n2);
	readarray(ar2,n2);
	sortarray(ar1,n1);
	sortarray(ar2,n2);
	merge(ar1,n1,ar2,n2,ar3);
	printf("First array Sorted:\n");
	printarray(ar1,n1);
	printf("Second Array Sorted:\n");
	printarray(ar2,n2);
	printf("Merged Array:\n");
	printarray(ar3,n1+n2);
}
void readarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	return;
}
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;++i)
		printf("%d\n",a[i]);
	return;
}
void sortarray(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;++i)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	return;
}
void merge(int a[],int n1,int b[],int n2,int c[])
{
	int i,j,k;
	i=j=k=0;
	while(i<n1 && j<n2)
		if(a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
		while(i<n1)
			c[k++]=a[i++];
		while(j<n2)
			c[k++]=b[j++];
}
	
	
	
