#include<stdio.h>
#include<stdlib.h>

void push(int ele,int top,int arr[]){
	int MAXSIZE=50;
	if(top==MAXSIZE-1){
		printf("stack overflow, cant push element \n");
	}
	else{
		arr[top]=ele;

		
		
		}
		return;
}
int pop(int arr[],int top){
	if(top==-1){
		printf("stack is empty \n");
	}
	else{
	int del = arr[top];
	top--;
		
		return del;
	}
}

void display(int top,int arr[]){
	int i=0;
	for(i=top;i>=0;i--){
		printf(" %d \n", arr[i]);
	}	
}
int main()
{	int MAXSIZE=50;
	int ch,ele,del,top=-1,arr[MAXSIZE];
	while(1){
	printf("enter your choice : \t 1. push \t 2. pop \t 3. display \t 4. exit");
	scanf("%d",&ch);
	switch(ch){
		case 1 : 
					printf("enter the element to be pushed");
					scanf("%d",&ele);
					top++;
					push(ele,top,arr);

					
					
					
					break;
		case 2 :
					pop(arr,top);
					top--;
					printf("element pooped is %d",del);
					
					
					break;
		case 3 :
					display(top,arr);
					break;
		case 4 : 	
					exit(0);

		default : printf("enter valid number \n");
	}


	}
}