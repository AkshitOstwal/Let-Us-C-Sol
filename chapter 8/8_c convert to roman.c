#include<stdio.h>
void toroman(int);
void roman(int);
void main()
{
	int n;
	printf(" enter no u want to change into roman number");
	scanf("%d",&n);
	toroman(n);
}


void toroman(int n){
	// 1-I,5-V,10-X,50-L,100-C,500-D,1000-M //
	while(n>=1)
	{
		if(n>=1000)
		{
			printf("M");
			n=n-1000;
		}
		else
			if(n>=500)
			{
				printf("D");
				n=n-500;
			}
			else
				if(n>=100)
				{	
					printf("C");
					n=n-100;
				}
				else
					if(n>=50)
					{
						printf("L");
						n=n-50;
					}
					else
						if(n>=10)
						{
							printf("X");
							n=n-10;
						}
						else
							if(n>=5)
							{
								printf("V");
								n=n-5;
							}
							else
								if(n>=1)
								{
									printf("I");
									n=n-1;
								}
	}	
}


