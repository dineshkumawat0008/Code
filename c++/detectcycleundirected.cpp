#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	int rank;
	Node* parent;
};

map<int, Node*> m;

void makeSet(int vertex){
	Node* node = new Node();
	node->data=vertex;
	node->rank=0;
	node->parent=node;
	m.insert(pair<int,Node*>(vertex,node));
}

Node* findSet(Node* node){
	Node* parent=node->parent;
	if(parent==node){
		return parent;
	}
	node->parent=findSet(node->parent);
	return node->parent;
}

int find(int data){
	return findSet(m.find(data)->second)->data;
}

void unionn(int src,int des){
	Node* parent1 = findSet(m.find(src)->second);
	Node* parent2 = findSet(m.find(des)->second);
	if(parent1->rank==parent2->rank){
		parent1->rank+=1;
		parent2->parent=parent1;
	}
	else if(parent1->rank>parent2->rank){
		parent2->parent=parent1;
	}
	else if(parent1->rank<parent2->rank){
		parent1->parent=parent2;
	}
}

int main(){
	
	vector<list<int>> graph;
	bool flag=false;
	int v,e,src,des;
	cin>>v>>e;
	graph.resize(v);
	for(int i=0;i<v;i++){
		makeSet(i);
	}
	
	while(e--){
		cin>>src>>des;
		int data1 = find(src);
		int data2 = find(des);
		if(data1==data2){
			flag=true;
		}
		else{
			unionn(src,des);
		}
	}
	
	if(flag==true){
		cout<<"Graph contains cycle"<<endl;
	}
	else{
		cout<<"Graph doesn't contain cycle"<<endl;
	}
}
