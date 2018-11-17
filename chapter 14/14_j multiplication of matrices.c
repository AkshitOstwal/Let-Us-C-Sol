#include<stdio.h>
 main()
 {
 	int i,j,k,sum,a[][3]={{1,3,3},{2,2,1},{1,1,1}},b[][3]={{3,2,2},{2,1,2},{5,2,2}};
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
	 {	
	 	for(j=0;j<3;j++)
	 		{ sum=0;
	 			for(k=0;k<3;k++)
 				{	sum=sum+(a[i][k]*b[k][j]);
				}
				printf("%d ",sum);
			}
		printf("\n");
		
	 }
 }
