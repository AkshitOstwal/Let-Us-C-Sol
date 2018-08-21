#include<stdio.h>
#include<conio.h>
int main()
{
float agg,per,m,p,c,e,h;
printf("enter marks in m");
scanf("%f",&m);
printf("enter marks in p");
scanf("%f",&p);
printf("enter marks in c");
scanf("%f",&c);
printf("enter marks in e");
scanf("%f",&e);
printf("enter marks in h");
scanf("%f",&h);
agg=(m+p+c+e+h)/5;
per=(m+p+c+e+h)/500*100;
printf("agg=%f per=%f ",agg,per);
getch();
}

