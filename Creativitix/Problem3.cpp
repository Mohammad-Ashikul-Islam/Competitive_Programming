/*
   Point To Be Noted:
   I didn't write Problem-3 code all by MYSELF,
   I took some help from Internet and modified it according to
   problem statement. As I had some primary knowledge about BST & Pointer,
   So It wasn't that hard for me to modify it.
   Thank You
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}


// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

//Search a node
void searchNode(struct node* current_node, int value){
    if(current_node==NULL){
        cout << value << " nao existe\n";
        return;
    }
    else if(current_node->key==value){
        cout <<  value << " existe\n";
        return;
    }
    else if(value <= current_node->key) searchNode(current_node->left,value);
    else searchNode(current_node->right,value);

}

// Inorder Traversal
void inorder(struct node *root,bool& flag) {
    if (root == NULL) return;
    // Traverse left
    inorder(root->left,flag);

    if(flag==false){
        cout << root->key;
        flag=true;
    }
    else
        cout << " " << root->key;

    // Traverse right
    inorder(root->right,flag);
}

// Preorder Traversal
void preorder(struct node *root,bool& flag) {
    if(root==NULL) return;
    if(flag==false){
        cout << root->key;
        flag=true;
    }
    else
        cout << " " << root->key;
    // Traverse left
    preorder(root->left,flag);

    // Traverse right
    preorder(root->right,flag);
}

// Postorder Traversal
void postorder(struct node *root,bool& flag) {
    if(root==NULL) return;
    // Traverse left
    postorder(root->left,flag);

    // Traverse right
    postorder(root->right,flag);
    if(flag==false){
        cout << root->key;
        flag=true;
    }
    else
        cout << " " << root->key;
}

// Driver code
int main() {
  struct node *root = NULL;
  string s;
  while(cin >> s){
    if(s=="I"){
        int num;
        cin >> num;
        root = insert(root,num);
    }
    else if(s=="P"){
        int num;
        cin >> num;
        searchNode(root,num);
    }
    else if(s=="R"){
        int num;
        cin >> num;
        deleteNode(root, num);
    }
    else if(s=="INFIXA"){
        bool flag=false;
        inorder(root,flag);
        cout << endl;
    }
    else if(s=="PREFIXA"){
        bool flag=false;
        preorder(root,flag);
        cout << endl;
    }
    else if(s=="POSFIXA"){
        bool flag=false;
        postorder(root,flag);
        cout << endl;
    }
    //Program Ends With EOF which means Cntrl+Z
  }
  return 0;
}
