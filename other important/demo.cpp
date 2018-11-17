#include<stdio.h>
#include<conio.h>

struct std
{
int rno,yoj;
char name[30],dept[10],course[10];
};

void main(){
struct std s[450],*p;
int i;
p=s;
for(i=0;i<2;i++)
{
	printf("enter  \n");
	scanf("%d \n",&(p+i)->rno);
	
}
p=s;
for(i=0;i<2;i++)
{
	printf("%d ",(p+i)->rno);
}	
}
