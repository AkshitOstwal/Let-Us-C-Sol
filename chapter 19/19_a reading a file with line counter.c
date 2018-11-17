#include<stdio.h>
#include<conio.h>

void main(){
	FILE * fp;
	char ch;
	int nol=1;
	fp=fopen("7_d.c","r");
	if(fp==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	printf("1 ");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		if(ch=='\n')
		{nol++;printf("\n%d ",nol);}
		else printf("%c",ch);
	}
	printf("\n");
	fclose(fp);
	
}
