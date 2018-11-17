#include<stdio.h>
int sum(int);
main(){
	int x,s;
	printf("enter last no till which u wan to calculate su of natural no");
	scanf("%d",&x);
	s=sum(x);
	printf("sum of natural no till %d is = %d",x,s);
	
}
int sum(int x){
	int s;
	if(x==1)
	{
	return (1);
	}
	else {
	s=x+sum(x-1);
	return (s);}
}
