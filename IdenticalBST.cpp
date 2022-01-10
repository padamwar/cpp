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
bool isIdenticalBsT(Node* root1 , Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 = root1->data = root2->data;
        bool cond2 = isIdenticalBsT(root1->left=root2->left);
        bool cond3 = isIdenticalBsT(root1->right=root2->right);
    }
    if(cond1 && cond2 && cond3){
        return true;
    }
    else{
        return false;
    }

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

    isIdenticalBsT(root , root) {
        cout << "this is identical";
    }
    cout<<"not identical";
    
    cout<<endl;
	return 0;
}