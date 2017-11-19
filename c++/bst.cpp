#include<bits/stdc++.h>
using namespace std;

struct bst_node{
	int data;
	struct bst_node* left;
	struct bst_node* right;
};
struct bst_node* root=NULL;
int countt=0;

void insert(void);
void preOrder(struct bst_node*);
void inOrder(struct bst_node*);
void postOrder(struct bst_node*);
void remove(void);
void search(void);
int max(struct bst_node*);
int min(struct bst_node*,int);
void count(struct bst_node*);
void deleteNode(struct bst_node*,int);
int main(){
	int choice,key,a,b;
	while(1){
		cout<<"1.insert"<<endl;
		cout<<"2.delete"<<endl;
		cout<<"3.traverse"<<endl;
		cout<<"4.search"<<endl;
		cout<<"5.max"<<endl;
		cout<<"6.min"<<endl;
		cout<<"7.no of nodes"<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:insert();break;
			case 2:remove();break;
			case 3:cout<<"PREORDER"<<endl;preOrder(root);
					cout<<"INORDER"<<endl;inOrder(root);
					cout<<"POSTORDER"<<endl;postOrder(root);
					break;
			case 4:search();break;
			case 5:a=max(root);cout<<a<<endl;break;
			case 6:b=min(root,0);cout<<b<<endl;break;
			case 7:count(root);cout<<countt<<endl;countt=0;break;
			case 8:cout<<"enter key"<<endl;cin>>key;
			       deleteNode(root,key);break;
			default:exit(1);
		}
	}
	
}

void insert(){
	int data;
	struct bst_node* temp;
	struct bst_node* parent;
	struct bst_node* curr;
	temp = (struct bst_node*)malloc(sizeof(struct bst_node));
	cout<<"Enter data"<<endl;
	cin>>data;
	temp->data=data;
	temp->left=temp->right=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		parent=root;
		curr=root;
		while(curr!=NULL){
			parent=curr;
			if(curr->data>data)
				curr=curr->left;
			else{
				curr=curr->right;
			}
		}
		if(parent->data>data)
			parent->left=temp;
		else{
			parent->right=temp;
		}
	}
}

void preOrder(struct bst_node* root){
	
	if(root){
		cout<<root->data<<endl;
		preOrder(root->left);
		preOrder(root->right);
	}
}

void inOrder(struct bst_node* root){
	
	if(root){
		
		inOrder(root->left);
		cout<<root->data<<endl;
		inOrder(root->right);
	}
}

void postOrder(struct bst_node* root){
	
	if(root){
		
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<endl;
	}
}
void remove(){
	cout<<"under construction"<<endl;
}
void search(){
	int item;
	bool flag=false;
	struct bst_node* curr;
	curr=root;
		cout<<"enter element"<<endl;
		cin>>item;
		while(curr!=NULL){
			if(curr->data==item){
				flag=true;
				break;
				}
			else if(item>curr->data){
				curr=curr->right;
			}
			else{
				curr=curr->left;
			}
		}
		if(flag){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
}

int max(struct bst_node* curr){
	//struct bst_node* curr;
	//curr=root;
	while(curr->right!=NULL){
		curr=curr->right;
	}
	//cout<<curr->data<<endl;
	return curr->data;
}

int min(struct bst_node* curr,int del){
	struct bst_node* parent;
	parent=curr;
	while(curr->left!=NULL){
		parent=curr;
		curr=curr->left;
	}
	int data=curr->data;
	if(del=1){
		parent->left=NULL;
		free(curr);
	}
	//cout<<curr->data<<endl;
	return data;
}

void count(struct bst_node* root){
	
	if(root){
		countt++;
		count(root->left);
		count(root->right);
	}
	//cout<<countt<<endl;
	//countt=0;
}

void deleteNode(struct bst_node* curr,int key){
	
	struct bst_node* parent;

	while(curr->data!=key){
		parent=curr;
		if(key<curr->data)
			curr=curr->left;
		curr=curr->right;
	}
	
	if(curr->left==NULL && curr->right==NULL){
		if(parent->left==NULL){
			parent->right=NULL;
			free(curr);
		}
		else if(parent->right==NULL){
			parent->left=NULL;
			free(curr);
		}
	}
	else if((curr->left==NULL && curr->right!=NULL) || (curr->left!=NULL && curr->right==NULL)){
		struct bst_node* temp;
		if(curr->left!=NULL && curr->right==NULL){
			temp=curr->left;
			curr->data=temp->data;
			curr->left=NULL;
			free(temp);
		}
		if(curr->left==NULL && curr->right!=NULL){
			temp=curr->right;
			curr->data=temp->data;
			curr->right=NULL;
			free(temp);
		}
	}
	else{
		struct bst_node* temp;
		temp=curr->right;
		int del=1;
		int data=min(temp,del);
		curr->data=data;
		
	}
	
}



