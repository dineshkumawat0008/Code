#include<bits/stdc++.h>
using namespace std;
bool flag=false;
void cycleDFS(vector<list<int>> graph,vector<bool> visited,int src,int parent){
	if(visited[src]){
		flag=true;
	}
	else{
		visited[src]=true;
		for(list<int>::iterator itr=graph[src].begin();itr!=graph[src].end();itr++){
			if(*itr!=parent){
				cycleDFS(graph,visited,*itr,src);
			}
		}
		return;
	}
}

int main(){
	
	vector<list<int>> graph;
	int v,e,src,des;
	cin>>v>>e;
	graph.resize(v);
	vector<bool> visited(graph.size(),false);
	
	while(e--){
		cin>>src>>des;
		graph[src].push_back(des);
		graph[des].push_back(src);
	}
	cycleDFS(graph,visited,0,0);
	
	if(flag==true){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	
}
