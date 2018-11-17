#include<stdio.h>
#include<conio.h>
# define found (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' \
	|| str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' \
	|| str[i] == 'U')
main()
{
	int i,count=0;
	char str[200];
	printf("enter the line\n");
	gets(str);
	for(i=0;i<200;i++)
	{
		if(found)
		{i++;
			if(found){
			printf("%c%c ,",str[i-1],str[i]);
			count++;
			}
		}
	}
	printf("total %d times",count);
}
