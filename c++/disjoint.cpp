#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	int rank;
	Node* parent;
};

map <int, Node*> m; 
 
void makeSet(int data){
	Node* node = new Node();
	node->data=data;
	node->rank=0;
	node->parent=node;
	m.insert(pair <int, Node*> (data, node));
}

Node* findSet(Node* node){
	Node* parent=node->parent;
	if(parent==node){
		return parent;
	}
	node->parent=findSet(node->parent);
	return node->parent;
}

void unionn(int data1,int data2){
	Node* parent1 = findSet(m.find(data1)->second);
	Node* parent2 = findSet(m.find(data2)->second);
	
	if(parent1==parent2){
		return;
	}
	else{
		if(parent1->rank>=parent2->rank){
			parent1->rank=(parent1->rank==parent2->rank)?parent1->rank+1:parent1->rank;
			parent2->parent=parent1;
		}
		else{
			parent1->parent=parent2;
		}
	}
}

int find(int data){
	return findSet(m.find(data)->second)->data;
}

int main(){
	
	makeSet(1);
	makeSet(2);
	makeSet(3);
	makeSet(4);
	makeSet(5);
	makeSet(6);
	makeSet(7);
	
	unionn(1,2);
	unionn(2,3);
	unionn(4,5);
	unionn(6,7);
	unionn(5,6);
	unionn(3,7);
	
	cout<<find(1)<<endl;
	cout<<find(2)<<endl;
	cout<<find(3)<<endl;
	cout<<find(4)<<endl;
	cout<<find(5)<<endl;
	cout<<find(6)<<endl;
	cout<<find(7)<<endl;
}
