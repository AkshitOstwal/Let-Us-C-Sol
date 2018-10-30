#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float t,v,wcf;
printf("enter temp, velocity");
scanf("%f %f",&t,&v);
wcf=35.67+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);

printf("wind chill factor=%f",wcf);
getch();
}
