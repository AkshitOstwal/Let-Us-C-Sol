#include<stdio.h>
#include<conio.h>
main(){
	char arr[100];
	char *i,*j;
	i=arr;
	j=arr;
	int p,c;
	printf(" enter the string\n");
	gets(arr);
	puts("enter the position, no. of char. (0 if want to select entire after desired position)");
	scanf("%d %d",&p,&c);
	
	if(c==0)
		{
			i=i+(p-1);
			while(*i!='\0')
			{
				printf("%c",*i);
				i++;
			}
		}
	else
	{
		i=i+(p-1);
		j=i+(c-1);
		for(i=i;i<=j;i++)
		{
			printf("%c",*i);
		}
	}
}
