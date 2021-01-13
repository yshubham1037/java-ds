#include<stdio.h>
#include<stdlib.h>
int arr[],top=-1,MAXSIZE,ele,del
void push(){
	if(top==MAXSIZE-1){
		printf("stack overflow, cant push element \n");
	}
	else{
		ele=arr[top];
		top++;
	}
}
void pop(int del){
	del = arr[top];
	top--;
	printd("the element %d is deleted from the stack",del);
}

void display(){
	for(i=top;i>=0;i--){
		printf("the stack is:", arr[i]);
	}	
}

int main()
{
	int ch,ele,del
	printf("enter your choice : \t 1. push \t 2. pop \t 3. display \t 4. exit");
	scanf("%d",&ch);
	switch(ch){
		case 1 : 
					printf("enter the element to be pushed");
					scanf("%d",&ele);
					push(ele);
					break;
		case 2 :
					pop(del);
					break;
		case 3 :
					display();
					break;
		case 4 : 	
					exit(0);

		default  printf("enter valid number \n");


	}
}