#include <iostream>  
#include <stdlib.h>  
using namespace std;  

struct Node {  
    int data;  
    Node *left;  
    Node *right;  
};  
Node* create(int item)  
{  
    Node* node = new Node;  
    node->data = item;  
    node->left = node->right = NULL;  
    return node;  
}  
  
void inorder(Node *root)  
{  
    if (root == NULL)  
        return;  
  
    inorder(root->left);  
    cout<< root->data << "   ";  
    inorder(root->right);  
}  
Node* findMinimum(Node* cur)  
{  
    while(cur->left != NULL) {  
        cur = cur->left;  
    }  
    return cur;  
}  
Node* insertion(Node* root, int item)  
{  
    if (root == NULL)  
        return create(item);  
    if (item < root->data)  
        root->left = insertion(root->left, item);  
    else  
        root->right = insertion(root->right, item);  
  
    return root;  
}  
int main()  

{  
   Node* root = NULL;  
   int keys[8];  
   for(int i=0;i<8;i++)  
    {  
    cout << "Enter value to be inserted";  
    cin>>keys[i];  
        root = insertion(root, keys[i]);  
    }  
    
    inorder(root);  
    cout<<"\n";  
    inorder(root);  
    return 0;  
}
