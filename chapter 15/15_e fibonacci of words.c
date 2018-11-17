#include<stdio.h>
#include<string.h>
void main()
{
 char a[100]="a",b[100]="b",temp[100];
 int i,n;
 printf("Enter how many words do you want");
 scanf("%d",&n);
 printf("%s %s",a,b);
 for(i=0;i<n-2;i++)
 {
   strcpy(temp,b);
   strcat(b,a);
   strcpy(a,temp);
   printf(" %s",b);
 }
getch();
}
