#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int size){

	for(int i=1;i<size;i++){
		int hole=i;
		int value=arr[i];
		while(hole>0 && arr[hole-1]>value){
			arr[hole]=arr[hole-1];
			hole--;
		}
		arr[hole]=value;
	}
}

int main(){
	int arr[]={2,4,3,6,5,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,size);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<endl;
}
