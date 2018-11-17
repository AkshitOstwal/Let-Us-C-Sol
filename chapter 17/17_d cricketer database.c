#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define SIZE 3
void main(){
	struct cric{char name[20]; int age; int test;float avg;	}	c[SIZE],*p,temp;
	p=c;
	
	int i,j;
		for(i=0;i<SIZE;i++)
	{
		printf("enter name, age,no of test played ,average score \n");
		scanf(" %s %d %d %f",&(p+i)->name,&(p+i)->age,&(p+i)->test,&(p+i)->avg);
	}
printf("\n**************************************\n the data is as follow\n");
    //qsort(c,SIZE, sizeof(c)/SIZE ,cmpfunc);
    for (i=0;i<SIZE-1;i++)
    {
        for (j=i+1;j<SIZE;j++)
		{
		    if ((c[i].avg>c[j].avg)) 
            {
            	temp=c[i];
            	c[i]=c[j];
            	c[j]=temp;
            }
        }
	}
	for(i=0;i<SIZE;i++)
	{
		printf(" %s %d %d %f\n",(p+i)->name,(p+i)->age,(p+i)->test,(p+i)->avg);
	}
}
