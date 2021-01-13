 #include<stdio.h>
#include<stdlib.h>

typedef struct bst{
	int data;
	struct bst*left;
	struct bst*right;
}bst;

bst*createbst(bst*root,int ele){
	if(root==NULL){
		bst*root=(bst*)malloc(sizeof(bst));
	  	root->data=ele;
	  	root->left=root->right=NULL;
	  	return root;
	}
	else{
		if(ele>root->data)
			root->right=createbst(root->right,ele);
		else if(root->data>ele)
			root->left=createbst(root->left,ele);
		else
			printf("duplicate item\n");
			return root;

	}
	
}

void preorder(bst*temp){
	if (temp!=NULL){
	printf("%d",temp->data);
	preorder(temp->left);
	preorder(temp->right);
	}
}

void inorder(bst*temp){
	if (temp!=NULL){
	
	inorder(temp->left);
	printf("%d",temp->data);
	inorder(temp->right);
	}

}

void postorder(bst*temp){
	if(temp!=NULL){
	postorder(temp->left);
	
	postorder(temp->right);
	printf("%d",temp->data);
	}
}

int main(){
		int ele,i,n;
		bst*root=NULL;
		printf("enter the total number of nodes \n");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
		printf("enter data for node %d",i);
		scanf("%d",&ele);
		root=createbst(root,ele);
		}
		

		printf("\npreorder traversal is ");
		preorder(root);
		

		printf("\npostorder traversal is ");
		postorder(root);


		printf("\ninorder traversal is \n");
		inorder(root);








	
}
