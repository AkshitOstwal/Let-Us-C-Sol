// reversing a number
#include<stdio.h>
#include<conio.h>
int main()
{
  clrscr();
int n,rev,rem;
rev=0;
printf("enter any integer\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=rem;
n=n/10;
printf("%d",rev);
}

getch();
}
