#include<stdio.h>
#include<conio.h>

int main()
{
int sum,x;
printf("enter sum");
scanf("%d",&sum);

	while(sum>=100)
	{x=x+1;
	sum=sum-100;
	}
	while(sum>=50)
	{x=x+1;
	sum=sum-50;
	}
	while(sum>=10)
	{x=x+1;
	sum=sum-10;
	}
	while(sum>=5)
	{x=x+1;
	sum=sum-5;
	}
	while(sum>=2)
	{x=x+1;
	sum=sum-2;
	}
	while(sum>=1)
	{x=x+1;
	sum=sum-1;
	}

printf("min no of notes needed=%d ",x);
getch();
}
