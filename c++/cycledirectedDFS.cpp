#include<bits/stdc++.h>
using namespace std;

map<int,char> m;
bool flag=false;

void cycleDFS(vector<list<int>> graph,int src){
	if(m.find(src)->second=='g'){
		flag=true;
		return;
	}
	else{
	m.find(src)->second='g';
	for(list<int>::iterator itr=graph[src].begin();itr!=graph[src].end();itr++){
		cycleDFS(graph,*itr);	
	}
	m.find(src)->second='b';
	return;
}
	
}

int main(){
	vector<list<int>> graph;
	int v,e,src,des;
	cin>>v>>e;
	graph.resize(v);
	while(e--){
		cin>>src>>des;
		graph[src].push_back(des);
	}
	for(int i=0;i<v;i++){
		m.insert(pair<int,char> (i,'w'));
	}
	cycleDFS(graph,0);
	if(flag==true){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
//	m.insert(pair<int,char>(0,'g'));
    //m.find(0)->second='g';
	//cout<<m.find(0)->first<<" "<<m.find(0)->second;
}
