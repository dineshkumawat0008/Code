#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int test;
	cin>>test;
	
	while(test--){
		int items;
		cin>>items;
		int weight[items];
		int val[items];
		for(int i=0;i<items;i++){
			cin>>weight[i];
		}
		for(int i=0;i<items;i++){
			cin>>val[i];
		}
		int W;
		cin>>W;
		int T[items+1][W+1];
		for(int i=0;i<=items;i++){
			for(int j=0;j<=W;j++){
				if(i==0 || j==0){
					T[i][j]=0;
				}
				else if(j<weight[i-1]){
					T[i][j]=T[i-1][j];
				}
				else{
					T[i][j]=max(val[i-1]+T[i-1][j-weight[i-1]],T[i-1][j]);
				}
			}
		}
		
		/*for(int i=0;i<=items;i++){
			for(int j=0;j<=W;j++){
				cout<<"  "<<T[i][j]<<" ";
			}
			cout<<endl<<endl;
		}/*
		
		cout<<T[items][W]<<endl;
		
		
	}
}
