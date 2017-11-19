#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};



int main(){

struct Node* newNode;
  struct Node* head1 =
            (struct Node*) malloc(sizeof(struct Node));
  head1->data  = 10;
 
  struct Node* head2 =
            (struct Node*) malloc(sizeof(struct Node));
  head2->data  = 3;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 6;
  head2->next = newNode;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 9;
  head2->next->next = newNode;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 15;
  head1->next = newNode;
  head2->next->next->next  = newNode;
 
  newNode = (struct Node*) malloc (sizeof(struct Node));
  newNode->data = 30;
  head1->next->next= newNode;
 
  head1->next->next->next = NULL;	
	
}
