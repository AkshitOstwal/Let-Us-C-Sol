#include<stdio.h>
#include<conio.h>

struct stack {
	int data;
	struct stack* link;
};
struct stack * top=NULL;

void push(x){
	struct stack *temp=(struct stack *)(malloc(sizeof(struct stack ))) ;
	temp->data=x;
	temp->link=top;
	top=temp;
}
void pop()
{
	struct stack* temp;
	if(top==NULL) printf("stack ended\n");
	else {temp=top;
	top=(top)->link;
	printf("%d is poped out succesfully\n",temp->data);
	free(temp);
}
}

void peek()
{
	if(top==NULL) printf("stack ended\n");
	else printf("\nthe value is %d\n",top->data);
}
void main()
{
	int x,n;
	restart:
	printf("\n");
	printf("\n**********************************\n");
	printf("1   | for push into stack\n");
	printf("2   | for pop out of stack\n");
	printf("3   | for peek into stack\n");
	printf("any other key for exit\n");
	scanf("%d",&n);
	if (n==1)
	{	printf("enter data\n");
		scanf("%d",&x);
		push(x);
	}
	if(n==2)
	pop();
	if(n==3)
	peek();
	if(n<4) 
	goto restart;
}
