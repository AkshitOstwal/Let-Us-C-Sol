#include<stdio.h>
#include<math.h>
void sumavgsd(int,int,int,int,int,float *,float *,float *);
main()
{
	int a,b,c,d,e;
	float sum=0,avg=0,sd=0;
	printf("enter 5 no \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sumavgsd(a,b,c,d,e,&sum,&avg,&sd);
	printf("sum= %f average= %f standard deviation = %f",sum,avg,sd);
}
void sumavgsd(int a,int b,int c,int d,int e,float *s,float *av,float *sd)
{float j;
	*s=a+b+c+d+e;
	*av=*s/5;
	j=(pow((a-*av),2)+pow((b-*av),2)+pow((c-*av),2)+pow((d-*av),2)+pow((e-*av),2));
	*sd=sqrt(j/5);
}
