#include<stdio.h>
void askarr(int *a);
void display(int *a,int i);
void bubblesort(int *a,int i);
void insertionsort(int *a,int i);
void selectionsort(int *a,int i);
void main(){
	int arr[10];
	
	printf("values for selection sort\n");
	askarr(&arr);
	printf("the result after the selection sort is \n");
	selectionsort(&arr,10);
	display(&arr,10);
	
	printf("values for bubble sort\n");
	askarr(&arr);
    printf("result after bubble sorting\n");
	bubblesort(&arr,10);
	display(&arr,10);
	
	printf("values for insertion sort\n");
	askarr(&arr);
    printf("result after insertion sorting\n");
	insertionsort(&arr,10);
	display(&arr,10);
}
void selectionsort(int *a,int i){
 int j,tmp,k;
	for (j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(*(a+j)>*(a+k))
			{
				tmp=*(a+j);
				*(a+j)=*(a+k);
				*(a+k)=tmp;
			}
		}
	}
}
void bubblesort(int *a,int i){
	int j,tmp,k,x;
	for (x=i-1;x>0;x--)
	{	for(j=0;j<x;j++)
		{	k=j+1;
			if(*(a+j)>*(a+k))
			{
				tmp=*(a+j);
				*(a+j)=*(a+k);
				*(a+k)=tmp;
			}
		}
		
	}
}
void insertionsort(int *a,int i){
	int j=0,k=0,tmp=0;
	for(j=1;j<=i-1;j++)
	{	k=j;
		while(k>0)
		{	if(*(a+k)<*(a+k-1))
			{
				tmp=*(a+k);
				*(a+k)=*(a+k-1);
				*(a+k-1)=tmp;
			}
			k--;
		}
	}
}
void display(int *a,int i){
	int x;
	for (x=0;x<=i-1;x++)
	{
		printf("%d\n",*a);
		a++;
	}
}
void askarr(int *a){
	int c;
	printf("Enter 10 integers\n");
	for (c=0;c<10;c++)
      scanf("%d",&*(a+c));
}
