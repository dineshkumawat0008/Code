#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	for(int test=0;test<t;test++){
	    int n;
	    cin>>n;
	    int sum=0,i=1;
	    while(sum<n){
	        sum=i*(i-1);
	        cout<<sum<<" ";
	        i++;
	    }
	}
	return 0;
}
