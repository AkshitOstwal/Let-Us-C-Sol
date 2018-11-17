#include<stdio.h>
#include<conio.h>

void main(){
	FILE * fp;
	FILE * ft;
	char ch;
	int nol=1;
	fp=fopen("19_b.txt","r");
	ft=fopen("19_b_copied.txt","a");
	if(fp==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		fprintf(ft,"%c",ch);
	}
	printf("adding done");
	fclose(ft);
	fclose(fp);
	
}
