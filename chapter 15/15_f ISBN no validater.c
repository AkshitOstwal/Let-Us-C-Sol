#include<stdio.h>
#include<conio.h>

void main(){
	char n[10];
	printf("enter the ISBN no of book ex 0471190470\n");
	
	gets(n);
	int i,sum=0,j;
	for(i=9;i>=0;i--)
	{
		if(n[i]!='x')
		{j=0;
		j=j+n[i]-'\0';
		sum=sum+(10-i)*j;}
		else
		{j=0;
		j=10;
		sum=sum+(10-i)*j;
		}
	}	
	if(sum%11==0)
	printf("valid ISBN no");
	else
	printf("invalid ISBN no");
}
