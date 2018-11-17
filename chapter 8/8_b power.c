#include<stdio.h>
float power(float,float);
int main()
{
	float i,j,p;
	printf(" enter any no any power u want it to be raised");
	scanf("%f %f",&i,&j);
	p=power(i,j);
	printf("%f \n",p);
}
float power(float i,float j)
{
	float p;
	for(p=1;j>=1;j--)
	{p=p*i;
	}
	return (p);
}
