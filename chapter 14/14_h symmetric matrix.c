#include<stdio.h>
#include<conio.h>
main(){
	int a[3][3]={1,0,0,0,1,0,0,0,1};
	int i,j,k;
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
		k=(a[i][j]==a[j][i])?1:0;
		if (k==0)
		{printf("non symmetric");
		break;
		}
	}	
	if(k==1)
	printf("symmmetric");	
	getch();

}
