#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k;
	k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i&&k)
			{
			printf("*");
			k=0;
			}
			else
			{
			 printf(" ");
			 k=1;
			}
		}
		printf("\n");
	}
getch();	
}
