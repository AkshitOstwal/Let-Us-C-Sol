#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,r;
	char k;
	printf("enter no of rows");
	scanf("%d",&r);
		for(i=1;i<=r;i++)
	{k='A';
		for(j=1;j<=2*r-1;j++)
		{
			if(j<=r+1-i||j>=r-1+i)
			{
			printf("%c",k);
			
			}
			else
			printf(" ");
		 j<r?k++:k--;
		}
		printf("\n");
	}
getch();	
}
