#include<stdio.h>
#include<conio.h>

void main(){
	unsigned int num,j=00001000,k=01000000,l=10000000;
	printf("enter 8-bit number= ");
	scanf("%u",&num);
	
	if(num&j!=0)
	printf("3rd bit is on\n");
	if(num&k!=0)
	printf("6th bit is on\n");
	if(num&l!=0)
	printf("7th bit is on\n");
}
