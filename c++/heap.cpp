#include<bits/stdc++.h>
using namespace std;

void buildMaxHeap(int arr[],int a);
void maxHeap(int arr[],int a,int c);
void heapSort(int arr[],int a);
int main(){
	
	int arr[8]={9,6,5,0,8,2,1,3};
	int len=sizeof(arr)/sizeof(arr[0]);
	int heapSize=len-1;
	
	for(int i=0;i<len;i++){
	
	heapSort(arr,heapSize);
}
	
//	buildMaxHeap(arr,heapSize);
//	
//	for(int i=0;i<len;i++){
//		cout<<arr[i]<<" ";
//	}
}

void heapSort(int arr[],int heapSize){
	buildMaxHeap(arr,heapSize);
	int max=arr[0];
	arr[0]=arr[heapSize];
	cout<<max<<endl;
	heapSize-=1;

	
}

void buildMaxHeap(int arr[],int heapSize){
	for(int i=(heapSize/2);i>=0;i--){
		maxHeap(arr,i,heapSize);
	}
}

void maxHeap(int arr[],int i,int heapSize){
	int left,right,largest;
	left=2*i+1;
	right=2*i+2;
	largest=i;
	
	if(left<=heapSize && arr[left]>arr[i])
		largest=left;
	if(right<=heapSize && arr[right]>arr[largest])
		largest=right;
	if(largest!=i){
		swap(arr[i],arr[largest]);
		maxHeap(arr,largest,heapSize);
	}
}

