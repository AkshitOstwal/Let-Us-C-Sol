#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j!=i&&j!=8-i){
				printf("*");
			}
			else{
				if(j==8-i)
				printf("/");
				else
				printf("\\");
				}
		}
		printf("\n");
	}
	getch();	
}
