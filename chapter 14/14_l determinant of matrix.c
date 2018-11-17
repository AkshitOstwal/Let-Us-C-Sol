#include<stdio.h>
#include<conio.h>

main ()
{
	int res=0,i,j,a[6][6];
	printf("enter values\n");
	for(i=0;i<=5;i++)
	for(j=0;j<=5;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("the enterd matrix is\n");
	for(i=0;i<6;i++)
	{for(j=0;j<6;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
	}
	 res = det(a,6);
    printf("%d",res);
}


int det(int A[6][6], int n)
{
    int Minor[6][6];
    int i,j,k,c1,c2;
    int d=0;
    int c[6];
    int O=1;
    if(n==2)
    {
        d=0;
        d=A[0][0]*A[1][1]-A[0][1]*A[1][0];
        return d;
    }
    else
    {
        for(i = 0 ; i < n ; i++)
        {
            c1 = 0, c2 = 0;
            for(j = 0 ; j < n ; j++)
            {
                for(k = 0 ; k < n ; k++)
                {
                    if(j != 0 && k != i)
                    {
                        Minor[c1][c2] = A[j][k];
                        c2++;
                        if(c2>n-2)
                        {
                            c1++;
                            c2=0;
                        }
                    }
                }
            }
            d=d+O*(A[0][i]*det(Minor,n-1));
            O=-1*O;
        }
    }
    return d;
}
