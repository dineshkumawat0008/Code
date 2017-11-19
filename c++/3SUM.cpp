#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int test;
	cin>>test;
	
	while(test--){
		
		int size;
		cin>>size;
		
		int arr[size];
		
		bool flag=false;
		for(int i=0;i<size;i++)
			cin>>arr[i];
		
		sort(arr,arr+size);
		
		for(int i=0;i<size;i++){
			int j=i+1;
			int k=size-1;
			while(j<k){
				if(arr[i]+arr[j]+arr[k]<0){
					j++;
				}
				else if(arr[i]+arr[j]+arr[k]>0){
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
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
			
	}
}
