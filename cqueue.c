#include<stdio.h>
#include<stdlib.h>
#define size 30

int front=-1,rear=-1,ele;
int q[size];

void enqueue(int ele){
	
	if((rear==size-1 && front==0) || (front==rear+1))
		printf("overflow\n");
	
		
		if(front==-1)
				front=rear=0;
		else{
			if(rear==size-1)
				rear=0;
			else
				++rear;
		}


		
		q[rear]=ele;
		
	
}

void dequeue(){
	if(front==-1 && rear==-1)
		printf("queue is empty \n");
		else{
			int del = q[front];
			printf("deleted element is %d",del);
			front++;
		}
}

void display(){
		if(front==-1){
		printf("empty queue \n");
		}	
		else{
			int i;
			if(front<=rear){
				for(i=front;i<=rear;i++){
					printf("%d",q[i]);
				}
				
			}
			else 
				for(i=0;i<=rear;i++){
					printf("%d",q[i]);
				}
		}
}

int main(){
	
    int ch;
    do
    {
        printf("\n 1.ENQUEUE 2.DEQUEUE 3.DISPLAY 0.EXIT \n Enter choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                printf("enter the data to be enqued \n");
				scanf("%d",&ele);
                enqueue(ele);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(0);
            default:
                printf("Choice does not exist \n");
        }
    } while (ch!=0);
    

    return 0;
}

