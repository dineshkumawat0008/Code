#include<bits/stdc++.h>
#define LINE 2
#define STATION 4
using namespace std;

int minTime(int a[][STATION],int t[][STATION],int *e,int *x,int *t0,int *t1){
	
	t0[0]=a[0][0]+e[0];
	t1[0]=a[1][0]+e[1];
	
	for(int i=1;i<STATION;i++){
		t0[i]=min(t0[i-1]+a[0][i],t1[i-1]+a[0][i]+t[1][i]);
		t1[i]=min(t1[i-1]+a[1][i],t0[i-1]+a[1][i]+t[0][i]);
		
	}
	
	return min(t0[STATION-1]+x[0],t1[STATION-1]+x[1]);
	
}

int main(){
	
	int a[LINE][STATION]={{4,5,3,2},
						  {2,10,1,4}};
	int t[LINE][STATION]={{0,7,4,5},
						  {0,9,2,8}};
	int e[LINE]={10,12};
	int x[LINE]={18,7};
	int t0[STATION],t1[STATION];
	
	
	cout<<"min time = "<<minTime(a,t,e,x,t0,t1)<<endl;
	
	for(int i=0;i<STATION;i++){
		if(i==STATION-1){
			t0[i]=t0[i]+x[0];
			t1[i]=t1[i]+x[1];
		}
		if(t0[i]<=t1[i]){
			cout<<"line 1 "<<"station "<<i+1<<endl;
		}
		else{
			cout<<"line 2 "<<"station "<<i+1<<endl;
		}
			
	}
	
}
