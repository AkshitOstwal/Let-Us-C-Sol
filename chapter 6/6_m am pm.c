#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	for(n=0;n<=24;n++)
	{
		if(n>=4&&n<=12)
		{
		printf("%dAM\n",n);
		}
		if(n>=12&&n<=16)
		{printf("%dPM\n",n);
		}if(n>=16&&n<=18)
		{printf("%dnoon\n",n);
		}if(n>=18&&n<=24)
		{
		printf("%dmidnight\n",n);}
	}
	getch();
}
