#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* searchBST(Node *root , int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
    return root;
    }


    if(root->data > key){
    return searchBST(root->left, key);

    }
   return searchBST(root->right, key);
        
    
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

 
	
	if(searchBST(root,4)==NULL){
        cout<<"key doesnt exist"<<endl;
    }
    else{
       cout<<"key  exist"<<endl;   
    }
	return 0;
}