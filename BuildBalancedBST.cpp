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

void preorder(Node*root){
    if(root==NULL){
        return ;

    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


Node* SortArrayToBST(int arr[],int start , int end){
    if(start > end){
        return NULL;
    }
    int mid= (start + end)/2;
    Node* root =new Node(arr[mid]);

    root->left = SortArrayToBST(arr,start, mid-1);
    root->right = SortArrayToBST(arr, mid+1 ,end);
    return root;
}








int main()
{
    int arr[]={10,20,30,40,50,60};
    Node* root = SortArrayToBST(arr, 0, 4);
  
    preorder(root);
    cout<<endl;
	return 0;
}