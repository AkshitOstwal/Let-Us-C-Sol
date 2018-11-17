#include<stdio.h>
#include<conio.h>
int main()
{
	int t,x,g,l,r;
	char i;
	g=l=0;
	while(i!='n')
	{
	 printf("enter no");
	 scanf("%d",&x);
	 t=x;
	 if(t>=g)
	 g=t;
	 if(t<=l)
	 l=t;
	 printf("do you want exit");
	 scanf("%c",i);
	}
	r=g-l;
	printf("range=%d",r);
	getch();
}
