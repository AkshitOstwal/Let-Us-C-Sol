#include<stdio.h>
#include<math.h>
#include<conio.h>
main(){
	int i;
	float sd=0,mean=0,tot=0,a[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2} ;
	for(i=0;i<15;i++)
	{
		tot=tot+a[i];
	}
	mean=tot/15;
	for(i=0;i<15;i++)
	{
		sd=sd+pow(a[i]-mean,2);
	}
	printf("mean = %f\n",mean);
	printf("standard deviation = %f\n",sqrt(sd/10));
}
