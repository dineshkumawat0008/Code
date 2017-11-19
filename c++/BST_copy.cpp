#include<bits/stdc++.h>
using namespace std;

struct bst{
	int data;
	struct bst* left;
	struct bst* right;
};

struct bst* root=NULL;

int minLeafRemove(struct bst* root){
	struct bst* parent;
	struct bst* current;
	current=root;
	parent=root;
	while(current->left!=NULL){
		parent=current;
		current=current->left;
	}
	int element=current->data;
	parent->left=NULL;
	free(current);
	return element;
	
}

void insert(){
	int data;
	cout<<"enter data"<<endl;
	cin>>data;
	struct bst* temp;
	temp=(struct bst*)malloc(sizeof(struct bst));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		struct bst* parent;
		struct bst* current;
		current = root;
		parent=root;
		while(current!=NULL){
			parent=current;
			if(data<current->data){
				current=current->left;
			}
			else{
				current=current->right;
			}
		}
		if(data<parent->data){
			parent->left=temp;
		}
		else{
			parent->right=temp;
		}
	}
	cout<<"data inserted"<<endl;
}

void delet(){
	int data;
	cout<<"enter data"<<endl;
	cin>>data;
	struct bst* parent;
	struct bst* current;
    current=root;
	parent=root;
	while(current->data!=data){
		parent=current;
		if(data<current->data){
			current=current->left;
		}
		else{
		current=current->right;	
		}
	}
	
	// if leaf node
	if(current->left==NULL && current->right==NULL){
		if(parent->left==current){
			parent->left=NULL;
			free(current);
		}
		else{
			parent->right=NULL;
			free(current);
		}
	}
	// node that has only one child
	else if((current->left==NULL && current->right!=NULL) || (current->left!=NULL && current->right==NULL)){
		struct bst* temp;
		if(current->left!=NULL){
			temp=current->left;
			current->data=temp->data;
			current->left=NULL;
			free(temp);
		}
		else{
			temp=current->right;
			current->data=temp->data;
			current->right=NULL;
			free(temp);		}
	}
	
	//node that has two child
	else{
		int element=minLeafRemove(current->right);
		current->data=element;
	}
	
}

void traverse(struct bst* root){
	if(root){
	traverse(root->left);
	cout<<root->data<<" ";
	traverse(root->right);
}
}



int main(){
	while(1){
		
		int choice;
		cout<<endl<<"1. insert"<<endl;
		cout<<"2. delete"<<endl;
		cout<<"3. traverse"<<endl;
		cout<<"4. exit"<<endl;
		cin>>choice;
		
		switch(choice){
			
			case 1:
				insert();break;
			case 2:
				delet();break;
			case 3:
				traverse(root);break;
			case 4:
				exit(1);
		}
		
	}
}
