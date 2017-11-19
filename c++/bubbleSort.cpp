#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int size){
	
	int flag;
	for(int k=0;k<size;k++){
		flag=0;
		for(int i=0;i<size-k-1;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
				flag=1;
			}
				
	    }
	    if(flag==0)
	    	break;
	}
}

int main(){
	int arr[]={2,4,3,6,5,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}
