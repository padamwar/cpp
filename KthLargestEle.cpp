// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Struct binary tree node
struct Node {
	int data;
	Node *left, *right;
};

// Function to create a new node of
// the tree
Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Utility function to find the Kth
// largest element in the given tree
int findKthLargest(priority_queue<int,vector<int> >& pq,int k)
{
	// Loop until priority queue is not
	// empty and K greater than 0
	while (--k && !pq.empty()) {
		pq.pop();
	}

	// If PQ is not empty then return
	// the top element
	if (!pq.empty()) {
		return pq.top();
	}
	// Otherwise, return -1
	return -1;
}
// Function to traverse the given
// binary tree
void traverse(Node* root, priority_queue<int,vector<int> >& pq)
{
	if (!root) {
		return;
	}
	// Pushing values in binary tree
	pq.push(root->data);

	// Left and Right Recursive Call
	traverse(root->left, pq);
	traverse(root->right, pq);
}

// Function to find the Kth largest
// element in the given tree
void findKthLargestTree(Node* root, int K)
{

	// Stores all elements tree in PQ
	priority_queue<int, vector<int> > pq;

	// Function Call
	traverse(root, pq);

	// Function Call
	cout << findKthLargest(pq, K);
}

// Driver Code
int main()
{
	// Given Input
	Node* root = newNode(1);
	root->left = newNode(2);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right = newNode(3);
	root->right->right = newNode(7);
	root->right->left = newNode(6);
	int K = 3;

	findKthLargestTree(root, K);

	return 0;
}
