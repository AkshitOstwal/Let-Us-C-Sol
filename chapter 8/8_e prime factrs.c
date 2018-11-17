#include<stdio.h>

int primefactors(int);
void main()
{
	int n;
	printf(" enter any int no to find its prime factors\n");
	scanf("%d",&n);
	printf("\nthe prime factors are\n");	
	primefactors(n);
}

int primefactors(int n){
	int a;
	for(a=2;a<=n;a++)
	{
		if (n%a==0)
		{
		 printf("%d,",a);
		 n=n/a;
		 a--;
		} 	
	}
}
