#include <iostream>
using namespace std; 
   
struct Node { 
    struct Node* left; 
    struct Node* right; 
    int data; 
  
    Node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
}; 
  
struct Info { 
  
    
    int num_BST; 
    int max;
    int min;
    bool isBST; 
}; 
  
Info NumberOfBST(struct Node* root) 
{ 
    
    if (root == NULL) 
        return{ 0, INT_MIN, INT_MAX, true}; 
    if (root->left == NULL && root->right == NULL) 
        return { 1, root->data, root->data, true };
    Info L = NumberOfBST(root->left); 
    Info R = NumberOfBST(root->right);
    Info bst; 
    if (L.isBST && R.isBST && root->data > L.max && root->data < R.min) { 
        bst.min = min(root->data, (min(L.min, R.min))); 
        bst.max = max(root->data, (max(L.max, R.max))); 
        bst.num_BST = 2 + L.num_BST + R.num_BST; 
  
        return bst; 
    } 
    bst.isBST = false; 
    bst.num_BST = 1 + L.num_BST + R.num_BST; 
  
    return bst; 
} 
int main() 
{ 
    struct Node* root = new Node(5); 
    root->left = new Node(9); 
    root->right = new Node(3); 
    root->left->left = new Node(6); 
    root->right->right = new Node(4); 
    root->left->left->left = new Node(8); 
    root->left->left->right = new Node(7); 
  
    cout << NumberOfBST(root).num_BST; 
  
    return 0; 
} 
