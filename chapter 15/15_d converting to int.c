#include<stdio.h>
#include<conio.h>
main (){
	char arr[10];
	int i=0,j=0;
	printf("enter any no less than 10 digits\n");
	gets(arr);
	for(j=0;arr[j]!='\0';j++)
	i=i*10+arr[j]-'0';
	printf("%d",i);
}
