#include<stdio.h>
#include<conio.h>

void main(){
	FILE * fp;
	FILE * ft;
	char ch;
	int nol=1;
	fp=fopen("19_d.txt","r");
	ft=fopen("19_d_copied.txt","w");
	if(fp==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		if(ch>=97 && ch<=122)
		ch=ch-32;
		fprintf(ft,"%c",ch);
	}
	printf("copying done");
	fclose(ft);
	fclose(fp);
	
}
