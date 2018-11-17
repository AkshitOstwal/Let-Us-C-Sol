#include<stdio.h>
#include<conio.h>
#include <string.h>
#include<malloc.h>

void main()
{
    int i,j,n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    char name[n][40],temp[40];
    printf("Enter %d names n",n);
    for (i=0;i<n;i++) 
    {
        scanf("%s",name[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
		{
		    if (strcmp(name[i],name[j])>0) 
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
	}
    printf("Sorted names\n");
	for (i=0;i<n;i++) 
    {
	    printf("%s\n",name[i]);
    }
}
