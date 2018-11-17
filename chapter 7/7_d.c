#include<stdio.h>
#include<conio.h>

main()
{
	int c,f,g;
	printf("enter class obtained \n");
	scanf("%d",&c);
	printf("\nno of subject failed\n");
	scanf("%d",&f);
	switch (c)
	{
		case 1:
			if(f<=3)
			g=5;
			else g=0;
			break;
			
		case 2:
			if(f<=2)
			g=4;
			else g=0;
			break;
		case 3:
			if(f<=1)
			g=5;
			else g=0;
			break;	
		default:
		g=0;
	}
	printf(" the students get %d marks in each failing subject",g);
	getch();
}
