#include<bits/stdc++.h>
using namespace std;

string str2;
void insert(char ch){
	int i=0;
	//cout<<"insert"<<endl;
	
	while(str2[i]!='0'){
		//cout<<str2[i]<<endl;
		if(str2[i]==ch){
			break;
		}
		i++;
	}
	if(str2[i]=='0'){
		str2[i]=ch;
		str2[i+1]='0';
	}
}

int main(){
	int a=97;
	char ch=a;
	cout<<a;
	string str;
	getline(cin,str);
	int len=str.length();
	str2[0]=toupper(str[0]);
	str2[1]='0';
	//cout<<str2.at(0);
	int i;
	
	for(i=1;i<len;i++){
		if(str.at(i)!=' '){
			//cout<<str.at(i);
			insert(toupper(str.at(i)));
		}
	}
	for(i=0;str2[i]!='0';i++)
		cout<<str2[i];	

   
	
}
