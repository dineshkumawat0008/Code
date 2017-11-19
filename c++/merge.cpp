#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	int i,j,k;
	int la[n1],ra[n2];
	for(i=0;i<n1;i++)
		la[i]=arr[l+i];
	for(i=0;i<n2;i++)
		ra[i]=arr[m+1+i];
	
	i=j=0;
	k=l;
	while(i<n1 && j<n2){
		if(la[i]<ra[j]){
			arr[k]=la[i];
			i++;
			k++;
		}
		else{
			arr[k]=ra[j];
			j++;
			k++;
		}
			
	}
	while(i<n1){
		arr[k]=la[i];
		i++;
		k++;
	}	
	while(j<n2){
		arr[k]=ra[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int l,int r){
	if(l<r){
	int m=(l+r)/2;
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	merge(arr,l,m,r);
}
}

int main(){
	int test,size;
	cin>>test;
	while(test--){
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
	
	mergeSort(arr,0,size-1);
	for(int i=0;i<size;i++)
	 cout<<arr[i]<<" ";
}
	
}
