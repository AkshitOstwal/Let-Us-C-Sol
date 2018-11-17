#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z;
printf("enter any ages 1,2,3");
scanf("%d %d %d",&x,&y,&z);
if(x>=y&&x>=z)
printf("1 is oldest");
else if(y>=x&&y>=z)
printf("2 is oldest");
else if(z>=y&&z>=x)
printf("3 is oldest");
getch();
}
