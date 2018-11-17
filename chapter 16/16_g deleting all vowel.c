#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#define Vowel line[i] == 'A' || line[i] == 'a' || line[i] == 'E' || line[i] == 'e' \
 || line[i] == 'I' || line[i] == 'i' || line[i] == 'O' || line[i] == 'o' || \
 line[i] == 'U' || line[i] == 'u'

void main()
{
	char line[80];
	puts("Enter the line");
	gets(line);
	int i, j;
	for (i = 0; line[i]!='\0';i++)
		if (Vowel)
		{	
			line[i]=' ';
		}
	printf("\nLine without vowels\n");
	puts(line);
}
