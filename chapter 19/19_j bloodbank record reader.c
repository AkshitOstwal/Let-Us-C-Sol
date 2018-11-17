#include<stdio.h>
#include<conio.h>
void main() {
FILE *fp;
char ch;
struct blood {
        char name[50];
        char adr[50];
        int age;
        int bld;
        }b;

fp=fopen("BLOODBANK.DAT","rb");

if(fp==NULL) 
{
	printf("cannot open source file!\n");
	exit(1);
}

while(fscanf(fp,"%s %s %d %d",&b.name,&b.adr,&b.age,&b.bld)!=EOF)
	if(b.age<25 && b.bld==2) 
	{
		printf("\n%s\t %s\t %d\t %d\n",b.name,b.adr,b.age,b.bld);
	}
fclose(fp);
getch();
}
