#include<stdio.h>
void leapyear(int);
void main(){
	int y;
	printf("enter year");
	scanf("%d",&y);
	leapyear(y);
}

void leapyear(int y){
	if(y%4==0)
	printf("leap year");
	else printf(" not a leap year");
}
