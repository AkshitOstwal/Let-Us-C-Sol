#include<stdio.h>
int gcdivisor(int a, int b);
void main()
{
	int x,a,b;
	printf("enter two no a and b of which u want to find greatest common divisior\n");
	scanf("%d %d",&a,&b);
	x=gcdivisor(a,b);
	printf("\n%d",x);
}

int gcdivisor(int m, int n)
{

    int r;
	do
    {
        r=m%n;
        if(r==0)
        	break;
        	
        m=n;
        n=r;
    }
    while(r!=0);
    return n;

}
