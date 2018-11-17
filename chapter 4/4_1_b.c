#include<stdio.h>
#include<conio.h>
int main()
{
char x;
x=0;
printf("enter character ");
scanf("%c",&x);
if(x>=65&&x<=90)
printf("a capital");
if(x>=97&&x<=122)
printf("a lower char");
if(x>=48&&x<=57)
printf("a number"); 
if(x<=47||(x>=58&&x<=64)||(x>=91&&x<=96)||(x>=123&&x<=127))
printf("special char.");
getch();
}

