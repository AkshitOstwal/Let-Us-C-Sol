#include<stdio.h>
#include<conio.h>

#define max 10
int radd(int *l, int *q,int *r,int num);
int ladd(int *l, int *q,int *r,int num);
int rfetch(int *l,int *q,int *r);
int lfetch(int *l,int *q,int *r);
int show (int *q,int *r);

void main()
{ 
	int que[max];
	int l,r;
	l=r=0;
	
	radd(&l,que,&r,10);
	radd(&l,que,&r,20);
	radd(&l,que,&r,30);
	show(que,&r);
	
	ladd(&l,que,&r,9);
	ladd(&l,que,&r,8);
	show(que,&r);
	
	rfetch(&l,que,&r);
	show(que,&r);
	
	lfetch(&l,que,&r);
	show(que,&r);
	getch();
}
int radd(int *l, int *q,int *r,int num)
{
	if(*r>=max)
	printf("list full!!!\n");
	else
	{
	q[*r]=num;
	(*r)++;
	}
}
int ladd(int *l, int *q,int *r,int num)
{
	int i;
	for(i=*r;i>=0;i--)
	{q[i+1]=q[i];
	}
	q[0]=num;
	(*r)++;
}
int rfetch(int *l,int *q,int *r){
	if(*r==0)
	printf("end of list\n");
	else
	(*r)--;
}
int lfetch(int *l,int *q,int *r){
	int i;
	for(i=0;i<=*r;i++)
	q[i]=q[i+1];
	(*r)--;
}

int show(int *q,int *r){
	int i;
	for (i=0;i<*r;i++)
	{printf("%d\t",q[i]);
	}
	printf("\n");
}
