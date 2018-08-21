#include<stdio.h>
#include<conio.h>
int main()
{
float l,b,r,arr,arc,pr,cc;
printf("enter l,b,r ");
scanf("%f %f %f",&l,&b,&r);
arr=l*b;
arc=22/7*r*r;
pr=2*(l+b);
cc=2*22/7*r;
printf("ar. of rect=%f area of cir=%f perimeter of rect=%f circumfrence of cir=%f",arr,arc,pr,cc);
getch();
}

