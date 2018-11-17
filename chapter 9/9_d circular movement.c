#include<stdio.h>
int circular(int *,int *,int *);
main(){
	int x,y,z;
	printf(" enter the value of x , y , z ");
	scanf(" %d %d %d",&x,&y,&z);
	circular(&x,&y,&z);
	printf(" x=%d y=%d z=%d",x,y,z);
}

int circular(int *a,int *b,int *c)
{ int d;
	d=*c;
	*c=*b;
	*b=*a;
	*a=d;
}
