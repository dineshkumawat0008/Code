#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
	if(start<=end){
	int mid=(start+end)/2;
	if(arr[mid]==key){
		return mid+1;
	}
	else if(key>arr[mid]){
		return binarySearch(arr,mid+1,end,key);
	}
	else{
		return binarySearch(arr,start,mid-1,key);
	}
}
	return -1;
}
int main(){
	int arr[10]={1,3,4,5,7,9,11,14,20,26};
	int size=sizeof(arr)/sizeof(arr[0]),key;
	cin>>key;
	cout<<binarySearch(arr,0,size-1,key)<<endl;
}
