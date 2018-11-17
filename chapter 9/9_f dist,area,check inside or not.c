#include<stdio.h>
#include<math.h>

int check(double x1,double y1,double x2,double y2,double x3,double y3,double x,double y);
double dist(double x1,double y1,double x2,double y2);
double areaoft(double x1,double y1,double x2,double y2,double x3,double y3 );

main()
{	double x,y,x1,x2,x3,y1,y2,y3;
	int chk=0;
	x=y=x1=x2=x3=y1=y2=y3=0;
	printf("enter a b c coordinates ex x1 y1  x2 y2  x3 y3\n");
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	printf("\n enter p point x y to check weather its inside the triangle or not\n");
	scanf("%lf %lf",&x,&y);
	chk=check(x1,y1,x2,y2,x3,y3,x,y);
	if(chk==0)
	printf("\ninside");
	else
	printf("\noutside");
}

int check(double x1,double y1,double x2,double y2,double x3,double y3,double x,double y){
	double total,area,area1,area2,area3;
	total=area=area1=area2=area3=0;
	area=areaoft(x1,y1,x2,y2,x3,y3);
	area1=areaoft(x1,y1,x2,y2,x,y);
	area2=areaoft(x2,y2,x3,y3,x,y);
	area3=areaoft(x3,y3,x1,y1,x,y);
	total=area1+area2+area3-area;
	printf("area=%lf   area1=%lf   area2=%lf   area3=%lf   total=%lf",area,area1,area2,area3,total);	
	return (total);
}

double areaoft(double x1,double y1,double x2,double y2,double x3,double y3 )
{
	double s,a,b,c,area;
	s=a=b=c=area=0;
	a=dist(x1,y1,x2,y2);
	b=dist(x2,y2,x3,y3);
	c=dist(x3,y3,x1,y1);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return (area);
}

double dist(double x1,double y1,double x2,double y2)
{	double d=0;
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	return (d);
}


