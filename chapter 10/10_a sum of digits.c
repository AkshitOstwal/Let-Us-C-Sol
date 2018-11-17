#include<stdio.h>
int sumofdgt(int);
int sumofdgtrec(int);
main(){
	int x,sum;
	printf("enter a 5 digit no to find sum of");
	scanf("%d",&x);
	sum=sumofdgt(x);
	printf("\nnon recursive sum=%d",sum);
	sum=sumofdgtrec(x);
	printf("\nsum of digit in recursive function =%d",sum);
}	

int sumofdgt(int x){
	int sum=0,i,rem;
	for(i=1;i<=5;i++)
	{ 
    	rem=x%10;
        x=x/10;
		sum=sum+rem;	
	}
	return (sum);
}

int sumofdgtrec(int x){
	int sum,i,rem;
	
	if(x==0)
	return 0;
	else
	{rem=x%10;
	x=x/10;
	sum=sumofdgtrec(x)+rem;
	return (sum);
	}
}
