#include<stdio.h>
#include<conio.h>
struct queue{int data;
struct queue * next;
};
struct queue * head=NULL;
struct queue * tail=NULL;
void add(int x)
{
struct queue * temp=(struct queue *)(malloc(sizeof(struct queue)));
temp->data=x;
temp->next=NULL;
if(head==NULL&&tail==NULL)
{tail=head=temp;
return;
}
tail->next=temp;
tail=temp;
}
void del()
{
struct queue * temp=(struct queue *)(malloc(sizeof(struct queue)));
if(head==NULL)
printf("queue ended\n");
if(head==tail)
head=tail=NULL;
else
{
temp=head;
head=head->next;
printf("%d removed\n",temp->data);
}free(temp);

}
void peek()
{if (head==NULL) printf("\n queue ended\n");
else{
	printf("%d is the first in queue\n",head->data);
}
}
void main()
{
	int x,n,i=0;

	restart:
		i+=1;
	printf("\n");
	printf("\n**********************************\n");
	printf("1   | for insert into queue\n");
	printf("2   | for remove out of queue\n");
	printf("3   | for peek into queue\n");
	printf("any other key for exit\n");
	scanf("%d",&n);
	if (n==1)
	{	printf("enter data\n");
		scanf("%d",&x);
		add(x);
	}
	if(n==2)
	del();
	if(n==3)
	peek();
	if(n<4) 
	goto restart;
}

