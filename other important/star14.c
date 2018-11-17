#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,r;
	printf("enter no of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{k=r-i;
		for(j=1;j<=2*r-1;j++)
		{
			if(j<=r+1-i){
				printf("%d",k);
				j<=r+1-i?k--:k++;
			}
			else
				printf(" ");	
		}
		printf("\n");
		
	}
	getch();
	
}
