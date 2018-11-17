#include<stdio.h>
#include<conio.h>
main(){
	int a[3][3]={1,2,3,5,100,20,30,40,2};
	int max ,i,j;
	max=a[0][0];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		if(max<=a[i][j])
		max=a[i][j];
		}	
		printf("maximum no %d",max);
	getch();
}

