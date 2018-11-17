#include<stdio.h>
#include<conio.h>
int main()
{
double cc,h,t;
printf("enter hardness,carbon content and tensile strength");
scanf("%lf %lf %lf",&h,&cc,&t);
if(h>50&&cc<.7&&t>5600)
printf("garde 10");
if(h>50&&cc<.7&&t<=5600)
printf("grade 9");
if(h<=50&&cc<.7&&t>5600)
printf("grade 8"); 
if(h>50&&cc>=.7&&t>5600)
printf("grade 7");
if((h>50&&cc>=.7&&t<=5600)||(h<=50&&cc>=.7&&t>5600)||(h<=50&&cc<.7&&t<=5600))
printf("grade 6");
if(h<=50&&cc>=.7&&t<=5600)
printf("grade 5");
getch();
}
