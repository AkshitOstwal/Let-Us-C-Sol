#include<stdio.h>
void main()
{
	int a[5],i;
	for (i=0;i<=4;i++)
	{
		printf("enter no\n");
		scanf("%d",&a[i]);
	}
	for (i=0;i<=4/2;i++)
	{
		if(a[i]==a[4-i])
		printf("%d is same as %d element \n",i+1,5-i);
	}
}

