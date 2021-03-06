#include<bits/stdc++.h>
using namespace std;

int matrixChainMult(int arr[],int i,int j){
	int count,min=INT_MAX;
	if(i==j)
		return 0;
	for(int k=i;k<j;k++){
		count=matrixChainMult(arr,i,k)+matrixChainMult(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
		if(count<min)
			min=count;
	}
	return min;
}

int main(){
	int arr[]={1,2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<matrixChainMult(arr,1,size-1)<<endl;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                        
