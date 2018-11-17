#include<stdio.h>
void main(){
	int i,j,*n,least;
	int arr[]={10,12,13,14,1,9,3,45,32,112};
	n=&arr[0];
	for (i=0;i<=9;i++)
	{
		if(least>=*(n+i))
		least=*(n+i);		
	}
	printf("%d",least);
}
