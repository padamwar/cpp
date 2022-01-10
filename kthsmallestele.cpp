#include <iostream>
#include <climits>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};
Node* newNode(int key)
{
    Node* node = new Node;
    node->data = key;
    node->left = node->right = nullptr;
 
    return node;
}
void inorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node* insert(Node* root, int key)
{
    if (root == nullptr) {
        return newNode(key);
    }
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}

int kthSmallest(Node* root, int *i, int k)
{
    if (root == nullptr) {
        return INT_MAX;
    }
    int left = kthSmallest(root->left, i, k);
    if (left != INT_MAX) {
        return left;
    }
 
    if (++*i == k) {
        return root->data;
    }
    return kthSmallest(root->right, i, k);
}

int kthSmallest(Node* root, int k)
{
    int i = 0;
    return kthSmallest(root, &i, k);
}
 
int main()
{
    int keys[] = { 15, 10, 20, 8, 12, 16, 25 };
 
    Node* root = nullptr;
    for (int key: keys) {
        root = insert(root, key);
    }
    int k = 2;
    int result = kthSmallest(root, k);
 
    if (result != INT_MAX) {
        cout << result;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}


