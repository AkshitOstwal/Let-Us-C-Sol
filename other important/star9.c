#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	char k;
	for(i=1;i<=5;i++)
	{k='A';
		for(j=1;j<=7;j++)
		{
			if(j<=5-i||j>=3+i)
			{
			printf("%c",k);
			
			}
			else
			printf(" ");
		 j<4?k++:k--;
		}
		printf("\n");
	}
getch();	
}
