#include<stdio.h>
#include<conio.h>
int main()
{
int arr,x1,x2,x3,y1,y2,y3;
printf("enter x1 y1  x2 y2   x3 y3 ");
scanf("%d %d  %d %d  %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
arr=(((x1-x2)*(y2-y3))-((y1-y2)*(x2-x3)));
if(arr==0)
printf("pts are collinear");
else
printf("pts are non-collinear");
getch();
}
