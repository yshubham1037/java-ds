#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define size 100 

int top=-1;
char s[size];

void push(char ele){
	if(top==size-1){
	printf("overflow");
	}
	++top;
	s[top]=ele;
}

char pop(){
	char ele;
	if(top==-1){
		printf("underflow\n");
	}
	ele=s[top];
	top--;
	return ele;	
}

int  priority(char symbol){

	switch(symbol){

		
		case '(':	return 0;
		
		case '+':
		case '-':	return 1;
		
		case '*':
		case '/':	return 2;
		
		case '$':
		case '^':	return 3;
	
	}
}


void inftopost(char infix[],char postfix[]){
	int i,j;
	char symbol;
	while((symbol=infix[i++])!='\0'){
		if(symbol=='(')
			push(symbol);
		else if(isalnum(symbol))
			postfix[j++]=symbol;

		else if(symbol==')'){
			while(s[top]!='(')
				postfix[j++]=pop();
				pop();
		}	
		
		else{

			while(priority(s[top])>priority(symbol))
				postfix[j++]=pop();
				push(symbol);
		}

	}
}






int main(){
char infix[size], postfix[size];
	
	printf("Enter a valid infix expression\n");
	scanf("%s", infix);
	
	inftopost(infix, postfix);
	
	printf("Given Infix expression:\t%s\n", infix);
	printf("Converted Postfix expression:\t%s\n", postfix);




	
}

