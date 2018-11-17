#include<stdio.h>
void shifttwo(int *a);
void main(){
	int i,j,a[4][5]={ 1,2,3,4,5,
					6,7,8,9,10,
					11,12,13,14,15,
					16,17,18,19,20};
	for(i=0;i<4;i++)
	{ for(j=0;j<5;j++)
		printf("%d ",a[i][j]);
		printf("\n");
			}		
	
	for(i=0;i<=4;i++)
	shifttwo(&a[i][0]);
	
printf("after shifting\n\n");
	for(i=0;i<4;i++)
	{ for(j=0;j<5;j++)
		printf("%d ",a[i][j]);
		printf("\n");
			}	
}
void shifttwo(int *a){
	int x,y;
	x=*(a+4);
	y=*(a+3);
	*(a+4)=*(a+2);
	*(a+3)=*(a+1);
	*(a+2)=*(a+0);
	*(a+1)=x;
	*(a)=y;
}
