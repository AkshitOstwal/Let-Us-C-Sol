#include<stdio.h>
#include<conio.h>
int main()
{
int yr,y,days,d,l,n;
printf("enter any year after 2001 ");
scanf("%d",&yr);
y=(yr-1)-2001;
l=y/4;
n=y-l;
days=((l*365)+(n*366));
d=days%7;
if(d==0)
printf("\nmonday");
if(d==1)
printf("\ntuesday");
if(d==2)
printf("\nwednesday");
if(d==3)
printf("\nthrusday");
if(d==4)
printf("\nfriday");
if(d==5)
printf("\nsaturday");
if(d==6)
printf("\nsunday");
getch();
}
