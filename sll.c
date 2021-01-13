#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node*next;
}node;

node*head=NULL;

node*createNode(node*next){
	int data;
	node*ptr=(node*)malloc(sizeof(node));
	printf("enter the data \n");
	scanf("%d",&data);
	ptr->data=data;
	ptr->next=next;
	return ptr;
	
}


node*insertEnd(node*head){
node*temp=head;
int data;
while(temp->next!=NULL){
	temp=temp->next;
}
node*newnode=createNode(NULL);
temp->next=newnode;
return head;

}


node*insertBegin(node*head){
node*newnode=createNode(head);
if(head==NULL)
printf("first node");
head=newnode;
return head;
}



node*searchPointer(node*head,int data){
node*sptr=head;
while(sptr->next!=NULL){
if(data==sptr->data){
	return sptr;
}
else
sptr=sptr->next;
}
	return NULL;
}



node*insertAny(node*head){
	int pos,data;
	if(head==NULL){
	head=insertBegin(head);
	}
	else if(head!=NULL){
		printf("enter the position you want to insert after/before \n");
		scanf("%d",&data);
		printf("enter '0' if you want to insert before and '1' if you want to insert after \n ");
		scanf("%d",&pos);
		node*posptr;
		posptr=searchPointer(head,data);
		if(posptr!=NULL){
			if(pos==0&&posptr==head){
				head=insertBegin(head);
			}
			else if(pos==1&&posptr->next==NULL){
				head=insertEnd(head);
			}
			else if(pos==0 && posptr!=head){
				node*beforeptr=head;
				while(beforeptr->next!=posptr){
					beforeptr=beforeptr->next;
					node*newnode=createNode(posptr);
					beforeptr->next=newnode;
				}
			}
			else if(pos==1 && posptr->next!=NULL){
				node*newnode=createNode(posptr->next);
				posptr->next=newnode;
			
			}
		}
	}
	return head;
}

node*delAny(node*head){
int data;
	printf("enter the data to be deleted \n");
	scanf("%d",&data);
	node*delptr=searchPointer(head,data);
	if(delptr==NULL)
	printf("node doesnt exist\n");
	else{
		if(delptr==head){
			head=delptr->next;
			free(delptr);
		}
		else if(delptr->next==NULL){
			node*beforeptr=head;
			while(beforeptr->next!=delptr)
			beforeptr=beforeptr->next;
			beforeptr->next=NULL;
			free(delptr);
			
		}
		else{
			node*beforeptr=head;
			while (beforeptr->next!=delptr)
			beforeptr->next=beforeptr;
			beforeptr->next=delptr->next;
			free(delptr);

		}


	}
	return head;


}

void display(){
	node*ptr=head;
	while(ptr->next!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}

int main(){
	int ch;
	while(ch!=4){
	printf("enter your choice 1.insert 2. delete 3.display 4.exit \n");
	scanf("%d",&ch);
	switch(ch){
		case 1 : 
				head=insertAny(head);
				break;
		case 2:
				head=delAny(head);
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

}
