#include <bits/stdc++.h>
using namespace std;
//STRUCTURE DEFINE
struct node{
    int key;
    node *left, *right;
}*root;
//CLASS DEFINE
class BST {

public:
    node* new_node(int );
    void insert(int );
    void insert(node**, int );
    void print();
    void preOrder(node*);
    void findNodeRR(int);
    void findNodeRR(node**,int );
    void findNodeLR(int);
    void findNodeLR(node**,int);
    int size(node*);
    BST() {
        root = NULL;
    }
};
//SIZE FUNCTION
int BST::size(node* root){
  if (root==NULL)
    return 0;
  else
    return(size(root->left) + 1 + size(root->right));
}

node* BST::new_node(int key){
    node* temp = new node;
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
//insertion
void BST::insert(int key){
   insert(&root, key);
}

void BST::insert(node **root, int key){
   if(*root == NULL){
      *root = new_node(key);
   }
   else{
      if((*root) -> key < key){
         insert(&((*root) -> right), key);
      }
      else if((*root) -> key > key){
         insert(&((*root) -> left), key);
      }
   }
}
//print
void BST::print(){
    preOrder(root);
}
//print preorder
void BST::preOrder(node* root){
    if(root != NULL){
        cout<<"("<<root->key<<" "<<size(root->left)<<" "<<size(root->right)<<")"<<" ";
        //cout<<root->key<< " ";
        preOrder(root->left);
        preOrder(root->right);
    }
    return;
}
//search for the node with given "key" and rotate Right
void BST::findNodeRR(int key){
    findNodeRR(&root,key);
}
void BST::findNodeRR(node **root,int item){

       if(*root == NULL){
            return;
           }
       else if((*root)->key == item){
           //cout<<"found";
           //right rotation
           if((*root)->right==NULL){
                 //
           }
           else{
                 struct node *temp= ((*root)->left);
                 ((*root)->left)= (temp->right);
                 temp->right=(*root);
                 *root=temp;
           }
       }
       else if(item > (*root)->key){
            findNodeRR( &((*root)->right),item);
       }
       else{
            findNodeRR(&((*root)->left),item);
       }
}
//search for the node with given "key" and rotate left
void BST::findNodeLR(int key){
    findNodeLR(&root,key);
}
void BST::findNodeLR(node **root,int item){

       if(*root == NULL){
            return;
           }
       else if((*root)->key == item){
           //cout<<"found";
           //left rotation
           if((*root)->left==NULL){
                 //
           }
           else{
               struct node *temp= ((*root)->right);
               ((*root)->right)= (temp->left);
               temp->left=(*root);
               *root=temp;
           }
       }
       else if(item > (*root)->key){
            findNodeLR( &((*root)->right),item);
       }
       else{
            findNodeLR(&((*root)->left),item);
       }
}

//main
int main() {
    int T, N;
    string s;
    cin >> T;
    BST bst;
    for(int t=0; t<T; t++){
        cin >> s;
        if(s == "i"){
            cin >> N;
            bst.insert(N);  //call to insert
        }
        if(s == "rr"){
            cin >> N;
            bst.findNodeRR(N);  //call to search and right rotate
        }
        if(s=="lr"){
            cin>>N;
            bst.findNodeLR(N);  //call to search and left rotate
        }
        if(s=="p"){
            bst.print();
        }
    }
    return 0;
}
