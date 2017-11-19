#include<bits/stdc++.h>
using namespace std;

unordered_set<int> s; 

bool zerosumsubarray(int arr[],int n){
	int sum=0;
	s.insert(sum);
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		if(s.find(sum)!=s.end())
			return true;
		else{
			s.insert(sum);
		}
		
	}
	return false;
}

int main(){
	
	int arr[]={4,2,-3,-1,0,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<zerosumsubarray(arr,n);
}
