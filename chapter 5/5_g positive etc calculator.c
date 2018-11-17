#include <stdio.h>
#include<conio.h>
int main()
{
    int no,p=0,n=0,x,z=0;
	
    for(x=1;x==1;)
	{
		printf("Enter a number ");
        scanf("%d",&no);
        if (no>0)
        {
            p++;
        }
        else if (no<0)
        {
            n++;
        }
        else
        {
            z++;
        }
        printf("Do you want to continue enter 1(y) or 0(n)");
        scanf("%d",&x);
    }
printf("\nPositive Numbers %d\nNegative Numbers %d\nZero Numbers %d ",p,n,z);
getch();
}
