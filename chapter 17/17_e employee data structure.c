#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define SIZE 3
void main(){
	struct employee{char name[20]; int code; int year;}	c[SIZE],*p,temp;
	p=c;
	
	int i,j,k;
		for(i=0;i<SIZE;i++)
	{
		printf("enter name, code,year of joining\n");
		scanf(" %s %d %d",&(p+i)->name,&(p+i)->code,&(p+i)->year );
	}
printf("\n**************************************\n the data is as follow\n");
    //qsort(c,SIZE, sizeof(c)/SIZE ,cmpfunc);
    
    for (i=0;i<SIZE-1;i++)
    {
        for (j=i+1;j<SIZE;j++)
		{
		    if ((c[i].code>c[j].code)) 
            {
            	temp=c[i];
            	c[i]=c[j];
            	c[j]=temp;
            }
        }
	}
	for(i=0;i<SIZE;i++)
	{
		printf(" %s %d %d\n",(p+i)->name,(p+i)->code,(p+i)->year);
	}
	printf("\n****************************\n enter the current year\n");
	scanf("%d",&k);
	printf("the emplyoee whose tenure is greater than or equal to 3 year are\n");
	for(i=0;i<SIZE;i++)
	{	if((k-c[i].year)>=3)
		printf(" %s %d %d\n",(p+i)->name,(p+i)->code,(p+i)->year);
	}
}
