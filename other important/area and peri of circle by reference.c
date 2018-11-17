#include<stdio.h>
void areaperi(int,float * ,float *);
int main ()
{
	int r;
	float a,p;
	printf("r=");
	scanf("%d",&r);
	areaperi(r,&a,&p);
	printf(" area =%f perimeter= %f",a,p);
}

void areaperi(int r,float *a,float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
