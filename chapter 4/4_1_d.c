#include<stdio.h>
#include<conio.h>
int main()
{
double a,b,c;
printf("enter side a,b,c");
scanf("%lf %lf %lf",&a,&b,&c);
printf(((a>=b&&a>=c&&a<b+c)||(b>=a&&b>=c&&b<a+c)||(c>=a&&c>=b&&c<a+b))?("valid"):("invalid"));
getch();
}
