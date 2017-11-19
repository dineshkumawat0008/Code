#include<bits/stdc++.h>
using namespace std;
string str;
int main(){
	
	int len;
	getline(cin,str);
	
	len=str.length();
	char temp;
	int left=0;
	int right=len-1;
	while(left<right){
		temp=str[left];
		str[left]=str[right];
		str[right]=temp;
		left++;
		right--;
	}

	
	cout<<str;
}
