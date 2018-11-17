#include<stdio.h>
#include<conio.h>
int main()
{int x,y,z;
	for(x=1;x<=4;++x)
	{
		for(y=5-x;y>=0;--y)
		{
		 printf(" ");
		}
		for(z=x;z<=5+x;++z)
		{++x;
		 if(z<=2*x-1)
		 printf("%d ",x);
		 
		}
		
		printf("\n");
	}
	getch();
}
