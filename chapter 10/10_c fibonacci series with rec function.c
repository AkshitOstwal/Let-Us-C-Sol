#include<stdio.h> 
int fibo(int);
main()
{
   int n,i;
   printf("enter no of terms u want in fibonacci series\n");
   scanf("%d",&n);
   printf("\nfibonacci series\n");
   for(i=1;i<=n;i++)
   {
      printf("%d\n",fibo(i));
   }
}
 
int fibo(int n)
{
   if (n==1||n==2)
      return 1;
   else
      return(fibo(n-1)+fibo(n-2));
} 
