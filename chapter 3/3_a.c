#include<stdio.h>
#include<conio.h>

int main()
{
int cp,sp;
printf("enter cost price, sell price");
scanf("%d %d",&cp,&sp);
if (sp>cp)
printf("profit of rs ");
else printf("loss of rs ");

printf("%d",sp-cp);
getch();
}
