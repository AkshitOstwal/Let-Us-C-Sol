#include<stdio.h>
#include<conio.h>
int main()
{
int x;
printf("enter any  int no");
scanf("%d",&x);
if(x<0)
printf("absolute value is  %d",-x);
else
printf("absolute value is  %d",x);
getch();
}
