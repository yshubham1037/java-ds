#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node*next;
}node;

node*front=NULL;
node*rear=NULL;


 void enqueue(int ele){
 	node*temp;
 	temp=(node*)malloc(sizeof(node*));
 	if(temp==NULL){
 		printf("queue is full\n");
 		return;
	}
	printf("enter the data to be enqueued\n");
	scanf("%d",ele);
	temp->data=ele;
	temp->next=NULL;
	if(front==NULL)
	front=temp;
	else
		
		rear->next=temp;
		rear=temp;
	
 }

int dequeue(){
int ele;
node*temp;
	if(front==NULL){
		printf("queue is empty\n");
		exit(1);
	}
	else{
		temp=front;
		temp->data=ele;
		front=front->next;
		free(temp);
		return ele;
	}


 }

 void display(){
 	node*ptr;
 	ptr=front;
 	while(ptr!=NULL){
 		printf("%d",ptr->data);
 		ptr=ptr->next;
 	}
 }

 
int main()
{
	int choice, ele, l=1;
	while(l)
	{
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Display");
		printf("\nAny other number to Exit");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);

		switch(choice)
		{
		case 1:
		
		enqueue(ele);
		break;
		case 2:
		printf("\nDeleted element is : %d\n",dequeue());
		break;
		case 3:
		display();
		break;

		default:
		l = 0;
		break;
		}
	}
}

 