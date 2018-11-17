#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define SIZE 10
void addbook();
void display();
void listauth();
void displaytitle();
void displayno();
void listaccno();

struct lib{
int accno;char title[20];char aname[20];float price;int flag;/*flag 0 if taken and 1 if not*/} temp,l[SIZE],*p;
	int i,j=0;
void main(){
	p=l;
	int k;
	menu:
	printf("enter \n1. add book information \n2. display book information\n3. list all books of given author\n4. list the title of specified book\n5. list the count of books in the library\n6. list the books in the order of ascending number\n7. exit\n");
	scanf("%d",&k);
	if(k==1)
	addbook();
	if(k==2)
	display();
	if(k==3)
	listauth();
	if(k==4)
	displaytitle();
	if(k==5)
	displayno();
	if(k==6)
	listaccno();
	if(k!=7)
	goto menu;
}
void addbook(){
	printf("\n***************************\n");
	p=l;
	
	{
		printf("enter accession no,title,author name,price, flag(0 if taken 1 if not)\n");
		scanf(" %d %s %s %f %d",&(p+i)->accno,&(p+i)->title,&(p+i)->aname,&(p+i)->price,&(p+i)->flag );
		i++;
	}
	printf("\n****************************\n");
}
void display(){
		printf("\n***************************\n");
	for(j=0;j<i;j++)
	{
		printf(" %d %s %s %f %d\n",(p+j)->accno,(p+j)->title,(p+j)->aname,(p+j)->price,(p+j)->flag );
	}
		printf("\n***************************\n");
}
void listauth(){
	
	char n[20];
	printf("\n***************************\n");
	printf("enter the name of author youn want to search for\n");
	scanf("%s",n);
 	for(j=0;j<i;j++)
	{	if(strcmp(l[j].aname,n)==0)
		printf(" %d %s %s %f %d\n",(p+j)->accno,(p+j)->title,(p+j)->aname,(p+j)->price,(p+j)->flag );
	}	
	printf("\n***************************\n");
}
void displaytitle(){
	printf("\n***************************\n");
	for(j=0;j<i;j++)
	{
		printf(" %s\n",(p+j)->title );
	}
		printf("\n***************************\n");
	
}
void displayno(){
		printf("\n***************************\n");
		printf("\nthe total no of books left in library are\n");
		int k=0;
	for(j=0;j<i;j++)
	{
		if(l[j].flag!=0)
		k++;
	}
	printf("%d",k);
		printf("\n***************************\n");

}
void listaccno(){
	int k=0;
	for (j=0;j<i-1;j++)
    {
        for (k=j+1;k<i;k++)
		{
		    if ((l[j].accno>l[k].accno)) 
            {
            	temp=l[j];
            	l[j]=l[k];
            	l[k]=temp;
            }
        }
	}
	display();
}
