#include<stdio.h>
#include<conio.h>

void main(){
	int x;
	int i;
	restart:
	printf("enter speed of wind \n");
	scanf("%d",&x);
	if((x>=74)&&(x<=95))
	printf("I category hurrican\n");
	if((x>=96)&&(x<=110))
	printf("II category hurrican\n");
	if((x>=111)&&(x<=130))
	printf("III category hurrican\n");
	if((x>=131)&&(x<=155))
	printf("VI category hurrican\n");
	if(x>155)
	printf("V category hurrican\n");
	printf("start again enter yes(1)/no(0)\n");
	scanf("%d",&i);
	if(i==1)
	goto restart;
}
