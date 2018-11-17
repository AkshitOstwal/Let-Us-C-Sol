#include<stdio.h>
void modify(int *);
int main()
{
	int i,arr[]={1,2,3,4,5,6,7,8,9,10};
	modify(&arr);
	for(i=0;i<=9;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
void modify(int *a)
{
	int i;
	for(i=0;i<=9;i++)
	{
		*a=(*a)*3;
		*a++;
	}
	
}
