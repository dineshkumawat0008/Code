#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int test;
	cin>>test;
	
	
	while(test--){
		
		int n,i,j,root;
		cin>>n;
		bool prime[n+1];
		memset(prime,true,n+1);
		long sum=0;
		
		if(n<2){
			cout<<"0"<<endl;
		}
		else{
		 for(i=2;i<=n;i++){
			if(prime[i]==true){
				for(int j=i*2;j<=n;j+=i){
					prime[j]=false;
				}
			}
			
		}
		for(int i=2;i<=n;i++){
			if(prime[i])
				sum+=i;
		}
		cout<<sum<<endl;
	}
		
	}
}
