#include<bits/stdc++.h>
using namespace std;

void constructST(int st[],int arr[],int low,int high,int pos){
	if(low==high){
		st[pos]=arr[low];
		return;
	}
	else{
	int mid=(low+high)/2;
	constructST(st,arr,low,mid,(2*pos)+1);
	constructST(st,arr,mid+1,high,(2*pos)+2);
	st[pos]=min(st[2*pos+1],st[2*pos+2]);
	}
}

int getRangeMin(int st[],int low,int high,int qlow,int qhigh,int pos){  
	
	//total overlap
	if(qlow<=low && qhigh>=high){ 
	
	  	return st[pos];
	}
	//no overlap
	else if(qlow>high || qhigh<low){
		return INT_MAX;
	}
	else{
		//cout<<"partial overlap"<<endl;
		int mid=(low+high)/2;
		
		return min(getRangeMin(st,low,mid,qlow,qhigh,2*pos+1),getRangeMin(st,mid+1,high,qlow,qhigh,2*pos+2));
	}
}

int main(){
	
	int size;
	cin>>size;
	
	int arr[size];
	
	for(int i=0;i<size;i++)
		cin>>arr[i];

	int st[(2*size)-1];
	
	constructST(st,arr,0,size-1,0);
	int ql,qh;
	cin>>ql>>qh;
	int min=getRangeMin(st,0,size-1,ql,qh,0);
	cout<<min;
}
