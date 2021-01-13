#include<stdio.h>
#include<stdlib.h>
#define size 50

int front=-1;
int rear=-1;
int  s[size];

void dequeue(){
	int ele;
	if(front==-1 || front>rear){
		printf("the queue is empty \n");
	}
	else 
		front++;

}

void enqueue(int ele){
	if(rear==size-1){
		printf("queue overflow \n");
	}
	
		if(front==-1){
			front=0;
		}
			int j;
			j=rear;
		while(s[j]>ele && j>0){
			s[j+1]=s[j];
			j--;
		}
			s[j+1]=ele;
			rear++;
}

void display(){
	int i;
	if(front==-1){
		printf("queue is empty \n");
	}
	else{
		for(i=front;i<=rear;i++){
			printf("%d",s[i]);
		}
	}
}

int main(){
	int ele,ch;

	while(1){

		printf("enter choice \t 1.enqueue \t2.dequeue \t3.display \t4.exit \n");
		scanf("%d",&ch);
		switch(ch){

			case 1: printf("enter the element to be enqueued \n");
					scanf("%d",&ele);
					enqueue(ele);
					break;

			case 2: 
					printf("the element deleted is %d",ele);
					dequeue();
					break;

			case 3:
					display();
					break;

			case 4: exit(0);
		}
	}
}