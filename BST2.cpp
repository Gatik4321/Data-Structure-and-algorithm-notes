//Binary search problem codes


//problem 1
//validate BST
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//   public:
//   int data;
//   node* left;
//   node* right;
//     node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//    public:
//   bool isBST(node* root,int min,int max){
//          if(root==NULL){
//             return true;
//          }
//       if(root->data>=min && root->data<=max){
//         bool left=isBST(root->left,min,root->data);
//         bool right=isBST(root->right,root->data,max);
//         return (left&&right);
//       }
//       else{
//         return false;
//       }
//   }
//    bool validateBST(node* root){
//     return isBST(root,INT_MIN,INT_MAX);
//    }
// };
// int main(){

// }


//problem 2 is to find the kth samllest element inside the bst
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
   node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
   }
};
class solution{
    public:
    int solve(node* root,int& i,int k){
          if(root==NULL){
            return -1;
          }
          //L
         int left=solve(root->left,i,k);

         if(left!=-1){
            return left;
         }
          //N
          i++;
          if(i==k){
            return root->data;
          }
          //R
          //now recursive call for the right
          return solve(root->right,i,k);
    }
    int Kthsmallestelement(node* root,int k){
        int i=0;
        int ans=solve(root,i,k);
        return ans;
    }
};
int main(){

}

//Question 3
//For finding the lowest Common ancestors inside the bst
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
 node* LCAinbst(node* root,node* p,node* q){
          //base case
        if(root==NULL){
            return NULL;
        }
    if(root->data<p->data && root->data<q->data){
        return LCAinbst(root->right,p,q);
    }
    if(root->data>p->data && root->data>q->data){
        return LCAinbst(root->left,p,q);
    }
    if(root->data>p->data&&root->data<q->data || root->data<p->data&&root->data>q->data){
        //this is the LCA of the binary list
        return root;
            }
}
int main(){
    return 0;
}