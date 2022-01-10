#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *left, *right;
};
struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

struct node* newNode(int data);
int max(int a, int b) { return (a > b) ? a : b; }
int height(struct node* node);
int diameter(struct node* tree)
{
	if (tree == NULL)
		return 0;0



// Driver Code
int main()
{

	/* Constructed binary tree is
			1
			/ \
		2	 3
		/ \
	4	 5
	*/
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
     root->right->left->left= newNode(7);
    root->right->left->right = newNode(8);
 


	cout << "Diameter of the given binary tree is " <<
		diameter(root);

	return 0;
}

