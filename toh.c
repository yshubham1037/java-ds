#include<stdio.h>
#include<stdlib.h>
void toh(int n,char s,char d,char t){
	
	if(n==0){
		return;
		}
	
		toh(n-1,s,t,d);
	
	printf("move the disc %dfrom source %c to destination %c \n",n,s,d);

	
	toh(n-1,t,d,s);
}

int main(){
	int num=0;
	
	printf("enter the value of num \n");
	scanf("%d",&num);
	toh(num,'A','B','C');
	
	
}