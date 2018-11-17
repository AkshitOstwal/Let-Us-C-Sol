#include<stdio.h>
struct date
{
	int d,m,y;
};
struct employee
{
	int empcode;
	char empname[20];
	struct date da;
	float salary;
};

void main()
{
	int choice;
	char another,another2;
	FILE *fs;
	struct employee e;
	fs=fopen("employee_join.txt","a+");
	while(1)
	{
		printf("1) Input new employee data");
		printf("\n2) Sort employee data");
		printf("\n3) Exit");
		printf("\n\nKey in your choice(1,2 or 3)\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			while(1)
			{
				printf("\nKey in employee's code\n");
				scanf("%d",&e.empcode);
				printf("\nKey in employee's name\n");
				scanf("%s",e.empname);
				printf("\nKey in year that employee joined\n");
				scanf("%d",&e.da.y);
				printf("\nKey in month that employee joined\n");
				scanf("%d",&e.da.m);
				printf("\nKey in day that employee joined\n");
				scanf("%d",&e.da.d);
				printf("\nKey in salary of employee\n");
				scanf("%f",&e.salary);
				fprintf(fs,"%d %s %d %d %d %f\n",e.empcode,e.empname,e.da.y,e.da.m,e.da.d,e.salary);
				printf("\nDo you want to key in another data?(y/n)\n");
				fflush(stdin);
				another=getche();
				if(another!='y')
				break;
			}
			break;
	
			case 2:
			funcsort(fs);
			break;
			
			case 3:
			fclose(fs);
			exit(1);
		}
	}	
}

funcsort(FILE *fs)
{
	int i,j,flag=0,count=0;
	struct employee temp1,temp2;
	struct employee e1[1000];
	char ch;
	FILE *fp;
	fp=fopen("employee_join2.txt","w");
	rewind(fs);
	for(i=0;i<1000;i++)
	{
		if(flag==0)
		{
			ch=fscanf(fs,"%d%s%d%d%d%f",&e1[i].empcode,e1[i].empname,&e1[i].da.y,&e1[i].da.m,&e1[i].da.d,&e1[i].salary);
			count++;
			if(ch==EOF)
			flag=1;
		}
		if(flag==1)
		{
			e1[i].empname[0]='\0';
		}
	}
	for(i=0;e1[i].empname[0]!=0;i++)
	{
		for(j=i+1;e1[j].empname[0]!='\0';j++) 
		{
			if(e1[i].da.y>e1[j].da.y)
			{
				temp1=e1[i];
				temp2=e1[j];
				e1[i]=temp2;
				e1[j]=temp1;
			}
			else if((e1[i].da.y==e1[j].da.y)&&(e1[i].da.m==e1[j].da.m))
			{
				if(e1[i].da.d>e1[j].da.d)
				{
					temp1=e1[i];
					temp2=e1[j];
					e1[i]=temp2;
					e1[j]=temp1;
				}
			}
			else if(e1[i].da.y==e1[j].da.y)
			{
				if(e1[i].da.m>e1[j].da.m)
				{
					temp1=e1[i];
					temp2=e1[j];
					e1[i]=temp2;
					e1[j]=temp1;
				}
			}	
		}
	}

	for(i=0;e1[i].empname[0]!=0;i++)
	{
		fprintf(fp,"%d %s %d %d %d %f\n",e1[i].empcode,e1[i].empname,e1[i].da.y,e1[i].da.m,e1[i].da.d,e1[i].salary);
	}
	fclose(fp);
	fclose(fs);
	fs=fopen("employee_join.txt","a+");
}
