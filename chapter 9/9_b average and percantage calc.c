#include<stdio.h>
void avgperc(int,int,int,float *,float *);
main()
{
	int a,b,c;
	float avg=0,per=0;
	printf("enter marks in 3 sub. \n");
	scanf("%d%d%d",&a,&b,&c);
	avgperc(a,b,c,&avg,&per);
	printf(" average= %f percantage = %f",avg,per);
}
void avgperc(int a,int b,int c,float *av,float *per)
{
	*av=(a+b+c)/3;
	*per=(a+b+c)*100/300;
}
