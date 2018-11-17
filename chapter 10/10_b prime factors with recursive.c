#include<stdio.h>

int primefactrec(int);
int primefactors(int);
void main()
{
	int n;
	printf(" enter any int no to find its prime factors\n");
	scanf("%d",&n);
	printf("\nthe prime factors are\n");	
	primefactors(n);
	printf("\n");
	primefactrec(n);
}

int primefactors(int n){
	int a;
	for(a=2;a<=n;a++)
	{
		if (n%a==0)
		{
		 printf("%d, ",a);
		 n=n/a;
		 a--;
		} 	
	}
}

int primefactrec(int n)
{
	int i=2;
	if( n==1 )
		return;
	while(n%i!=0)
		i++;
	printf("%d, ",i);
	primefactrec(n/i);
}

