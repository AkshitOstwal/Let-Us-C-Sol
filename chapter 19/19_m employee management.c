#include<stdio.h>
#include<conio.h>

main()
{
	struct emp{
		int eno;
		char name[30];
		char s;
		int sal;
	}e;
	
	FILE * fp;
	fp=fopen("employee 19_m.dat","a+");
	char another='y';
	char ch;
	int remove,newsal;
	while(another=='y')
	{
		printf("press\n1 for addind new employee\n2 to remove employee\n3 to update salary\n4 to exit\n");
		fflush(stdin);
		ch=getchar();
		switch(ch)
		{
			case '1':
				printf("enter employee number,name,sex,salary\n");
				scanf("%d %s %c %d",&e.eno,e.name,&e.s,&e.sal);
				fprintf(fp,"\n%d %s %c %d",e.eno,e.name,e.s,e.sal);
			break;
			case '2':
				printf("enter the employee no");
				scanf("%d",&remove);
				rewind(fp);
				while (fread(&e, sizeof(e), 1, fp) == 1)
				{
					if (e.eno == remove)
					{
						fseek(fp, -(sizeof(e)), SEEK_CUR);
						e.sal= 0;
						fwrite(&e, sizeof(e), 1, fp);
						break;
					}
				}
			break;
			case '3':
				printf("enter the employee no and new salray\n");
				scanf("%d %d",&remove,&newsal);
				rewind(fp);
				while (fread(&e, sizeof(e), 1, fp) == 1)
				{
					if (e.eno == remove)
					{
						fseek(fp, -(sizeof(e)), SEEK_CUR);
						e.sal= newsal;
						fwrite(&e, sizeof(e), 1, fp);
						break;
					}
				}
			break;
			case '4':
			break;
		}
		printf("restart y/n\n");
		another=getche();
	}
	
	fclose(fp);
}
