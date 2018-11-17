#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(float a, float b, float c);
int main(){
	float a[6][3]={ {137.4,80.9,0.78},
					{155.2,92.62,0.89},
					{149.3,97.93,1.35},
					{160.0,100.25,9.00},
					{155.6,68.95,1.25},
					{149.7,120.0,1.75}	};
	float max=0,arr[6];
	int i,j;
	 for (i=0;i<6;i++)
	 { arr[i]=area(a[i][0],a[i][1],a[i][2]);
	 }	
	for(i=0;i<6;i++)
	{if(max<=arr[i])
		{
		max=arr[i];
		j=i;
		}
	}
	printf("max area =%f\n",max);
	printf("of %f %f %f\n",a[j][0],a[j][1],a[j][2]);
}

float area(float a, float b, float c)
{
	float ar;
	ar=(a*b*sin(c))/2;
	return ar;
}


