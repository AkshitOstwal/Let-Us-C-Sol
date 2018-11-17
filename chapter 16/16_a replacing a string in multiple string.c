#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

#define LINE 6/*If the number of lines are increased
 so no need to change anything in the program just change
 LINE macro here.*/


int main()
{
	char *str[] = {
		"We will teach you how to...",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million",
		"...all through C!"
	};
	char str1[10],str2[10];
	puts("Enter the word you want to replace.");
	scanf("%s",str1);
	puts("Enter the word you want to put.");
	scanf("%s",str2);
	ser_rep(str,str1,str2);
	int i;
	for(i=0;i<=LINE-1;i++)
		puts(str[i]);
	getch();
	return 0;
}
void ser_rep(char **str, char *old, char *news)
{
	int i, j, k, m, c;
	j=k=0;
	char ans[10][100], *p;
	for (i=0;i<=LINE-1;i++)
	{
		m=0;
		c=0;
		for (j=0;str[i][j]!='\0';)
		{
			if (str[i][c]==old[k])
			{
				k++;
				c++;
				if (old[k]=='\0')
				{
                	for (k=0;news[k]!='\0';k++,m++)
						ans[i][m]=news[k];
					j=c;
					k=0;
				}
			}
			else
			{
				ans[i][m]=str[i][j];
				m++;
				j++;
				c=j;
				k=0;
			}
		}
		ans[i][m]='\0';
		j=k=m=0;
	}
	for (i=0;i<=LINE-1;i++)
	{
		p = (char*)malloc(strlen(ans[i])+1);
        strcpy(p,ans[i]);
		str[i]=p;
	}
}
