#include<bits/stdc++.h>
using namespace std;

struct trie{
	bool isleaf;
	struct trie* children[26];
};

struct trie* getNode(){
	trie* root = new trie();
	root->isleaf=false;
	for(int i=0;i<26;i++){
		root->children[i]=NULL;
	}
	return root;
}

insert(trie* root,string s){
	trie* traverse=root;
	for(int i=0;i<s.length();i++){
		int index = s[i]-'a';
		if(!traverse->children[index])
			traverse->children[index]=getNode();
		
		traverse = traverse->children[index];
	}
	
	traverse->isleaf=true;
}

bool search(struct trie* root, string key)
{
    struct trie* pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    return (pCrawl != NULL && pCrawl->isleaf);
}

int main(){
	
    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
                     
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct trie* root = getNode();
 
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
 
    search(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    search(root, "there")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
}

