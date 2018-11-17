#include<stdio.h>
#include<conio.h>
void main()
{
	int a,p,t,y;
	a=1000;
	t=a;
	for(y=1;y<=10;y++)
	{
		t=t+(.1*t);
		printf("pop at end of %d year is %d\n",y,t);
	}	
	getch();
}
