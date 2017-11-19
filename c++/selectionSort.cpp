#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int size){
	
	for(int i=0;i<size-1;i++){
		int imin=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[imin])
				imin=j;
		}
		swap(arr[i],arr[imin]);
	}
}

int main(){
	
	int arr[]={2,4,3,6,5,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,size);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}
