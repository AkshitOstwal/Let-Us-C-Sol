#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x,i,y;
	y=0;i=1;
	printf("enter an intger\n");
	scanf("%d",&n);
	
	for(x=0;n!=0;i=i*10)
	{
	 x=n%8;
	 y=y+(x)*i;
	 n=n/8;
	}
	printf("%d",y);
	getch();
}
