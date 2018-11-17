#include<stdio.h>
#include<conio.h>
int main()
{
int x;
printf("enter year ");
scanf("%d ",&x);
if(x%4==0)
printf("leap year"); 
else
printf("not a leap year");
getch();
}
