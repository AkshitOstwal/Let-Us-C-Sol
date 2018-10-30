#include<stdio.h>
#include<conio.h>

int main()
{
int x,y,r;
printf("enter x, y");
scanf("%d %d",&x,&y);
r=y;
y=x;
x=r;
printf("x=%d y=%d",x,y);
getch();
}
