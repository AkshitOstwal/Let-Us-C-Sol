#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c;
	for(a=1;a<+30;a++)
	{
		for(b=1;b<=30;b++)
		{
			for(c=1;c<=30;c++)
			{
				if((c*c==b*b+a*a))
				printf("%lf %lf %lf\n",a,b,c);
			}
		}
	}
    
    getch();
}
