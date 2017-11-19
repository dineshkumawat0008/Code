#include<bits/stdc++.h>
using namespace std;

bool sortbysecond(const pair<string,int> &a,pair<string,int> &b){
	return (b.second<a.second);
}

int main(){
	
	vector<string> vec;
	vector<string>::iterator itr;
	string str,line;
	ifstream ifs("a.txt");
	getline(ifs,str);
	stringstream data(str);
	//cout<<str;
	while(getline(data,line,' ')){
	vec.push_back(line);
}
map<string,int> m;
for(itr=vec.begin();itr!=vec.end();itr++){
	if(m.find(*itr)==m.end()){
		m.insert(pair<string,int> (*itr,1));
		
	}
	else{
		m[*itr]++;
		
		
	}
}

vector<pair<string,int>> mymap(m.begin(),m.end());
sort(mymap.begin(),mymap.end(),sortbysecond);

vector<pair<string,int>>::iterator vecitr;
int i=0;
for(vecitr=mymap.begin();i<10;vecitr++){
	cout<<vecitr->first<<" "<<vecitr->second<<endl;
	i++;
}
	

}
