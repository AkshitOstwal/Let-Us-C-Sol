#include <stdio.h>
int tobinary(int); 
int main()
{
   int num,bin;
   printf("Enter a decimal number: ");
   scanf("%d",&num);
   bin=tobinary(num);
   printf("The binary equivalent of %d is %d\n", num, bin);
}
 
int tobinary(int num)
{
    if (num==0)
    return 0;
    else
    return (num%2)+10*tobinary(num/2);
    
}
