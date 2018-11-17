#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z;
printf("enter any angles 1,2,3");
scanf("%d %d %d",&x,&y,&z);
if(x+y+z==180)
printf("valid");
else 
printf("invalid");

getch();
}
