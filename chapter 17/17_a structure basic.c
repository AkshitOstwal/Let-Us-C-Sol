#include<stdio.h>
#include<conio.h>
# define SIZE 2
struct std
{
int rno,yoj;
char name[30],dept[10],course[10];
};

void main(){
struct std s[SIZE],*p;
int i,y;
p=s;
for(i=0;i<SIZE;i++)
{
	printf("enter roll no , name , dept, course,year of joining \n");
	scanf("%d %s %s %s %d",&(p+i)->rno,&(p+i)->name,&(p+i)->dept,&(p+i)->course,&(p+i)->yoj);
}
printf("\n**************************************\n the data is as follow\n");
for(i=0;i<SIZE;i++)
{
	printf("%d %s %s %s %d \n",(p+i)->rno,(p+i)->name,(p+i)->dept,(p+i)->course,(p+i)->yoj);
}	
printf("\n**************************************\n now enter year of joining you want to find students of\n");
scanf("%d",&y);
for(i=0;i<SIZE;i++)
{
	if(((p+i)->yoj)==y)
	printf("%d %s %s %s %d \n",(p+i)->rno,(p+i)->name,(p+i)->dept,(p+i)->course,(p+i)->yoj);
}
}
