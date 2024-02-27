//Question 1
//blood line in a binary tree
// # include<iostream>
// # include<bits/stdc++.h>
// # include<queue>
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
// class solution{
//     int sumoflongestrootofleafpath(node* root){
//         int len=0;
//         int maxlen=0;

//         int sum=0;
//         int max
//     }
// }
// class solution{
//     public:
// void solve(node* root,int sum,int &maxsum,int len,int maxlen){
//     if(root==NULL){
//         if(len>maxlen){
//             maxlen=len;
//             maxsum=sum;
//         }
//         else if(len==maxlen){
//             maxsum=max(sum,maxsum);
//         }
//         return;
//     }
//     //increamenting the sum
//     sum=sum+root->data;

//     //recursive calls on the right and the left side
//     solve(root->left,sum,maxsum,len+1,maxlen);
//     //recursive call on the left side of the binary tre
//     solve(root->left,sum,maxsum,len+1,maxlen);
//     }
// //base case
// int sumoflongrootoleafpath(node* root){

// //it is used to store the current length and the maximum length
//     int len=0;
//     int maxlen=0;

// //it is used to store the current and the maximum sum
//     int sum=0;
//     int maxsum=INT_MIN;

//     solve(root,sum,maxsum,len,maxlen);
//     return maxsum;
// }
// };
// int main(){

// }


// //Question 2 
// //find the least common ansestor of a binary tree
// //for finding the lca inside a binary tree
// # include<iostream>
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
// class solution{
//       public:
//     node* lca(node* root,int n1,int n2){
//         if(root==NULL){
//             return NULL;
//         }
//         if(root->data==n1||root->data==n2){
//             return root;
//         }
//         //recursive call for the leftart of the binarytree
//         node* leftans=lca(root->left,n1,n2);
//         //Recursive call for the right part of the binarytree
//         node* rightans=lca(root->right,n1,n2);

//         if(leftans!=NULL&&rightans!=NULL){
//             return root;
//         }
//         else if(leftans!=NULL&&rightans==NULL){
//             return leftans;
//         }
//         else if(leftans==NULL&&rightans!=NULL){
//             return rightans;
//         }
//         else{
//             return NULL;
//         }
//     }
// };
// int main(){
//     return 0;
// }


//Question 3 
//To Find the K sum paths inside a binary tree
//We will use the recursive approach to solve this question
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// //base case
// class node{
//         public:
//         int data;
//         node* left;
//         node* right;
//     node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//     void solve(node *root,int k,int &count,vector<int> path){
//             //base case
//             if(root==NULL){
//                 return;
//             }
//         path.push_back(root->data);

//     //left
//     solve(root->left,k,count,path);
//     //Right
//     solve(root->right,k,count,path);

//     //check for the kth sum path
//     int size=path.size();
//     int sum=0;
//     for(int i=size-1;i>=0;i--){
//         sum=sum+path[i];
//         if(sum==k){
//             count++;
//         }
//     }
//     path.pop_back();
//     }
//     int sumkth(node* root,int k){
//         vector<int> path;
//         int count=0;
//         solve(root,k,count,path);
//         return count;
//     }
// };
// int main(){
//     return 0;
// }


//Question 4
//it is about determining the kth ancestor of a particular node
// # include<iostream>
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
// class solution{
//     public:
// node* solve(node* root,int &k,int node){
//     if(root==NULL){
//         return;
//     }
//     if(root->data==node){
//         return root;
//     }
//     //recursive call for the leftside
//     node* leftans=solve(root->left,k,node);
//     node* rightans=solve(root->right,k,node);


//     if(leftans!=NULL&&rightans==NULL){
//         k--;
//         if(k<=0){
//             k=INT_MAX;
//             return root;
//         }
//         return leftans;
//     }
//     if(leftans==NULL&&rightans!=NULL){
//         k--;
//         if(k<=0){
//             k=INT_MAX;
//             return root;
//         }
//         return rightans;
//     }
//     return NULL;
// }
//     int KthAncestor(node* root,int k,int node){
//         node* ans = solve(root,k,node);
//         if(ans==NULL||ans->data==node){
//             return -1;
//         }
//         else{
//             return ans->data;
//         }
//     }
// };
// int main(){
//     return 0;
// }



//Question 5
//Maximum Sum of the nonadjacent nodes.cpp
//We have to find the maximum sum for the non adjacent nodes
// # include<iostream>
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
// class Solution{
//     public:
//     pair<int,int> solve(node* root){
//      //base case for the given Question
//      if(root==NULL){
//         pair<int,int> p=make_pair(0,0);
//         return p;
//      }
//         //recursive call for left
//         pair<int,int> left=solve(root->left);
//         pair<int,int> right=solve(root->right);

//         pair<int,int> res;
//   //case of including the node at the current level
//   res.first=root->data+left.second+right.second;
//   res.second=max(left.first,left.second)+max(right.first,right.second);
//      return res;
//     }
//     int getMaxSum(node* root){
//         pair<int,int> ans=solve(root);
//         return max(ans.first,ans.second);
//     }
// };
// int main(){
//     return 0;
// }