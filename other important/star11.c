#include<stdio.h>
#include<conio.h>
int main()
{
	int r,i,j,k=0,n;
	printf("enter no of rows");
	scanf("%d",&r);
	n=(r+1)/2;
	for(i=1;i<=r;i++)
	{if(r%2==0)
		{if(i<=r/2) k++;
	     if(i>r/2 +1) k--;
		}
		else
		i<=n?k++:k--;
		for(j=1;j<=n;j++)
		{
			if(j<=k)
			{
			printf("*");
			}
		}
		printf("\n");
	}
getch();	
} 
