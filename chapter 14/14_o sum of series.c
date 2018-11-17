#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() 
{
float a[][2]={ {34.22,102.43},
 {39.87,100.93},
 {41.85,97.43},
 {43.23,97.81},
 {40.06,98.32},
 {53.29,98.32},
 {53.29,100.07},
 {54.14,97.08},
 {49.12,91.59},
 {40.71,94.85},
 {55.15,94.65} };
int i,n=0;
float x2,y2,x,y,x_y,n_x2,n_y2,r;
for(i=0;i<11;i++) 
{
     x2=x2+(a[i][0]*a[i][0] );  
     y2=y2+(a[i][1]*a[i][1]);  
     x= x+a[i][0];       
     y= y+a[i][1];
     x_y=x_y+(a[i][0]*a[i][1]); 
     n++;
}
n_x2=n*x2;
n_y2=n*y2;
r=(x_y-x*y)/sqrt((n_x2-x2)*(n_y2-y2));
printf("sum of square of x = %f\n",x2);
printf("sum of square of y = %f\n",y2);
printf("sum of x = %f\n",x);
printf("sum of y = %f\n",y);
printf("sum of x * y = %f\n",x_y);
printf("sum of n*x2  = %f\n",n_x2);
printf("sum of n*y2  = %f\n",n_y2);
printf("Correlation coefficient = %f\n",r);
getch();
}


