#include<stdio.h>
#include<conio.h>
int main()
{ 
double l,b,ar,pr;
printf("enter l, b ");
scanf("%lf %lf",&l,&b);
ar=l*b;
pr=2*(l+b);
if(ar>=pr)
printf("area is greater");
else
printf("perimeter is greater");

getch();
}
