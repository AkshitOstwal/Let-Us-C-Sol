#include<stdio.h>
 main()
 {
 	int i,j,a[][3]={1,1,12,14,15,11,1,51,1},b[][3]={23,2,32,23,232,2,59,2,2};
 	printf("the first matrix is\n");
	 for(i=0;i<3;i++)
 	{for(j=0;j<3;j++)
 		printf("%d ",a[i][j]);
 		printf("\n");
	 }
	 printf("2nd matrix\n");
	for(i=0;i<3;i++) 
	{for(j=0;j<3;j++)
 		printf("%d ",b[i][j]);
 		printf("\n");
	 } 
	printf("addition  matrix\n");
 	for(i=0;i<3;i++)
	 {for(j=0;j<3;j++)
 		printf("%d ",a[i][j]+b[i][j]);
 		printf("\n");
	 }
 }
