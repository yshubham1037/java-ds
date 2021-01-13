#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node*next;
	struct node*prev;
}node;

node*head=NULL;
node*tail=NULL;

node*createnode(node*prev,node*next){
	int data;
	node*ptr=(node*)malloc(sizeof(node));
	printf("enter the data \n");
	scanf("%d",&data);
	ptr->data=data;
	ptr->next=next;
	ptr->prev=prev;
	return ptr;

}

node*search(node*head,int data){
if(head==NULL){
	printf("empty list \n");
	return NULL;
}
	node*sptr=(node*)malloc(sizeof(node));
	sptr=head;
	while(sptr->next!=head){
		if(sptr->data==data)
			return sptr;
		else
			sptr=sptr->next;
	}
	return NULL;
}

node*insertany(node*head){
	int data,pos;

	if(head==NULL){
		node*newnode=createnode(tail,head);
		head=newnode;
		tail=head;
		tail->next=head;
		head->prev=tail;
		return head;
	}
	else if(head!=NULL){
		printf("enter '0' for before and '1' for after \n");
		scanf("%d",&pos);
		printf("the the data whose before/after you want to insert \n");
		scanf("%d",&data);
		node*posptr=search(head,data);
		if(pos==0 && posptr==head){
			node*newnode=createnode(tail,head);
			tail->next=newnode;
            head->prev=newnode;
            head=newnode;

		}
		else if(pos==1 && posptr->next==head){
			node *newnode=createnode(posptr,head);
            posptr->next=newnode;
            tail=newnode;
            head->prev=newnode;
		}
		else if(pos==0 && posptr!=head){
			node *newnode=createnode(posptr->prev,posptr);
            posptr->prev->next=newnode;
            posptr->prev=newnode;
		}
		else if(pos==1 && posptr->next!=head){
			node *newnode=createnode(posptr, posptr->next);
            posptr->next->prev=newnode;
            posptr->next=newnode;
		}
		else
			printf("element doesnt exist \n");

		return head;	
	}	

}

node*delany(node*head){
	 if(head==NULL)
    {
        printf("Empty list \n");
        return head;
    }
    else
    {
        int data;
        printf("Enter data to delete \n");
        scanf("%d",&data);
        node *delptr=searchptr(head, data);
        if(delptr==NULL)
            printf("Data does not exist\n");
        if(delptr==head)
        {
            if(delptr->next==head && delptr->prev==tail)
            {
                printf("Deleting only node in list");
                head=NULL;
                tail=NULL;
                free(delptr);
            }
            else
            {
                head=delptr->next;
                tail->next=head;
                free(delptr);
            }
        }
        else if(delptr->next==head) 
        {
            delptr->prev->next=head;
            tail=delptr->prev;
            head->prev=tail;
            free(delptr);
        }  
        else
        {
            delptr->prev->next=delptr->next;
            delptr->next->prev=delptr->prev;
            free(delptr);
        }
    return head;
    }    
}

void display(){
	node*temp=head;
	while(temp!=NULL){
	 printf("%d",temp->data);
            temp=temp->next;
	}
}

int main(){
	int ch;
	printf("Hello World!\n");
	while(ch!=4)
	{
		printf("Enter choice 1.INSERT 2.DELETE 3.DISPLAY 4.EXIT \n");
		scanf("%d",&ch);
		switch(ch)		
		{
			case 1:
				head=insertany(head);
				break;
			case 2:
				head=delany(head);
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