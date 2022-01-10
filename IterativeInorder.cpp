#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};



class solution{
    public:

    vector<int>preorderTransversl(TreeNode* root){
        vector<int>preorder;
        if(root == NULL)
        return preorder;

        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            
        
        preorder.push_back(root->val);


        if(root->right != NULL){
            
            st.push(root->right);

        }
         if(root->left != NULL){
           
            st.push(root->left);
            
        }
        }
        return preorder;

    }
};



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
 
    // preorderTransveral(root);
 
    return 0;
}