#include<stdio.h>
#include<conio.h>
void main()
{
double i,x,y;
printf(" intelegence table ");
for(y=1;y<=6;y++)
{
	for(x=5.5;x<=12.5;x+=.5)
	{
		i=2+(y+.5*x);
		printf("y=%lf x=%lf i=%lf\n",y,x,i);
	}
	
}
getch();
}
