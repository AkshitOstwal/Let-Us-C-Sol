#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
printf("enter center coordinate x y ");
scanf("%d %d",&x,&y);
if(x==0)
{
if(y==0)
printf("on origin");
else
printf("on y axis");
} 
if(y==0&&x!=0)
printf("on x axis"); 
if(x!=0&&y!=0)
printf("not on axis or origin");
getch();
}
