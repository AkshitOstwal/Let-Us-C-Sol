#include<stdio.h>
#include<conio.h>
#include<string.h>
#define EndOfWord word[i] == ' ' || word[i] == ','\
 || word[i] == '.' || word[i] == '\n'

int countword(FILE*);
void count4words(FILE*);

 main()
{
	FILE *fp;
	fp = fopen("trial.txt", "r");
	if (fp == NULL)
	{
		puts("\nCan't open the file.");
		exit(1);
	}

	int count = countword(fp);
	printf("\nThere are total %d words in file.\n", count);
	count4words(fp);
	return 0;
}

int countword(FILE *fp)
{
	int i, count = 0;
	char word[20];
	for (i = 0; 1; i++)
	{
		word[i] = fgetc(fp);
		if (word[i] == EOF)
			break;
		if (EndOfWord)
		{
			if (i != 0)		
				count++;
			i = -1;
		}
	}
	return count;
	fclose(fp);
}

void count4words(FILE *fp)
{
	int i, count = 0;
	char word[20];
	fp=fopen("trial.txt", "r");
	if (fp == NULL)
	{
		puts("\nCan't open the file.");
		exit(1);
	}
	puts("\nThe four letter words are following.\n");
	int j=0;
	for (i = 0; 1; i++)
	{
		word[i] = fgetc(fp);
		if (word[i] == EOF)
			break;
		if (EndOfWord)
		{
			if (i != 0)		
			{
				if (i == 4)
				{
					word[i + 1] = '\0';
					puts(word);
					j++;	
				}
			}
			i = -1; 
		}
	}
	printf("\n%d no of four letter words\n",j);
	fclose(fp);
}
