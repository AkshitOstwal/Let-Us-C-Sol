#include<stdio.h>
#include<conio.h>
#include<string.h>
# define SIZE 3
void main()
{
	struct automoblie{
		char sno[3];
		int year;
		char mat[30];
		int qty;
	};
	struct automoblie parts[SIZE],*p,temp;
	p=parts;
	int i,j;
	
	for(i=0;i<SIZE;i++)
	{
		printf("enter serial no, year of manufaturing,material ,quantity \n");
		scanf(" %s %d %s %d",&(p+i)->sno,&(p+i)->year,&(p+i)->mat,&(p+i)->qty);
	}
printf("\n**************************************\n the data is as follow\n");
    for (i=0;i<SIZE-1;i++)
    {
        for (j=i+1;j<SIZE;j++)
		{
		    if (strcmp(parts[i].sno,parts[j].sno)>0) 
            {
            	temp=parts[i];
            	parts[i]=parts[j];
            	parts[j]=temp;
            }
        }
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%s %d %s %d\n",(p+i)->sno,(p+i)->year,(p+i)->mat,(p+i)->qty);
	}
	printf("\n**************************************\n");
	for(i=0;i<SIZE;i++)
	{
		if(strcmp(parts[i].sno,"bb1")>0&&strcmp(parts[i].sno,"cc6")<0)
		printf("%s %d %s %d\n",(p+i)->sno,(p+i)->year,(p+i)->mat,(p+i)->qty);
	}	
}
