#include<stdio.h>
#include<conio.h>
int main()
{
	double x,n,t,k;
	n=t=x=0;
	
	for(n=1;n<=7;n++)
	{
		k=1;
	 for (t=n;t<=1;t--)
	 {
	 	k=k*t;
	 }
	 x=x+(n/k);
	}
	printf("%lf",x);
	getch();
}
