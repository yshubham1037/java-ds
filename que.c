#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

void enqueue(int ele,int q[]){
	
	if(rear==MAXSIZE-1){
		printf("queue is already full \n");
	}
	else{
		if(front==-1)
			front=0;
		
		q[rear]=ele;
		rear++;
		return;

	}
	
}

void dequeue(int q[],int del){
	int front,rear;
	if(front==-1||front>rear){
		printf("quesue is empty, cant dequeue \n");
	}
	else{
		del=q[front];
		front++;
		return;
	}
}

void display(){
    q[];
    int i=0,front,rear;
	for(i=front;i<=rear;i++){
	printf("%d",q[i]);
	}
}

int main(){
int rear=-1,front=-1,ch,ele,del,i;
int q[MAXSIZE];
while(1){
printf("enter your choice: 1.enqueue\t 2.dequeue\t 3.display\t 4.exit\n");
scanf("%d",&ch);
switch(ch){
	
	case 1: 
			printf("enter element to be enqued: \n");
			scanf("%d",&ele);
			enqueue(ele,q);
			break;

	case 2:
			q[front]=del;
			printf("deleted element is %d",del);
			dequeue(q,del);
			break;
	case 3:
			printf("the queue is: \n");
			display();
			break;
	case 4:
			exit(0);
			break;

	}

}







	
}
