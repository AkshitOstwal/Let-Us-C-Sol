#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float arr[10][2],dist=0;
	int i;
	for(i=0;i<10;i++)
	{ printf("enter x  y\n");
	  scanf("%f %f",&arr[i][0],&arr[i][1]);
	}
	for(i=0;i<9;i++)
	{dist=dist+sqrt((pow((arr[i+1][0]-arr[i][0]),2))+(pow((arr[i+1][1]-arr[i][1]),2)));
	}
	printf("%f",dist);
}
