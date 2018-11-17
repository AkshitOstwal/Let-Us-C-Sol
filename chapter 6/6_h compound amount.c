#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float p,r,n,q,a;
    char y;
    for(y='y';y=='y'||y=='Y';)
    {
        printf("\nenter values of p, r, n, q ");
        scanf("%f%f%f%f",&p,&r,&n,&q);
        a=p*pow((1+(r/q)),n*q);
        printf("\nValue of a is %f\n",a);
        printf("do u want to give another try press Y/y");
        fflush(stdin);
        scanf("%c",&y);
    }
    getch();
}
