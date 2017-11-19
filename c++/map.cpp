#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,int> freq;
	
	freq.insert(pair<int,int>(5,1));
	freq.insert(pair<int,int>(6,4));
	freq.insert(pair<int,int>(3,6));
	freq.insert(pair<int,int>(7,8));
	
	for(auto it:freq){
		cout<<it.first<<" ";
	}
	
}
