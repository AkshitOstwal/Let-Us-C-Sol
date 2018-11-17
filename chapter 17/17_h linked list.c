#include<stdio.h>
#include<stdlib.h>
struct node{ int data; struct node *next; 	};

void main(){
	struct node *head=NULL,*second=NULL,*third=NULL;
	
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	display(head);
}

void display(struct node *n){
	while(n!=NULL)
	{printf(" %d ",n->data);
	n=n->next;
	}
}

