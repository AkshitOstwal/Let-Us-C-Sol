#include<stdio.h>
#include<conio.h>
# define SIZE 2
void showdata();
void validcust();
void withdraw();
struct bank{
	int accno;
	char name[30];
	float bal;
};
struct bank b[SIZE],*p;
	
void main()
{
	p=b;
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("enter acc.no , name, balance \n");
		scanf("%d %s %f",&(p+i)->accno,&(p+i)->name,&(p+i)->bal);
	}
printf("\n**************************************\n the data is as follow\n");
showdata();
validcust();
printf("\n now u have enterd withdraw or deposit function");
withdraw();
showdata();
}
void withdraw(){
	int i,c,ac;
	float a=0;
	printf("\nenter acc.no ,amount ,code(1 for deposit and 0 for withdraw)");
	scanf("%d %f %d",&ac,&a,&c);
	for(i=0;i<SIZE;i++)
	{
		if( ( (p+i)->accno)==ac)
		{
			if(c==1)
			( (p+i)->bal)+=a;
			if(c==0&&( (p+i)->bal)>=100)
			( (p+i)->bal)-=a;
		}
	}
}
void validcust(){
	int i;
	p=b;
	printf("\nCustomer with more than 100rs are\n");
	for(i=0;i<SIZE;i++)
	{	if( ( (p+i)->bal) >=100 )
		printf("%d %s %f\n",(p+i)->accno,(p+i)->name,(p+i)->bal);
	}
	printf("\n**************************************\n");
}
void showdata(){
	int i;
	p=b;
	for(i=0;i<SIZE;i++)
	{
		printf("%d %s %f\n",(p+i)->accno,(p+i)->name,(p+i)->bal);
	}
	printf("\n**************************************\n");
}
