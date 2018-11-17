#include<stdio.h>
#include<conio.h>
int main()
{
double w;
printf("enter weight in pound");
scanf("%lf",&w);
if(w<115)
printf("flyweight");
if(w>=115&&w<=121)
printf("bantamweight");
if(w>=122&&w<=153)
printf("featherweight"); 
if(w>=154&&w<=189)
printf("middleweight");
if(w>=190)
printf("heavy weight");
getch();
}
