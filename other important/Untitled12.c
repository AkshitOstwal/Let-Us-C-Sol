#include <math.h>
float geodis(int,int,int,int);
float areat(float,float,float);
int pcheck(int,int,int,int,int,int,int,int,float);
void main()
{
float dis1,dis2,dis3,area;
int a,b,c,d,e,f,g,h,i=0;
printf("\nInput the 3 coordinates x1,y1,x2,y2,x3,y3");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
dis1=geodis(a,b,c,d);
dis2=geodis(a,b,e,f);
dis3=geodis(c,d,e,f);
area=areat(dis1,dis2,dis3);
printf("\nThe area of the triangle is %f",area);
printf("\nEnter a point(x,y) to check if it lies in the triangle");
scanf("%d%d",&g,&h);
i=pcheck(a,b,c,d,e,f,g,h,area);
printf("\nThe value of i now is %d",i);
if(i==1)
printf("\nThe point lies inside the triangle");
else
printf("\nThe point lies outside the triangle");
}

float geodis(int x1,int y1,int x2,int y2)
{
float distance,x3,y3;
x3=x2-x1;
y3=y2-y1;
distance=sqrt(pow(x3,2)+pow(y3,2));
return(distance);
}

float areat(float a,float b,float c)
{
float area,s;
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
return(area);
}

pcheck(int a,int b,int c,int d,int e,int f,int g,int h,float area)
{
float area1,area2,area3;
float dis1,dis2,dis3,dis4,dis5,dis6;
int total;
dis1=geodis(a,b,e,f);
dis2=geodis(c,d,e,f);
dis3=geodis(a,b,c,d);
dis4=geodis(a,b,g,h);
dis5=geodis(e,f,g,h);
dis6=geodis(c,d,g,h);
area1=areat(dis4,dis3,dis6);
area2=areat(dis2,dis5,dis6);
area3=areat(dis1,dis5,dis4);
printf("\nArea in pcheck is %f",area);
printf("\nArea 1,2,3 is %f",area1+area2+area3);
total=area1+area2+area3-area;
printf("\nTotal is %d",total);
if(total==0)
return(1);
else
return(0);
}
