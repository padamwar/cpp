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


int tree_height( struct Node*root){
	if(root==NULL){
	return 0;}
	int left_height= tree_height(root->left);
	int right_height = tree_height(root->right);

	if(left_height >= right_height)
	return left_height + 1;
	else
	return right_height + 1;
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
 
	
	cout<<tree_height(root);
	return 0;
}

 
