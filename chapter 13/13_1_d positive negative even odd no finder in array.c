#include<stdio.h>
void findposineg(int *,int );
void findevenodd(int *,int );
void main()
{
	int a[5],i,*j;
	for (i=0;i<=4;i++)
	{
		printf("enter no\n");
		scanf("%d",&a[i]);
	}
	findposineg(&a[0],5);
	findevenodd(&a[0],5);
}
void findposineg(int *a,int n)
{int k,i=0,j=0;
	for(k=0;k<=n-1;k++)
	{
		if(*a>=0)
		{
		i++;
		}
		else j++;
		a++;
	}
	printf("\n%d positive and %d negative in total",i,j);
}

void findevenodd(int *a,int n)
{int k,i=0,j=0;
	for(k=0;k<=n-1;k++)
	{
		if(*a%2==0)
		{
		j++;
		}
		else
		i++;
		a++;
	}
	printf("\n%d even and %d odd in total",j,i);
}
