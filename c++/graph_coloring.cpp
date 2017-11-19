#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
void graphColor(vector<list<int>> graph,int v){
	list<int>::iterator itr;
	for(int u=0;u<v;u++){
		set<int> s;
		int color;
		for(itr=graph[u].begin();itr!=graph[u].end();itr++){
			if(m[*itr]!=-1)
				s.insert(m[*itr]);
		
			color=1;
			for(auto c:s){
				if(color!=c)
					break;
				color++;
			}
		}
		m.find(u)->second=color;
	}
	
}

int main(){
	
	vector<list<int>> graph;
	int v,e;
	cin>>v>>e;
	graph.resize(v);
	int src,des;
	while(e--){
		cin>>src>>des;
		graph[src].push_back(des);
		graph[des].push_back(src);
	}
	
	for(int i=0;i<v;i++){
		m.insert(pair<int,int> (i,-1));
	}
	
	graphColor(graph,v);
	for(map<int,int>::iterator itr=m.begin();itr!=m.end();itr++){
		cout<<"vertex "<<itr->first<<" color "<<itr->second<<endl;
	}
}
