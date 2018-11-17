#include<stdio.h>
#include<conio.h>
main(){
	int a[3][3]={1,2,3,5,100,20,30,40,2};
	int i,j;
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
		}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("%d\t",a[j][i]);
		printf("\n");
		}	
		
	getch();

}
