#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define SIZE 10

int stack[SIZE];
int top=-1;

void push(int ele){

		top++;
		stack[top]=ele;

	
}

int pop(){
	
		int ele=stack[top];
		top--;
		return ele;
}

int main(){
	int i=0,num,res;
	char postfix[i],ch,op1,op2;
	
	printf("enter the postfix expn\n");
	gets(postfix);

	while(postfix[i]!='\0'){
	ch=postfix[i];
	if(isalpha(ch)){
		printf("enter the number\n");
		scanf("%d",&num);
		push(num);
	}
	else{
	op1=pop();
	op2=pop();

	}
	switch(ch){
		case '+': res=op1+op2;
			push(res);
			break;
		case '-': res=op1-op2;
			push(res);
			break;
		case '*': res=op1*op2;
			push(res);
			break;
		case '/': res=op1/op2;
			push(res);
			break;
	}
	i++;

	}
	
	printf("%d",stack[top]);

}