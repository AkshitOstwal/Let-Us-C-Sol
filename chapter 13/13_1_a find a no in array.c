#include<stdio.h>
void findno(int *,int ,int);
void main()
{
	int a[5],i,*j,f;
	for (i=0;i<=4;i++)
	{
		printf("enter no\n");
		scanf("%d",&a[i]);
	}
	printf("enter no u want to find out\n");
	scanf("%d",&f);
	findno(&a[0],5,f);
}
void findno(int *a,int n,int f)
{int k,i=0;
	for(k=0;k<=n-1;k++)
	{
		if(*a==f)
		{
		i++;
		printf("\nat %d position in array",k+1);
		}
		a++;
	}
	printf("\n%d time present in total",i);
}
