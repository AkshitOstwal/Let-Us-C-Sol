#include<stdio.h>
#include<conio.h>
void main()
{
int x,n;
printf("enter no u want table of");
scanf("%d",&x);
for(n=1;n<=10;n++)
{
	printf("%d\n",n*x);
}
getch();
}
