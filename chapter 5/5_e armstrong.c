#include<stdio.h>
#include<conio.h>
int main()
{
int n,s,r,t;
 for(n=1;n<=500;n++)
	{
		t=n;
		s=0;
		while(t!=0)
		{
		 r=t%10;
		 t=t/10;
		 s=s+(r*r*r);
		}
	 if(s==n)
	 printf("%d ",n);	
	}
getch();
}
