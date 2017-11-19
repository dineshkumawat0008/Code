#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
}*head;

void insert(int data);
void print(node*);
void revprint(node*);
void reverse(node*);

int main(){
	
	int option,data;
	while(1){
		cout<<"1. insert node"<<endl;
		cout<<"2. print"<<endl;
		cout<<"3. reverse print"<<endl;
		cout<<"4 revrse the list"<<endl;
		cout<<"5 head"<<endl;
		cin>>option;
		
		switch(option){
			case 1:
				cout<<"enter the data"<<endl;
				cin>>data;
				insert(data);
				break;
			
			case 2:
				print(head);
				break;
			
			case 3:
				revprint(head);
				break;
			
			case 4:
				reverse(head);
				break;
			
			case 5:
				cout<<head->data<<endl;
				break;
				
			default:
				exit(1);
		}
	}
	
}

void insert(int data){
	
	if(head==NULL){
		head=new node();
		head->data=data;
		head->next=NULL;
	}
	else{
		node* temp = new node();
		temp->data=data;
		temp->next=NULL;
		node* trav;
		trav=head;
		while(trav->next!=NULL){
			trav=trav->next;
		}
		trav->next=temp;
		
	}
}

void print(node* temp){
	
	if(temp==NULL){
		return;
	}
	cout<<temp->data<<" ";
	print(temp->next);

}
void revprint(node* temp){
	if(temp==NULL){
		return;
	}
	revprint(temp->next);
	cout<<temp->data<<" ";
	
}

void reverse(node* temp){
	
	
	if(temp->next==NULL){
		head=temp;
		return;
	}
	reverse(temp->next);
	temp->next->next=temp;
	temp->next=NULL;
}
