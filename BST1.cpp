// # include<iostream>
// # include<queue>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// //search an element inside the bst 
// bool searchinsidebst(node* root,int x){
//       if(root==NULL){
//         return false;
//       }
//       if(root->data==x){
//         return true;
//       }
//       if(root->data>x){
//         //element left part mein present hai
//         return searchinsidebst(root->left,x);
//       }
//       else{
//         return searchinsidebst(root->right,x);
//       }
// }
// //optimise code to search an element inside the bst
// //we have to use iterative way to make the space constant
// bool searchInsidebst(node* root,int x){
//     node* temp=root;
//     while(temp!=NULL){
//         if(root->data==x){
//             return true;
//         }
//         if(temp->data>x){
//             temp=temp->left;
//         }
//         else{
//             temp=temp->right;
//         }
//     }
// }
// int minvalue(node* root){
//     node* temp=root;
//     while(temp->left!=NULL){
//          temp=temp->left;
//     }
//     return temp->data;
// }
// int maxvalue(node* root){
//     node* temp=root;
//     while(temp->right!=NULL){
//         temp=temp->right;
//     }
//     return temp->data;
// }
// void levelordertraversal(node* &root){
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();

//         if(temp==NULL){
//             //purana level complete traverse kar chuka hai
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//     cout<<temp->data<<"  ";
//     if(temp->left){
//         q.push(temp->left);
//     }
//     if(temp->right){
//         q.push(temp->right);
//     }
//         }
//     }
// }
// //now applying inorder traversal to binary search tree
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// //now applying preordertraversal to binary search tree
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// node* deletefrombst(node* root,int val){
//     //base case
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==val){
//           //0 child
//     if(root->left==NULL&&root->right==NULL){
//         delete(root);
//         return NULL;
//     }
//           //1 child
//     //left child
//     if(root->left!=NULL&&root->right==NULL){
//            node* temp=root->left;
//            delete(root);
//            return temp;
//     }
//     //case for the right child
//     if(root->left==NULL&&root->right!=NULL){
//         node* temp=root->right;
//         delete(root);
//         return temp;
//     }
//           //2 child
//     if(root->left!=NULL && root->right!=NULL){z
//          int mini;//minvalue(root->right)->data;
//         root->data=mini;
//         root->right=deletefrombst(root->right,mini);
//         return root;
//     }
//     }
//    else if(root->data>val){
//     root->left=deletefrombst(root->left,val);
//     return root;
//    }
//    else{
//     root->right=deletefrombst(root->right,val);
//    }
// }
// //now applying post ordertraversal to binary search tree
// node* insertintobst(node* root,int d){
//     if(root==NULL){
//          root=new node(d);
//          return root;
//     }
//     if(d>root->data){
//         //right part mein insert karna hai
//         root->right=insertintobst(root->right,d);
//     }
//     //left part mein insert karna hai
//     else{
//         root->left=insertintobst(root->left,d);
//     }
//     return root;
// }
// void takeInput(node* &root){
//     int data;
//     cin>>data;
//     while(data!=-1){
//        root=insertintobst(root,data);
//        cin>>data; 
//     }
// }
//   int main(){
// node* root=NULL;
// cout<<"Enter the data to create the BST"<<endl;
// takeInput(root);

// cout<<"printing the data for the binary search tree"<<endl;
// levelordertraversal(root);

// cout<<"Inorder traversal for the bst"<<endl;
// inorder(root);

// cout<<"preorder traversal for the bst"<<endl;
// preorder(root);

// cout<<"post order traversal for the bst"<<endl;
// postorder(root);

// cout<<"Minimum value inside the BSt"<<endl;
// cout<<minvalue(root);

// cout<<"Maximum value inside the bst"<<endl;
// cout<<maxvalue(root);
//     return 0;
//   }


//   // to find the inorder predecssor and successor inside the binary tree
// //inorder predecessor is the max value in the left of BST
// // / C++ program to find predecessor and successor in a BST
// // #include <iostream>
// // using namespace std;
 
// // // BST Node
// // struct Node
// // {
// //     int key;
// //     struct Node *left, *right;
// // };
 
// // void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
// // {
// //     // Base case
// //     if (root == NULL)  return ;
 
    
// //     if (root->key == key)
// //     {
// //         if (root->left != NULL)
// //         {
// //             Node* tmp = root->left;
// //             while (tmp->right)
// //                 tmp = tmp->right;
// //             pre = tmp ;
// //         }
// //         if (root->right != NULL)
// //         {
// //             Node* tmp = root->right ;
// //             while (tmp->left)
// //                 tmp = tmp->left ;
// //             suc = tmp ;
// //         }
// //         return ;
// //     }
// //     if (root->key > key)
// //     {
// //         suc = root ;
// //         findPreSuc(root->left, pre, suc, key) ;
// //     }
// //     else 
// //     {
// //         pre = root ;
// //         findPreSuc(root->right, pre, suc, key) ;
// //     }
// // }
// // Node *newNode(int item)
// // {
// //     Node *temp =  new Node;
// //     temp->key = item;
// //     temp->left = temp->right = NULL;
// //     return temp;
// // }
// // Node* insert(Node* node, int key)
// // {
// //     if (node == NULL) return newNode(key);
// //     if (key < node->key)
// //         node->left  = insert(node->left, key);
// //     else
// //         node->right = insert(node->right, key);
// //     return node;
// // }
 

// // int main()
// // {
// //     int key = 30;   
 

// //     Node *root = NULL;
// //     root = insert(root, 50);
// //     insert(root, 30);
// //     insert(root, 20);
// //     insert(root, 40);
// //     insert(root, 70);
// //     insert(root, 60);
// //     insert(root, 80);
 
 
// //     Node* pre = NULL, *suc = NULL;
 
// //     findPreSuc(root, pre, suc, key);
// //     if (pre != NULL)
// //       cout << "Predecessor is " << pre->key << endl;
// //     else
// //       cout << "No Predecessor";
 
// //     if (suc != NULL)
// //       cout << "Successor is " << suc->key;
// //     else
// //       cout << "No Successor";
// //     return 0;
// // }





// // node* deletefrombst(node* root, int val) {
// //     if (root == NULL) {
// //         return NULL;
// //     }
// //     if (root->data == val) {
// //         if (root->left == NULL && root->right == NULL) {
// //             delete root;
// //             return NULL;
// //         }
// //         if (root->left != NULL && root->right == NULL) {
// //             node* temp = root->left;
// //             delete root;
// //             return temp;
// //         }
// //         if (root->left == NULL && root->right != NULL) {
// //             node* temp = root->right;
// //             delete root;
// //             return temp;
// //         }
// //         if (root->left != NULL && root->right != NULL) {
// //             node* temp = minValueNode(root->right);
// //             root->data = temp->data;
// //             root->right = deletefrombst(root->right, temp->data);
// //             return root;
// //         }
// //     } else if (root->data > val) {
// //         root->left = deletefrombst(root->left, val);
// //         return root;
// //     } else {
// //         root->right = deletefrombst(root->right, val);
// //         return root;
// //     }
// // }
