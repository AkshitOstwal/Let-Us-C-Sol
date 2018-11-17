#include<stdio.h>
#include<math.h>
double aroftri(double a,double b,double c);
main()
{
	double a,b,c,area;
	printf(" enter the sides a ,b ,c of triangle ");
	scanf("%lf%lf%lf",&a,&b,&c);
	area=aroftri(a,b,c);
	printf("\narea=%lf",area);
}

double aroftri(double a,double b,double c){
	double area=0,s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	return (area);
}

