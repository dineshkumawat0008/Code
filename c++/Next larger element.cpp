#include<bits/stdc++.h>
using namespace std;

multimap<int,int> m;
stack<int> s;
multimap<int,int>::iterator itr;

void nextLarger(int a[],int size) {
    stack<int> s;
    s.push(a[0]);

    for (int i = 1; i < size; i++) {
        if (!s.empty()) {
            while (true) {
                if (s.empty() || s.top() > a[i]) {
                    break;
                }
                m.insert(pair<int,int>(s.top(),a[i]));
                //cout<<"element inserted to map "<<s.top()<<"nge "<<a[i]<<endl;
               // cout<<"pooped "<<s.top()<<endl;
                s.pop();
                //cout<<a[i]<<" ";
            }
        }
        s.push(a[i]);
    }
    while (!s.empty()) {
        ///s.pop();
        //cout<<"-1 ";
        m.insert(pair<int,int>(s.top(),-1));
        //cout<<"element inserted to map "<<s.top()<<"nge -1"<<endl;
                //cout<<"pooped "<<s.top()<<endl;
        s.pop();
        
    }
}

int main(){
	
	int test;
	scanf("%d",&test);
	
	while(test--){
		
		int size;
		cin>>size;
		
		int arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		
		
		
		nextLarger(arr,size);
		for(int i=0;i<size;i++){
			itr=m.find(arr[i]);
			cout<<itr->second<<" ";
		}
	/*	for(itr=m.begin();itr!=m.end();itr++){
			cout<<itr->first<<" "<<itr->second<<endl;
		}*/
		m.clear();
	//	s.clear();
		cout<<endl;
	}
}
