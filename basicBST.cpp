#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* inserBST(Node *root , int val)