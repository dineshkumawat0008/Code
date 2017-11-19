#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string,int> &a,pair<string,int> &b){
	return (a.second>b.second);
}

int main(){
	
	
	/*int a[6]={ 2, 1, 5, 6, 8, 7 };
	sort(a,a+5);                 //sorting
	int i;
	//for(i=0;i<5;i++)
	//cout<<a[i]<<endl;
	
	vector<int> vect(a,a+5);
	vector<int> vect2;
	//find(vect.begin(),vect.end(),5)!=vect.end()?cout<<"element found":cout<<"not found";
	/*all_of(vect.begin(),vect.end(),[](int x){
		return x>0;
	})?cout<<"all positive":cout<<"all are not positive";*/
	
	//copy_n(vect,6,vect2);
	/*is_partitioned(vect.begin(),vect.end(),[](int x){
		return x%2==0;
	})?cout<<"partioned"<<endl:cout<<"not partioned"<<endl;
	
	for(int &x:vect)
		cout<<" "<<x<<" "<<endl;
	
	/*partition(vect.begin(),vect.end(),[](int x){
		return x%2==0;
	});*/
	/*stable_partition(vect.begin(),vect.end(),[](int x){
		return x%2==0;
	});
	
	is_partitioned(vect.begin(),vect.end(),[](int x){
		return x%2==0;
	})?cout<<"partioned"<<endl:cout<<"not partioned"<<endl;
	for(int &x:vect)
		cout<<" "<<x<<" "<<endl;
	
	vector<int>::iterator it1;
	
	auto it=partition_point(vect.begin(),vect.end(),[](int x){
		return x%2==0;
	});
	
	string str;
	getline(cin,str);
	cout<<str<<endl;
	
	string str1(5,'g');
	cout<<str1;
	char ch1='a',ch2='b';
	swap(ch1,ch2);
	cout<<ch1<<ch2;
	map<string,int> m;
	m.insert(pair<string,int> ("dinesh",40));
	m.insert(pair<string,int> ("kumawat",40));
	m.insert(pair<string,int> ("dfds",40));
	m.insert(pair<string,int> ("dsdf",40));
	m.insert(pair<string,int> ("das",40));
	
	map<string,int>::iterator itr;
	
	for(itr=m.begin();itr!=m.end();itr++)
		{
			cout<<itr->first<<" "<<itr->second<<endl;
		}
		
	   // m.erase(m.begin(),m.find("dinesh"));
	   map<string,int>::iterator itt=m.find("dinesh");
	   cout<<itt->first;*/
	   
	   
	   
	   vector< pair <int,int> > vect;
 
    // Initializing 1st and 2nd element of
    // pairs with array values
    //int arr[] = {10, 20, 5, 40 };
    //int arr1[] = {30, 60, 20, 50};
    //int n = sizeof(arr)/sizeof(arr[0]);
 //	vector<pair<string,int>> mymap(m.begin(),m.end());
    // Entering values in vector of pairs
    //for (int i=0; i<n; i++)
      //  vect.push_back( make_pair(arr[i],arr1[i]) );
 
    // Printing the original vector(before sort())
   //cout << "The vector before sort operation is:\n" ;
    //vector<pair<string,int>>::iterator itr;
   /* for (itr=vect.begin();itr!=vect.end();itr++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << itr->first << " "
             << itr->second << endl;
 
    }
 
    // Using simple sort() function to sort
    sort(vect.begin(), vect.end());
 
     // Printing the sorted vector(after using sort())
    cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }*/
    map<string,int> m;
     ifstream ifs ("a.txt");
string s,line;
vector<string> str;
getline (ifs, s, (char) ifs.eof());
stringstream data(s);

 	sort(mymap.begin(),mymap.end(),sortbysec);
 	
 	for(itr=mymap.begin();itr!=mymap.end();itr++){
 		cout << itr->first << " "
             << itr->second << endl;
 		
	 }
	 
	 int t=m.at("dinesh");
	 cout<<t<<endl;
	 



while(getline(data,line,' ')){
	str.push_back(line);
}
for(i=0;i<str.size();i++)
	cout<<str[i]<<endl;

//cout<<s;
	 
	 
	    
		
	
}

