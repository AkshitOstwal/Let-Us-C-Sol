#include<stdio.h>
#include<conio.h>

int main()
{
	int r,i,j,k=0,n;
	printf("enter no of rows");
	scanf("%d",&r);
	n=(r+1)/2;
	for(i=1;i<=r;i++)
	{ 	if(r%2==0)	
		{if (i>n+1) k--;
		if(i<=n) k++;
		}
		else
		i<=n?k++:k--;
		for(j=1;j<=r;j++)
		{
			if( j>=n+1-k&&j<=n-1+k)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
getch();	
}
