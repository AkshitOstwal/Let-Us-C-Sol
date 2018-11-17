#include<stdio.h>
#include<conio.h>
int main()
{
int n,x,y;
printf("enter no x and power y");
scanf("%d %d",&x,&y);
for(n=x;y>1;y--)
{
	n=n*x;
}
printf("%d",n);
getch();
}
