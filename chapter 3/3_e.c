#include<stdio.h>
#include<conio.h>
int main()
{
int t,n,rev,rem;
rev=0;
printf("enter any integer\n");
scanf("%d",&n);
t=n;
while(n>0)
{
rem=n%10;
rev=rem;
n=n/10;
printf("%d",rev);
}
if (rev==t)
printf("\nboth r same");
else
printf("\n both r different");
getch();
}
