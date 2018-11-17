#include<stdio.h>
#include<conio.h>

void main()
{
	char line[80];
	puts("Enter the line");
	gets(line);
	int i, j;
	for (i = 0; line[i]!='\0';i++)
		if ((line[i]=='t'&&line[i+1]=='h'&&line[i+2]=='e')&&(line[i+3]==' ')||line[i+3]=='\0')
		{	
			for (j = i; line[j] != '\0'; j++)
				line[j] = line[j + 4];
		}
	printf("\nLine without vowels\n");
	puts(line);
}
