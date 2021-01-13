#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;	

node *head=NULL;

node * createnewnode(node* next)
{
	int data;
	node *ptr= (node*)malloc(sizeof(node*));
	printf("Enter data ");
	scanf("%d",&data);
	ptr->data=data;
	ptr->next=next;
	return ptr;
}

node *insertBeg(node *head)
{
	node *newnode=createnewnode(head);
	if(head==NULL)
		printf("First element inserted \n");
	head=newnode;
	return head;
}

node *insertEnd(node *head)
{
	node *temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	node *newnode=createnewnode(NULL);
	temp->next=newnode;	
	return head;
}

node *searchptr(node *head, int data)
{
	node *sptr=head;
	while(sptr!=NULL)
	{
		if(data==sptr->data)
			return sptr;
		else
			sptr=sptr->next;
	}
	return NULL;

}

node *insertAny(node *head)
{
	int pos,data;
	if(head==NULL)
		head=insertBeg(head);
	else if(head!=NULL)
	{	
		printf("Enter 0 for before and 1 for after");
       		scanf("%d",&pos);
		printf("Enter data you want to insert after/before ");
		scanf("%d",&data);
		node *postptr;
		postptr=searchptr(head,data);
		if(postptr!=NULL)
		{
			if(pos==0 && postptr==head)
				head=insertBeg(head);
			else if(pos==1 && postptr->next==NULL)
				head=insertEnd(head);
			else if(pos==0 && postptr!=head)
			{
				node *beforeptr=head;
				while(beforeptr->next!=postptr)
					beforeptr=beforeptr->next;
				node *newnode=createnewnode(postptr);
				beforeptr->next=newnode;
			}
			else if(pos==1 && postptr->next!=NULL)
			{
				node *newnode=createnewnode(postptr->next);
				postptr->next=newnode;
			}
		}
	}
	return head;	
}

node *deleteAny(node *head)
{
	printf("Enter data to be deleted \n");
	int data;
	scanf("%d",&data);
	node *delptr=searchptr(head,data);
	if(delptr==NULL)
	{
		printf("Data does not exist \n");
		return head;
	}
	else
	{
		if(delptr==head)
		{
			head=delptr->next;
			free(delptr);
		}
		else if(delptr->next==NULL)
		{
			node *beforeptr=head;
			while(beforeptr->next!=delptr)
				beforeptr=beforeptr->next;
			beforeptr->next=NULL;
			free(delptr);
		}
		else
		{
			node *beforeptr=head;
			while(beforeptr->next!=delptr)
				beforeptr=beforeptr->next;
			beforeptr->next=delptr->next;
			free(delptr);
		}
		return head;
	}
}

void display()
{
	node *ptr=head;
	if(ptr==NULL)
	{
		printf("Empty list \n");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

int main()
{
	int ch;
	printf("Hello World!\n");
	while(ch!=4)
	{
		printf("Enter choice 1.INSERT 2.DELETE 3.DISPLAY 4.EXIT \n");
		scanf("%d",&ch);
		switch(ch)		
		{
			case 1:
				head=insertAny(head);
				break;
			case 2:
				head=deleteAny(head);
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Invalid choice. Enter again \n");
	
		}
	}	
	return 0;
}
