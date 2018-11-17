#include<stdio.h>
#include<conio.h>

main()
{
	FILE * fp;
	char another ='y';
	struct emp
	{	char name[40];
		int age;
		float bs;	
	}e;
	fp=fopen("demo.txt","wb");
	while(another=='y')
	{	printf("\n Enter name age,salary");
		scanf("%s %d %f",e.name,&e.age,&e.bs);
		fwrite(&e,sizeof(e),1,fp);
		printf("add another");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
}
