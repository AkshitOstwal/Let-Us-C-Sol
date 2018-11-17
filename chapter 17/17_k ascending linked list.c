#include<stdio.h>
#include<conio.h>

struct list { int data;
struct list * next;
};
typedef struct list list;
list * head=NULL;
list * search=NULL;

void insert(int x){
list * temp=(list *)(malloc(sizeof(list)));
search=head;
if(head==NULL)
{temp->data=x;
temp->next=NULL;
head=temp;
}
else{
	while(((search->data)<=x)&&((search->next)!=NULL)&&( ((search->next)->data)<=x))
	{
		search=search->next;
	}
	temp->data=x;
	temp->next=(search->next);
	search->next=temp;
}
}

void show(){
search=head;
printf("the list is as follow\n");
do
{
	printf("%d\t",search->data);
	search=search->next;
}
while((search)!=NULL);
}

void main(){
	int x,n;

	restart:
	printf("\n");
	printf("\n**********************************\n");
	printf("1   | for insert into list\n");
	printf("2   | to print list\n");
	printf("any other key for exit\n");
	scanf("%d",&n);
	if (n==1)
	{	printf("enter data\n");
		scanf("%d",&x);
		insert(x);
	}
	if(n==2)
	show();
	if(n<3) 
	goto restart;
}
