#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double r,g,b,w,c,m,y,k,R,B,G;
printf("enter R B G (0-255) to convert it to CMYK ");
scanf("%lf %lf %lf",&r,&b,&g);
if(r!=0&&b!=0&&g!=0)
{
R=r/255;
B=b/255;
G=g/255;
if((R>=B)&&(R>=G))
w=R;
else if((B>=R)&&(B>=G))
w=B;
else if((G>=B)&&(G>=R))
w=G;
c=((w-R)/w);
m=((w-G)/w);
y=((w-B)/w);
k=(1-w);
printf("CMYK= %lf %lf %lf %lf",c,m,y,k);
}
else
printf("CMYK= 0 0 0 1");

getch();
}
