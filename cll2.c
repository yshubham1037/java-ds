#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
    struct node * prev;
}node;

node *head=NULL;
node *tail=NULL;

node *createnew(node* prev, node *next)
{
    node *ptr=(node*)malloc(sizeof(node*));
    printf("Enter data of node\n");
    scanf("%d",&ptr->data);
    ptr->next=next;
    ptr->prev=prev;
    return ptr;
}

node *searchptr(node* head, int data)
{
    node *temp=head;
    if(head==NULL)
    {
        printf("Empty list\n");
        return NULL;
    }
    else
    {
        do
        {
            if(temp->data==data)
                return temp;
            else
                temp=temp->next;
        }while (temp->next!=head);
        return NULL;
    }
}
node *insertAny(node* head)
{
    if(head==NULL)
    {
        printf("First element \n");
        node *newnode=createnew(head,tail);
        head=newnode;
        tail=head;
        tail->next=head;
        head->prev=tail;
        return head;
    }
    else if(head!=NULL)
    {
        printf("Enter 0 for before and 1 for after\n");
        int pos,key;
        scanf("%d",&pos);
        printf("Enter data after or before to be inserted \n");
        scanf("%d",&key);
        node *posptr=searchptr(head,key);
        if(pos==0 && posptr==head)
        {
            node *newnode=createnew(tail,head);
            tail->next=newnode;
            head->prev=newnode;
            head=newnode;
        }
        else if(pos==1 && posptr->next==head)
        {
            node *newnode=createnew(posptr,head);
            posptr->next=newnode;
            tail=newnode;
            head->prev=newnode;
        }
        else if(pos==1 && posptr->next!=head)
        {
            node *newnode=createnew(posptr, posptr->next);
            posptr->next->prev=newnode;
            posptr->next=newnode;
        }
        else if(pos==0 && posptr!=head)
        {
            node *newnode=createnew(posptr->prev,posptr);
            posptr->prev->next=newnode;
            posptr->prev=newnode;
        }
        else
            printf("The roll doesn't exist in list\n");
        return head;
    }
}

node *deleteAny(node *head)
{
    
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

void display()
{
    node *temp=head;
    if(head==NULL)
        printf("Empty list \n");
    else
    {
        do
        {
            printf("%d",temp->data);
            temp=temp->next;
        } while (temp!=head);
        
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
