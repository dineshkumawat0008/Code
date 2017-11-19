#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int start,int end){
	//cout<<"dinesh"<<endl;
	int pIndex=start;
	int pivot = arr[end],i;
	for(i=start;i<end;i++){
		//cout<<"kumawat"<<endl;
		if(arr[i]<=pivot){
			//cout<<"kumawat"<<endl;
			//cout<<arr[i]<<" "<<arr[pIndex];
			swap(&arr[i],&arr[pIndex]);
			//cout<<arr[i]<<" "<<arr[pIndex];
			pIndex++;
		}
	}
	//cout<<arr[pIndex]<<" "<<arr[end]<<endl;
	swap(&arr[pIndex],&arr[end]);
	//cout<<arr[pIndex]<<" "<<arr[end]<<endl;
	return pIndex;
}

void quickSort(int arr[],int start,int end){
	if(start<end){
	int pIndex=partition(arr,start,end);
	//cout<<pIndex<<endl;
	quickSort(arr,start,pIndex-1);
	quickSort(arr,pIndex+1,end);
}
}
int main(){
	
	int arr[]={7,6,5,4,3,2,1,0},i;
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,size-1);
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
}
