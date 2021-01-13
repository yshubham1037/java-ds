#include<stdlib.h>
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
}
int pop(){
	node*temp;
	int ele;
	if(top==NULL){
	printf("stack underflow\n");
	}
	else{
		temp=top;
		top=top->next;
		free(temp);
		temp->data=ele;
		return ele;
	}

}
void display(){
node*ptr;
ptr=top;
while(ptr!=NULL){
	printf("%d",ptr->data);
	ptr=ptr->next;
}
}

int main()
{
	int ch, ele, l = 1;
	while(l)
	{
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\nAny other number to Exit");
		printf("\nEnter your choice : ") ;
		scanf("%d", &ch);

		switch(ch)
		{
		case 1:
		push(ele);
		break;

		case 2:
		ele=pop();
		printf("\nPopped element is : %d\n",ele);
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

	


