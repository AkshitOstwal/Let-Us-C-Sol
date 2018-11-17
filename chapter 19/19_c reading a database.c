#include<stdio.h>
#include<conio.h>

void main(){
	struct std{
		char n[30];
		int age;
	};
	struct std s;
	FILE * fp;
	char ch;
	fp=fopen("19_c.txt","r");
	if(fp==NULL)
	{puts("cant open file\n");
	 exit(1);
	}
	printf("name\tage\n");
	while(fscanf(fp,"%s %d",s.n,&s.age)!=EOF)
	{
		printf("%s %d\n",s.n,s.age);
	}
	fclose(fp);
	
}
