#include<stdio.h>
void disp(int *);
void show(int **);
main()
{
	int i;
	int m[]={10,131,24,34};
	for (i=0;i<=3;i++)
	disp(&m[i]);
}

void disp(int *n)
{
	show(&n);
}
void show(int **a)
{printf("%d\n",**a);
}
