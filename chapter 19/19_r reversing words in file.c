#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

main()
{
	FILE *fp;
	fp = fopen("19_r.txt", "r");
	if (fp == NULL)
	{
		puts("File cannot be opened.\n");
		exit(1);
	}
	char word[11];
	int i;
	while(fscanf(fp," %s ",word)==1)
	printf("%s ",strrev(word));
	
	printf("\n");
	fclose(fp);
}

