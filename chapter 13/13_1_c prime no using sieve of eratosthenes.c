#include<stdio.h>
void disp(int *,int);
void tozero(int *,int );
void main (){
	int a,i,num[100];
	for (i=0;i<=99;i++)
	{
		num[i]=i+1;
	}
	disp(&num[0],100);
	for(a=1;a<=99;a++)
	{
		if(num[a]!=0)
		tozero(&num[0],a);
	}
	printf("\nprime no till 100 are   ");
	disp(&num[0],100);
}
void disp(int *n,int i){
	int x;
	for (x=0;x<=i-1;x++)
	{
		if(*n!=0)
		printf("%d\t",*n);
		n++;
	}
	printf("\n");
}

void tozero(int *n,int a){
	int y;
for (y=a+1;y<=99;y++)
	{
		if((n[y])%(n[a])==0)
		n[y]=0;
	}
}
