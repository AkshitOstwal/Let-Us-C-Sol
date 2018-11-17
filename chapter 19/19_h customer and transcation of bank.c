#include<stdio.h>
#include<conio.h>

void main() 
{
struct customer {
  int accno;
  char name[30];
  float balance;
  }cust;
struct trans {
       int accno;
       char trans_type;
       float amount;
       }tra;
FILE *fp,*ft,*ftemp;
int flag=0;
long recsize,retsize;
char another,ch;
fp=fopen("CUSTOMER.DAT","r+");
if(fp==NULL) 
{
	fp=fopen("CUSTOMER.DAT","wb+");
	if(fp==NULL)
		printf("cannot open customer data file!\n");
	
}
ft=fopen("TRANSACTIONS.DAT","r+");
if(ft==NULL) 
{
	ft=fopen("TRANSACTIONS.DAT","wb+");
	if(ft==NULL)
		printf("cannot open transactions file!\n");
	
}

recsize=sizeof(cust);
retsize=sizeof(tra);
while(1) 
{
	printf("\t\tCutomer Transactions:\n");
	printf("\t\t*********************\n\n\n");
	printf("\t1: Add customer information:\n\n");
	printf("\t2: Add transaction information:\n\n");
	printf("\t3: List customer information:\n\n");
	printf("\t4: List transaction information:\n\n");
	printf("\t5: Perform transaction:\n\n");
	printf("\t0: Exit:\n\n\n");
	printf("Your choice: ");
	fflush(stdin);
	ch=getchar();

	switch(ch) 
	{
		case '1':
		fseek(fp,0,SEEK_END);
		another='y';
		while(another=='y' || another=='Y')
		{
			printf("\t\tAdd customer information:\n");
			printf("\t\t*************************\n\n");
			printf("\nEnter account number: ");
			scanf("%d",&cust.accno);
			printf("\n\nEnter name: ");
			scanf("%s",cust.name);
			printf("\n\nEnter balance: ");
			fflush(stdin);
			scanf("%f",&cust.balance);
			fwrite(&cust,recsize,1,fp);
			printf("Add another customer information(Y/N): ");
			another=getchar();
		}
	break;

	case '2':
	fseek(ft,0,SEEK_END);
	another='y';
	while(another=='y' || another=='Y') 
	{
		printf("\t\tAdd transaction information:\n");
		printf("\t\t****************************\n\n\n");
		printf("Enter existing customer account number: ");
		scanf("%d",&tra.accno);
		printf("\n\nEnter transaction type(D/W): ");
		fflush(stdin);
		scanf("%c",&tra.trans_type);
		printf("\n\nEnter amount for transaction: ");
		fflush(stdin);
		scanf("%f",&tra.amount);
		fwrite(&tra,retsize,1,ft);
		printf("Enter another information(Y/N): ");
		another=getche();
	}
	break;

	case '3':
	printf("\t\tList customer information:\n");
	printf("\t\t**************************\n\n");
	rewind(fp);
	while(fread(&cust,recsize,1,fp)==1)
	{
		printf("\n%d\t%s\t%f\n",cust.accno,cust.name,cust.balance);
		flag=1;
	}
	if(flag==0) 
	{
		printf("No customer information found!\n");
	}
	printf("\n\npress any key to go back...");
	getch();
	break;
	
	case '4':
	printf("\t\tList transaction information:\n");
	printf("\t\t*****************************\n\n");
	rewind(ft);
	while(fread(&tra,retsize,1,ft)==1)  
	{
		printf("\n%d\t%c\t%f\n",tra.accno,tra.trans_type,tra.amount);
		flag=1;
	}
	if(flag==0)
	{
		printf("No transaction information found!\n");
	}
	printf("\n\npress any key to go back...");
	getch();
	break;

	case '5':
	printf("\t\tPerform transactions\n");
	printf("\t\t********************\n\n");
	rewind(fp);
	while(fread(&cust,recsize,1,fp)==1) 
	{
		rewind(ft);
		while(fread(&tra,retsize,1,ft)==1) 
		{
			if(cust.accno==tra.accno) 
			{
				flag=1;
				if(tra.trans_type=='D' || tra.trans_type=='d') 
				{
					cust.balance+=tra.amount;
					fseek(fp,-recsize,SEEK_CUR);
					fwrite(&cust,recsize,1,fp);
				}
				else if(tra.trans_type=='W' || tra.trans_type=='w') 
					{
						if((cust.balance-tra.amount)>=100)  
						{
							cust.balance-=tra.amount;
							fseek(fp,-recsize,SEEK_CUR);
							fwrite(&cust,recsize,1,fp);
						}
					}
			}
		}
	}	
	fclose(ft);
	ftemp=fopen("TEMP.DAT","rb+");
	if(ftemp==NULL) 
	{
		ftemp=fopen("TEMP.DAT","wb+");
	}
	remove("TRANSACTIONS.DAT");
	rename("TEMP.DAT","TRANSACTIONS.DAT");
	ft=fopen("TRANSACTIONS.DAT","rb+");
	if(ft==NULL) 
	{
		ft=fopen("TRANSACTIONS.DAT","wb+");
	}
	
	if(flag==0) 
	{
		printf("No active transactions\n");
	}

	else
		 if(flag>0) 
		{
			printf("Transactions performed seccussfully!\n");
			printf("NOTE: withdrawl for low balance accounts has not been performed\n");
		}
	printf("press any key to return...");
	getch();
	break;
	case '0':
	fclose(fp);
	fclose(ft);
	exit(1);
	}
	}
}
