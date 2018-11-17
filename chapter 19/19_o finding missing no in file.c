#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

struct employee
{
	int empno;
	char name[30];
	int basic, grade;
};

void addemp(int, char*, int, int, char*);
void display(FILE*);
void miss(FILE*);
int main()
{
	FILE *fp;
	addemp(1,"Kishor Dass", 100,  1, "File (o).txt");
 	addemp(2,"Amit Kumar Mandal", 101,2, "File (o).txt");
 	addemp(3,"Prakash babu Sharma", 100, 3, "File (o).txt");
 	addemp(4, "Mohd Seraj Alam", 123, 1, "File (o).txt");
 	addemp(5, "Priya Saxena", 100, 2, "File (o).txt");
 	addemp(9, "Varun Taneja", 120, 3, "File (o).txt");
	addemp(13, "Shahrukh", 123, 3, "File (o).txt");
	addemp(20, "Paras Chugh", 452, 1, "File (o).txt");
	puts("\nList of the employees.\n\n");
	fp = fopen("File (o).txt", "rb+");
	display(fp);
	_getch();
	system("cls");
	miss(fp);
	_getch();
	fclose(fp);
	return 0;
}

void addemp(int eid, char *name, int bas, int grad, char *file)
{
	FILE *fp;
	struct employee dat;
	fp = fopen(file, "rb+");
	if (fp == NULL)
	{
		fp = fopen(file, "wb");
		if(fp == NULL)
		{
			printf("\nCannot open the file.\n");
			exit(1);	
		}
	}
	dat.empno = eid;
	strcpy(dat.name, name);
	dat.basic = bas;
	dat.grade = grad;
	fseek(fp, 0, SEEK_END);
	fwrite(&dat, sizeof(dat), 1, fp);
	fclose(fp);
}

void display(FILE *fp)
{
	struct employee dat;
	while (fread(&dat, sizeof(dat), 1, fp) == 1)
	{
		printf("%2d", dat.empno);
		printf("\t%-20s", dat.name);
		printf("\t % 4d", dat.basic);
		printf("\t % 3d\n", dat.grade);
	}
}

void miss(FILE *fp)
{
	int i = 1;
	struct employee dat;
	rewind(fp);
	puts("\nEmployees with following IDs are missing.");
	while (fread(&dat, sizeof(dat), 1, fp) == 1)
	{
		while(dat.empno != i)
		{
			printf("%d, ", i);
			i++;
		}
		i++;
	}
}

