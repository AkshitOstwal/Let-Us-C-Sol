#include<stdio.h>

void main(){
	int i,b[6],a[]={1,2,3,4,5,6};
	printf("\nbefor copying\n");
	for(i=0;i<=5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<=5;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<=5;i++)
	b[i]=a[i];
	
	printf("\nafter copying\n");
	for(i=0;i<=5;i++)
	{
		printf("%d ",a[i]);
	}printf("\n");
	for(i=0;i<=5;i++)
	{
		printf("%d ",a[i]);
	}
}

