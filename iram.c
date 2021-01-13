#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}node;

node *top = NULL;

int isEmpty()
{
	if(top == NULL)
		return 1;
	else
		return 0;
}


void push(int ele)
{
	node *tmp;
	tmp=(node *)malloc(sizeof(node));
	if(tmp==NULL)
	{
		printf("\nStack Overflow\n");
		return;
	}
	tmp->info=ele;
	tmp->next=top;
	top=tmp;
}

int pop()
{
	node *tmp;
	int ele;
	if( isEmpty() )
	{
		printf("\nStack Underflow\n");
		exit(1);
	}
	tmp=top;
	ele=tmp->info;
	top=tmp->next;
	free(tmp);
	return ele;
}


void display()
{
	node *ptr;
	ptr=top;
	if(isEmpty())
	{
		printf("\nStack is empty\n");
		return;
	}
	printf("\nStack elements : ");
	while(ptr!=NULL)
	{
		printf(" %d\t",ptr->info);
		ptr=ptr->next;
	}
	printf("\n");
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
		printf("\nEnter the element to be pushed : ");
		scanf("%d",&ele);
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
