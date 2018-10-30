#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum,rem;
sum=0;
printf("enter any integer\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("\nsum=%d",sum);
getch();
}
