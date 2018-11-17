#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,x;
	for(i=1;i<=5;i++)
	{	k=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i && k){
			printf("*");
			k--;
			}
			else
			{
				printf(" ");
			if(k==0)
			k++;
			}
		}
		printf("\n");
	}
	getch();	
}
