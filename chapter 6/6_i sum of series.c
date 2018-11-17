#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double x,y;
	double sum,z;
	sum=0;
	printf("enter x");
	scanf("%lf",&x);
	sum=(x-1)/x;
	for(y=2;y<=7;y+=1)
	{
		z=pow((x-1)/x,y);
		sum=sum+z;
	}
	printf("sum=%lf ",sum,x,y);
	getch();
}
