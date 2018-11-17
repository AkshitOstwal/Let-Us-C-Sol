#include<stdio.h>
#include<conio.h>

void main(){
	char n[16];
	int i,j,l,sum=0;
	printf("enter the credit card no ex 4567123456789129 \n");
	gets(n);
	for(i=0;i<16;i=i+2)
	{
		j=0;
		j=j+n[i]-'0';
		j=j*2;
		if(j>=10)
		j=j-9;
		l=0;
		l=l+n[i+1]-'0';
		sum=sum+j+l;
	}
	if(sum%10==0)
	printf("valid credit card no.");
	else
	printf("invalid credit card no.");
}
