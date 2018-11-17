#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define EndOfWord word[i][j] == ' ' || word[i][j] == ','\
 || word[i][j] == '.' || word[i][j] == '\n'

void swap(char*, char*);
void list(FILE *);

int main()
{
	FILE *fp;
	fp = fopen("words.txt", "r");
	if (fp == NULL)
	{
		puts("\nCannot open the file.\n");
		exit(1);
	}
	list(fp);
	return 0;
}

void swap(char *one, char *two)
{
	char three[20];
	strcpy(three, one);
	strcpy(one, two);
	strcpy(two, three);
}

void list(FILE *fp)
{
	char word[30][20];
	int i = 0, j, count = 0, k1 = 0, k2 = 0;
	for (j = 0; 1; j++)
	{
		word[i][j] = fgetc(fp);
		if (word[i][j] == EOF)
			break;
		if (EndOfWord)
		{
			if (j != 0)
			{
				word[i][j] = '\0';
				i++;
				count++;
			}
			j = -1;
		}
	}
	for (i = 0; i < count; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (word[i][k1] > word[j][k2])
			{
				swap(word[i], word[j]);
				k1 = k2 = 0;
				continue;	
			}
			if (word[i][k1] < word[j][k2])
			{
				k1 = k2 = 0;
				continue;
			}
			if (word[i][k1] == word[j][k2])
			{
				if (word[i][k1 + 1] == '\0' && word[j][k2 + 1] == '\0')	
				{
					k1 = k2 = 0;
					continue;
				}
				if (word[i][k1 + 1] != '\0')
					k1++;
				if (word[j][k2 + 1] != '\0')
					k2++;
				j--;
			}

		}
	}
	printf("\nTotal number of words in the list is : %d\n", count);
	puts("Alphabatical listing of words is : ");
	for (i = 0; i < count; i++)
		printf("\n%-2d : %s", i + 1, word[i]);
	fclose(fp);
}
