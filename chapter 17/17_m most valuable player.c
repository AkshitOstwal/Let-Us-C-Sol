#include<stdio.h>
#include<conio.h>
struct mvp{char name[10];
int m[3];
int tot;
};
struct mvp p[5];

void main(){
	int i;
	for( i=0;i<5;i++){
	printf("enter name of %d player\n",i);
	scanf("%s",p[i].name);
	fflush(stdin);
	printf("enter marks given by 1,2 and 3rd judge to %d player\n",i);
	scanf("%d %d %d",&p[i].m[0],&p[i].m[1],&p[i].m[2]);	
	p[i].tot=(p[i].m[0]+p[i].m[1]+p[i].m[2]);
	}
	int m,n=0;
	for(i=1;i<5;i++)
	{
	if(p[i].tot>=p[i].tot)
	{
	m=p[i].tot;
	n=i;}
	}
printf("the most valuable player is = %d player name=%s total marks=%d",n,p[n].name,p[n].tot);
}

