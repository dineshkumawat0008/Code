#include<bits/stdc++.h>
#define MAX_VALUE 100000000;
using namespace std;

void constructStSum(int arr[],int st2[],int low,int high,int pos){
	
	if(low==high){
		st2[pos]=arr[low];return;
	}
	int mid=(low+high)/2;
	constructStSum(arr,st2,low,mid,(2*pos)+1);
	constructStSum(arr,st2,mid+1,high,(2*pos)+2);
	st2[pos]=st2[(pos*2)+1]+st2[(pos*2)+2];
}

int getRangeSum(int st2[],int low,int high,int qlow,int qhigh,int pos){
	//no overlap
	if(qlow>high || qhigh<low){
		//cout<<low<<" "<<high<<endl;
		//cout<<"no overlap"<<endl;
		return 0;
	}
	else if(qlow<=low && qhigh>=high){
		//cout<<low<<" "<<high<<endl;
		//cout<<"total overlap"<<endl;
	 return st2[pos];
}
	 else{
	 	int mid=(low+high)/2;
	 	//cout<<low<<" "<<high<<" "<<mid<<endl;
		//cout<<"partial overlap"<<endl;
	 	return getRangeSum(st2,low,mid,qlow,qhigh,2*pos+1)+getRangeSum(st2,mid+1,high,qlow,qhigh,2*pos+2);
	 }
}

void constructStMin(int arr[],int st[],int low,int high,int pos){
	
	if(low==high)
	 {
	 	st[pos]=arr[low];return;
	 }
	 int mid=(low+high)/2;
	 constructStMin(arr,st,low,mid,(2*pos)+1);
	 constructStMin(arr,st,mid+1,high,(2*pos)+2);
	 st[pos]=min(st[(2*pos)+1],st[(2*pos)+2]);
}

int getRangeMin(int st[],int low,int high,int qlow,int qhigh,int pos){  
	
	//total overlap
	if(qlow<=low && qhigh>=high){ 
	
	  	return st[pos];
	}
	//no overlap
	else if(qlow>high || qhigh<low){
		return MAX_VALUE;
	}
	else{
		//cout<<"partial overlap"<<endl;
		int mid=(low+high)/2;
		
		return min(getRangeMin(st,low,mid,qlow,qhigh,2*pos+1),getRangeMin(st,mid+1,high,qlow,qhigh,2*pos+2));
	}
}

int main(){
	
	int arr[]={-1,2,4,0};
	int size=sizeof(arr)/sizeof(arr[0]);
	int st[2*size-1];
	int st2[2*size-1];
	
	constructStMin(arr,st,0,size-1,0);
	constructStSum(arr,st2,0,size-1,0);
	//cout<<st[0]<<" "<<st[1]<<" "<<st[2]<<" "<<st[3]<<" "<<st[4]<<" "<<st[5]<<" "<<st[6];
	cout<<getRangeMin(st,0,size-1,0,3,0)<<endl;
	cout<<getRangeSum(st2,0,size-1,0,3,0)<<endl;
}
