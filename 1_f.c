#include<stdio.h>
#include<conio.h>
int main()
{
float l,b;
int n;
l=1189;
b=841;
for(n=0;n<=8;++n)
{
printf("A%d length=%fmm breath=%fmm\n",n,l,b);
if(l>=b)
l=l/2;
else
b=b/2;
}
getch();
}

