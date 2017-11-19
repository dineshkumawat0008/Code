#include<bits/stdc++.h>
using namespace std;

int uniqueBST(int n){
	int sum=0;
	if(n<=1)
		return 1;
	else{
		for(int i=1;i<=n;i++){
			int left=uniqueBST(i-1);
			int right=uniqueBST(n-i);
			sum+=left*right;
		}
	}
	
	return sum;
}

int main(){
	
	int test;
	scanf("%d",&test);
	
	while(test--){
		
		int n;
		cin>>n;
		
		cout<<uniqueBST(n)<<endl;;
		
		
		
	}
	
}
