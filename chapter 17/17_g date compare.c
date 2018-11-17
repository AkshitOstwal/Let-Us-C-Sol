#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int datecmp(){
	struct date{ int d; int m;int y;
	}d1,d2;
	printf("enter 1 date according to date month year format\n");
	scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
	printf("enter 2nd date according to date month year format\n");
	scanf("%d %d %d",&d2.d,&d2.m,&d2.y);
	printf("\n%d %d %d\n%d %d %d\n",d1.d,d1.m,d1.y,d2.d,d2.m,d2.y);
	if((d1.d==d2.d)&&(d1.m==d2.m)&&(d1.y==d2.y))
	return 0;
	else
	return 1;	
}
void main(){
	int i;
	i=datecmp();
	printf("%d",i);
}
