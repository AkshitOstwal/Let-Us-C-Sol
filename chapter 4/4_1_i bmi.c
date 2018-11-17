
#include<stdio.h>
#include<conio.h>
int main()
{
double b,w,h;
printf("enter weight(kg) and height(m))");
scanf("%lf %lf",&w,&h);
b=w/(h*h);
if(b<15)
printf("Starvation");
if(b>=15&&b<=17.5)
printf("Anorexic");
if(b>=17.6&&b<=18.5)
printf("Underweight");
if(b>=18.6&&b<=24.9)
printf("Ideal");
if(b>=25&&b<=29.9)
printf("overweight");
if(b>=30&&b<=30.9)
printf("Obese");
if(b>=40)
printf("Morbidly Obese");
getch();
}
