#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double a,b,c;
printf("enter a b c");
scanf("%lf %lf %lf",&a,&b,&c);
if((a==b)&&(a==c))
printf("equilateral");
else
if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(a!=b)))
printf("iscosceles");
else
if((a==(sqrt(pow(b,2)+pow(c,2))))||(b==(sqrt(pow(c,2)+pow(a,2))))||(c==(sqrt(pow(b,2)+pow(a,2)))))
printf("right triangle or scalene"); 
else
printf("scalene");
getch();
}
