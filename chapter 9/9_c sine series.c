#include<stdio.h>
double power(double,double);
double sin(double);
int fact(int);
void main()
{	double x,a;
	printf(" enter the value of x in degree for sin x ");
	scanf("%lf",&x);
	x=x*3.14159/180; //to change into radian from degree// 
	a=sin(x);
	printf("\n%lf",a);
}

double sin(double x)
{	double a;
	int i=1,n;
	for (n=0;n<10;n++)
	{
		a=a+((power(-1,n))*((power(x,i))/fact(i)));
		i=i+2;
	}
	return (a);
}

int fact(int i){
	int k;
	for(k=1;i>=1;i--)
	{
		k=k*i;
	}
	return (k);
}

double power(double i,double j)
{
	double p;
	for(p=1;j>=1;j--)
	{p=p*i;
	}
	return (p);
}

