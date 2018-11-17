#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float d,x1,x,y1,y,r;
printf("enter center coordinate x y ");
scanf("%f %f",&x,&y);
printf("enter radius ");
scanf("%f",&r);
printf("enter pt. coordinate x1 y1 ");
scanf("%f %f",&x1,&y1);
d=sqrt(pow(x1-x,2)+pow(y1-y,2));
if(d>r)
printf("pt is outside");
if(d==r)
printf("pt is on circle");
if(d<r)
printf("pt is inside circle");
getch();
}
