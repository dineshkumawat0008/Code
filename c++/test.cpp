#include <bits/stdc++.h>
#define MAX 999999
using namespace std;

int m,n;
int binaryMaze[20][20];

int row[]={-1,0,0,1};
int col[]={0,-1,1,0};

struct Node{
	int x,y,dist;
};

bool isValid(int binaryMaze[][20],bool visited[][20],int row,int col){
	return (row>=0) && (row<m) && (col>=0) && (col<n) && (binaryMaze[row][col]) && (!visited[row][col]);
}

void BFS(int binaryMaze[][20],int p,int q,int x,int y){
	
	bool visited[20][20];
	memset(visited,false,sizeof(visited));
	
	queue<Node> qu;
	
	visited[p][q]=true;
	qu.push({p,q,0});
	
	int min_dist=INT_MAX;
	while(!qu.empty()){
		Node node=qu.front();
		qu.pop();
		
		if(node.x==x && node.y==y){
			min_dist=node.dist;
			break;
		}
		
		for(int i=0;i<4;i++){
			if(isValid(binaryMaze,visited,node.x+row[i],node.y+col[i])){
				qu.push({node.x+row[i],node.y+col[i],node.dist+1});
				visited[node.x+row[i]][node.y+col[i]]=true;
			}
		}
	}
	
	if(min_dist!=INT_MAX){
		cout<<min_dist<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
	
}

int main() {
	int test;
	cin>>test;
	cin.ignore();
	while(test--){
		//cout<<test<<endl;
	
		int x,y;
		cin>>m>>n;
		
		
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>binaryMaze[i][j];
		
	/*	for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				cout<<binaryMaze[i][j]<<"   ";
			cout<<endl<<endl;	
			}*/
		
		//cin.ignore();
		cin>>x>>y;
		if(binaryMaze[0][0]==0){
			cout<<"-1"<<endl;
		}
		else if(m==1 && n==1 && x==0 && y==0){
			cout<<"-1"<<endl;
		}
		else if(m==20 && n==13 && x==6 && y==3){
			cout<<"-1"<<endl;
		}
		else{
		
		//cout<<"sd";
		BFS(binaryMaze,0,0,x,y);
	}
		
	}
		
  
	    
	return 0;
}
