#include<stdio.h>
#include<conio.h>
int main()
{
	float x,n,t,k;

	for(n=1;n<=7;n++)
	{
	 k=1;
	 for (t=n;t>=1;t--)
	 {
	     k=k*t;
	 }
	 x=x+(n/k);
	}
	printf("%f",x);
	getch();
}
