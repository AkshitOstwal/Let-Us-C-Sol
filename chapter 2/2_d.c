#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float x,y,Q,r;
printf("enter x, y");
scanf("%f %f",&x,&y);
r=sqrt(x*x+y*y);
Q=atan(x/y);
printf("r=%f Q=%f",r,Q);
getch();
}
