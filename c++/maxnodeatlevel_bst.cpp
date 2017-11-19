#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
 
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int maxNodeLevel(Node* root){
	queue<Node*> q;
	q.push(root);
	int level=-1,count,max=INT_MIN;
	while(!q.empty()){
		count=q.size();
		level++;
		if(count>max){
			max=count;
		}
		while(count--){
			Node* node=q.front();
			q.pop();
			if(node->left!=NULL)
				q.push(node->left);
			if(node->right!=NULL)
				q.push(node->right);
		}
	}
	return level;
}

int main()
{
   
    struct Node *root = newNode(2);     
    root->left        = newNode(1);    
    root->right       = newNode(3);    
    root->left->left  = newNode(4);      
    root->left->right = newNode(6);     
    root->right->right  = newNode(8);   
    root->left->right->left = newNode(5);
 
    printf("Level having maximum number of Nodes : %d",
            maxNodeLevel(root));
    return 0;
}
