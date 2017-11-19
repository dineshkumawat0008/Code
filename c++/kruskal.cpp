#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	int rank;
	Node* parent;
};
struct Edge{
	int src;
	int des;
	int weight;
};

map<int,Node*> m;
vector<Edge*> edges;
vector<Edge*> resultEdges;
vector<Edge*>::iterator itr;
void makeSet(int data){
	Node* node = new Node();
	node->data=data;
	node->rank=0;
	node->parent=node;
	m.insert(pair<int,Node*>(data,node));
}

bool comparator(const Edge* a,const Edge* b){
    return a->weight < b->weight;
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
	
	int v,e;
	cin>>v>>e;
	for(int i=0;i<v;i++){
		makeSet(i);
	}
	while(e--){
		Edge* edge=new Edge();
		cin>>edge->src>>edge->des>>edge->weight;
		edges.push_back(edge);
	}
	
	sort(edges.begin(),edges.end(),comparator);
	for(Edge* edge:edges){
		int src=edge->src;
		int des=edge->des;
		int data1=find(src);
		int data2=find(des);
		if(data1!=data2){
			resultEdges.push_back(edge);
			unionn(data1,data2);
		}
	}
	for(Edge* edge:edges){
		cout<<edge->src<<" "<<edge->des<<" "<<edge->weight<<endl;
	}
	for(Edge* edge:resultEdges){
		cout<<edge->src<<" "<<edge->des<<" "<<edge->weight<<endl;
	}
}
