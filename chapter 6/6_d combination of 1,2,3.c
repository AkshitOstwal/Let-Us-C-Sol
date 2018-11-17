#include<stdio.h>
#include<conio.h>
int main()
{
	int x,n,t,rem;
	printf("program to print all combination of 1,2,3\n");
	for(n=111;n<=333;n++)
	{

	 {t=n;
	     rem=t%10;
	     t=t/10;
	     if(rem==1||rem==2||rem==3)
	    {
	    	x=t;
	    	rem=x%10;
	    	x=x/10;
	    	if(rem==1||rem==2||rem==3)
	    	{
	    	if(x==1||x==2||x==3)
	    	printf("%d\n",n);
			}
		}    
	 }
	}
	getch();
}
