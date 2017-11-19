#include<bits/stdc++.h>
using namespace std;

string str;
int len;

int sumAtKth(int len,int k){
	int i=0;
	int level=-1;
	int sum=0,temp=0;
	bool flag=false;
	for(i=0;i<len;i++){
		if(str[i]=='(')
			level++;
		else if(str[i]==')')
			level--;
		else{
			if(level==k){
			
			if(str[i+1]!='(' && str[i+1]!=')'){
				//temp=str[i];
				//cout<<"more "<<endl;
				temp=temp*10+(str[i]-'0');
				flag=true;
			}
			else{
				if(flag==true){
					//cout<<"more-last "<<endl;
					temp=temp*10+(str[i]-'0');
					//cout<<"temp "<<temp<<" sum "<<sum<<endl;
					sum=sum+temp;
					flag=false;
				}else{
					//cout<<"first"<<endl;
					sum = sum+(str[i]-'0');
					//cout<<" sum "<<sum<<endl;
			         temp=0;
				}
			
		}
			
		}
	}
			
	}
	return sum;
}

int main(){
	
	int test;
	scanf("%d",&test);
	
	while(test--){
		
		int k;
		cin>>k;
		cin>>str;
		len=str.length();
		
		cout<<sumAtKth(len,k)<<endl;;
		
		
		
	}
	
}
