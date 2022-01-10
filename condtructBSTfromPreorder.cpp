#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

Node* constructBST(int preorder[] , int preorderInx , int key , int max, int min){
    if(*preorderInx >= n){
        return NULL;
    }
    Node* root = NULL;
    if(kay > min && kay < max){
        root = new Node(key);
        *preorderInx = *preorderInx + 1;

        if(*preorderInx < n){
            root->left = constructBST(preorder , preorderInx, preorder[*preorderInx], min , key , n);

        }
           if(*preorderInx < n){
            root->right = constructBST(preorder , preorderInx, preorder[*preorderInx], max , key , n);
            
        }
    }
    return root;
}

int main()
{
    int preorder[]={10, 2 ,1, 13 ,11};
    int n = 5;
    int preorderInx = 0;
    constructBST(preorder , preorderInx , preorder[0] ,INT_MIN ,INT_MAX , n);
    printpreorder(root);

    return root;

	
   }