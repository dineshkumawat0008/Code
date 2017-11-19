#include<bits/stdc++.h>
#include<stdio.h>
#define CAPACITY 5
using namespace std;
void push(int);
int pop(void);
int peek(void);
void traverse(void);
int isFull(void);
int isEmpty(void);
int stak[CAPACITY],top=-1;

int main(){
	int ch,item;
	while(1){
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peek\n");
		printf("4. traverse\n");
		printf("5. quit\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:
				printf("enter item\n");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				item=pop();
				break;
			case 3:
				item = peek();
				printf("%d\n",item);
				break;
			case 4:
				traverse();
				break;
			case 5:
				exit(0);
			default:
				printf("invalid\n");
		}
	}
}

void push(int item){
	if(isFull()){
		printf("\ntop= %d\n",top);
		printf("Overflow\n");
	}
	else{
		top++;
		stak[top]=item;
		printf("pushed\n");
		printf("\ntop= %d\n",top);
	}
	
}
int isFull(){
	
	if(top==CAPACITY-1)
		return 1;
	else{
		
		return 0;
	}
}

int pop(){
	
	if(isEmpty()){
		printf("Underflow\n");
		printf("\ntop= %d\n",top);
		return 0;
		}
	else{
		printf("poped\n");
		printf("\ntop= %d\n",top);
		return stak[top--];
	}
}

int peek(){
		if(isEmpty()){
		printf("Underflow\n");
		return 0;
		}
	else{
		printf("poped\n");
		return stak[top];
	}
}

int isEmpty(){
	if(top==-1)
		return 1;
	else{
		
		return 0;
	}
}

void traverse(){
	int temp=top;
	while(top>-1){
		printf("\ntop= %d\n",temp);
		printf("\n%d\n",stak[temp--]);
		
	}
	
}