#include<stdio.h>
void main()
{
int a[]={10,20,30,40,50,60},i,tmp;
for(i=0;i<5;i=i+2)
{
tmp=a[i];
a[i]=a[i+1];
a[i+1]=tmp;

}

for(i=0;i<=5;i++)
{
printf("%d ",a[i]);
}
}
