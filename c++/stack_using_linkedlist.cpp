#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void push(void);
void pop(void);
bool isEmpty(void);
void traverse(void);
struct stak{
	int data;
	struct stak* link;
};
struct stak* top=NULL;
int main(){
	int item,choice;
	while(1){
		cout<<"1.insert"<<endl;
		cout<<"2.remove"<<endl;
		cout<<"3.traverse"<<endl;
		cin>>choice;
		switch(choice){
			case 1:push();break;
			case 2:pop();break;
			case 3:traverse();break;
			default:exit(1);
		}
	}
	
}

void push(){
	int item;
	struct stak* temp;
	cout<<"enter intem"<<endl;
	cin>>item;
	temp = (struct stak*)malloc(sizeof(struct stak));
	temp->data=item;
	temp->link=NULL;
	if(isEmpty()){
		top=temp;
	}else{
		temp->link=top;
		top=temp;
	}
}

bool isEmpty(){
	if(top==NULL)
		return true;
	return false;
}

void pop(){
	if(isEmpty()){
		cout<<"no element in stak"<<endl;
	}
	else{
		struct stak* temp;
		temp=top;
		cout<<temp->data<<endl;
		top=top->link;
		temp->link=NULL;
		free(temp);
	}
}
void traverse(){
	struct stak* curr;
	curr=top;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->link;
	}
}





