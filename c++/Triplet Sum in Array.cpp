#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	
	cin>>test;
	
	while(test--){
		
		int size,key;
		cin>>size>>key;
		int arr[size];
		
		
		
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		sort(arr,arr+size);
		bool flag=false;
		
		for(int i=0;i<size;i++){
			int j=i+1;
			int k=size-1;
			while(j<k){
				if(arr[i]+arr[j]+arr[k]<key){
					j++;
				}
					
				else if(arr[i]+arr[j]+arr[k]>key){
					k--;
				}
						
				else{
					flag=true;
					break;
				}
			}
			if(flag==true){
				break;
			}
				
		}
		if(flag==true){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
}
