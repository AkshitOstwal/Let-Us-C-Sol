#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float l1,l2,g1,g2,d;
printf("enter l1, l2, g1 ,g2");
scanf("%f %f %f %f",&l1,&l2,&g1,&g2);
d=3963*(acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1)));
printf("nautical dist=%f",d);
getch();
}
