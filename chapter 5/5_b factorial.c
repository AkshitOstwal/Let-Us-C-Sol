
#include<stdio.h>
#include<conio.h>
int main()
{
int n,x;
x=1;
printf("enter factorial you want to find");
scanf("%d",&n);
while(n>1)
{
	x=x*n;
	n=n-1;
}
printf("%d",x);
getch();
}
