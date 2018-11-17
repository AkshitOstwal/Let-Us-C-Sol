#include<stdio.h>
int factorial(int);

int main()
{
	int i,f;
	printf(" enter any no u want to calculate factorial of");
	scanf("%d",&i);
	f=factorial(i);
	printf("%d \n",f);
	return 0;
}
int factorial(int i)
{
	int j;
	for(j=1;i>=1;i--)
	{j=j*i;
	}
	return (j);
}

