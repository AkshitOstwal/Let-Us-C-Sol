#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,k,ar;
printf("insert length a,b,c");
scanf("%f %f %f",&a,&b,&c);
k=(a+b+c)/2;
ar=sqrt(k*(k-a)*(k-b)*(k-c));
printf("area=%f",ar);
getch();
}
