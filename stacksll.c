#include<stdio.h>
#include<stdio.h>

typedef struct node{
	int data;
	int *next;
}node;
node*top=NULL;

void push(int ele){
	node*temp=(node*)malloc(sizeof(node*));
	if(temp==0){
	printf("stack overflow \n");
	}
	else{
		printf("enter the value to be pushed\n");
		scanf("%d",&ele);
		temp->data=ele;
		temp->next=top;
		top=temp;
	}
int pop(){
	node*temp;
	if(top==NULL){
	printf("stack underflow\n");
	}
	else{
		

		

	}
	
}
}