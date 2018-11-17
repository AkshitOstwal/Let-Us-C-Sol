#include<stdio.h>
#include<conio.h>

void main(){
	FILE * fp, * ft,* fk;
	char ch1,ch2;
	fp=fopen("19_e_1.txt","r");
	ft=fopen("19_e_2.txt","r");
	fk=fopen("19_e_3.txt","w");
	int nol1=0,nol2=0;
	if(fp==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	if(ft==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	while(1)
	{
		ch1=fgetc(fp);
		ch2=fgetc(ft);
		if(ch1==EOF&&ch2==EOF)
		break;
		if(ch1=='\n')
		{nol1++;}
		if(ch2=='\n')
		{nol2++;}
		if(ch1==EOF)
		{nol1=nol2=1;
		}
		if(ch2==EOF)
		{nol1=nol2=0;
		}
		if(nol1%2==0)
		fprintf(fk,"%c",ch1);
		if(nol2%2==1)
		fprintf(fk,"%c",ch2);
	}
	printf("copying done check file naming 19_e_3 ");
	fclose(fp);
	fclose(ft);
	fclose(fk);
}
