#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
	Node (int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

struct node* creatNode(int val)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = val;
	node->left = NULL;
	node->right = NULL;

	return (node);
}


void mirrorify ( struct Node*root , Node**mirror){
	if(root==NULL){
        mirror==NULL;
	return 0;}
    mirror = creatNode(root->val);
    mirrorify(root->left,&((*mirror)->right));
    mirrorify(root->right,&((*mirror)->left));
	
}


int main()
{

	
   Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
	 root->right->left->left->left = new Node(7);
    root->right->left->right->right = new Node(8);
  root->right->left->left->left->left = new Node(7);
    root->right->left->right->right->right = new Node(8);
 
	
	cout<<mirrorify(root);
	return 0;
}
