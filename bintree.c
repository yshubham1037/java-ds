#include<stdio.h>
#include<stdlib.h>

typedef struct bintree{
	int data;
	struct bintree*left;
	struct bintree*right;
}bintree;

bintree*root=NULL;

bintree*createtree(){
	int ele;
	
	printf("enter data(-1 for no data)");
	scanf("%d",&ele);
	if(ele==-1)
			return NULL;
	bintree*ptr=(bintree*)malloc(sizeof(bintree));
	ptr->data=ele;

	printf("enter the left node data of  %d",ele);
	ptr->left=createtree();
	printf("enter the right node data of %d",ele);
	ptr->right=createtree();
	return ptr;
}
void preorder(bintree*temp){
	if(temp!=NULL){
	printf("%d",temp->data);
	preorder(temp->left);
	preorder(temp->right);
	}
	
}

void postorder(bintree*temp){
	if(temp!=NULL){
	postorder(temp->left);
	postorder(temp->right);
	printf("%d",temp->data);
	}
}

void inorder(bintree*temp){
	if(temp!=NULL){
	inorder(temp->left);
	printf("%d",temp->data);
	inorder(temp->right);
	}
}

int main(){
	int ch;
	root=createtree();
	printf("preorder traversaal is\n");
	preorder(root);
	printf("\nThe postorder traversal of tree is:\n");
    postorder(root);
    printf("\nThe inorder traversal of tree is:\n");
    inorder(root);
    printf("\n");
    return 0;
}



