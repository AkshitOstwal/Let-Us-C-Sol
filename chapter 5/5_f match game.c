#include<stdio.h>
#include<conio.h>
int main()
{
	int c,p,s,l;
	printf("game rules : \n1.there are 21 matchsticks\n2.you an pick upto 4 matchsticks at a time\n3.after you computer does the picking\n4.whoever is forced to pick last one loses\n");
	p=c=0;
	l=21;
	for(s=21;s>=1;s=s-p-c)
	{
		printf("you enterd %d\tcomputer enterd %d\t left matchsticks %d",p,c,l);
		printf("\nenter your choice(1-4)\n");
		scanf("%d",&p);
		while(p>4||p==0)
		{
			printf("\ninvalid choice ,choose btw 1-4\n");
			scanf("%d",&p);
		}
		c=5-p;
		l=s-p-c;
	}
	
	printf("you lose !!!!!");
getch();
}
