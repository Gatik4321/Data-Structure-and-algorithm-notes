// int this tutorial we learn about the different types of traversal in the binary trees
// Question 1
// Zig-Zag traversal
//  # include<iostream>
//  # include<vector>
//  # include<queue>
//  # include<bits/stdc++.h>
//  using namespace std;
//  class node{
//       public:
//       int data;
//       node* left;
//       node* right;
//       node(int d){
//          this->data=d;
//          this->left=NULL;
//          this->right=NULL;
//       }
//  };
//  class Solution{
//      public:
//      //function to store the Zig zag order traversal in alist
//      vector<int> zigzagtraversal(node* root){
//          vector<int> result;
//          if(root==NULL){
//              return result;
//          }
//          queue<node*> q;
//          q.push(root);
//          bool lefttoright=true;
//          while(!q.empty()){
//           int size=q.size();
//           vector<int> ans(size);

//          for(int i=0;i<size;i++){
//             node* frontnode=q.front();
//             q.pop();
//             int index=lefttoright?i:size-i-1;
//             ans[index]=frontnode->data;

//                 if(frontnode->left){
//                     q.push(frontnode->left);
//                 }
//                 if(frontnode->right){
//                     q.push(frontnode->right);
//                 }
//          }
//      .
    //direction change karni hai
//          lefttoright=!lefttoright;

//          for(auto i:ans){
//             result.push_back(i);
//          }
//         }
//         return result;
//     }

// };
// int main(){

// }

// Question 1
// Zig zag order traversal in a binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<queue>
//  # include<stack>
//  # include<vector>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int data){
//          this->data=data;
//          this->left=NULL;
//          this->right=NULL;
//      }
//  };
//  class Solution{
//   public:
//   vector<int> zigZagTraversal(node* root){
//      vector<int> result;
//      if(root==NULL){
//          return result;
//      }
//      queue<node*> q;
//      q.push(root);

//     bool lefttoright=true;
//     while(!q.empty()){
//       int size=q.size();
//       vector<int> ans(size);

//       for(int i=0;i<size;i++){
//         node* frontnode=q.front();
//         q.pop();

//         int index=lefttoright?i:size-i-1;
//         ans[index]=frontnode->data;

//         if(frontnode->left){
//             q.push(frontnode->left);
//         }
//         if(frontnode->right){
//             q.push(frontnode->right);
//         }
//         //direction cj=hange karnib hai
//         lefttoright=!lefttoright;

//         for(auto i:ans){
//             result.push_back(i);
//         }
//       }
//     }
//     return result;
//  }
// };
// int main(){

// }
// zig zag order traversal in binary tree
#include <iostream>
#include <queue>
#include <stack>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class solution
{
    vector<int> zigZagtraversal(node *root)
    {
        vector<int> result;
        if (root == NULL)
        {
            return result;
        }
        queue<node *> q;
        q.push(root);

        bool lefttoright = true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> ans(size);

            for (int i = 0; i < size; i++)
            {
                node *frontnode = q.front();
                q.pop();

                // normal insert hai ya reverse insertt hai
                int index = lefttoright ? i : size - i - 1;
                ans[index] = frontnode->data;

                if (frontnode->left)
                {
                    q.push(frontnode->left);
                }
                if (frontnode->right)
                {
                    q.push(frontnode->right);
                }
                // ab hma direction change karni hai
                lefttoright != lefttoright;
                for (auto i : ans)
                {
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};
// zig zag order traversal in a binary tree
// # include<iostream>
// # include<bits/stdc++.h>
// # include<stack>
// # include<queue>
// # include<vector>
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
//     vector<int>zigZagTraversal(node* root){
//         vector<int> result;
//         if(root==NULL){
//             return result;
//         }
//     queue<node*> q;
//     q.push(root);

//     bool lefttoright=true;

//     while(!q.empty()){
//         int size=q.size();
//         vector<int> ans(size);

//         //levelprocess
//         for(int i=0;i<size;i++){
//             node* frontnode=q.front();
//             q.pop();

//             //normal insert hai ya reverse insert
//             int index=lefttoright?i:size-i-1;
//             ans[index]=frontnode->data;

//         if(frontnode->left){
//             q.push(frontnode->left);
//         }
//         if(frontnode->right){
//             q.push(frontnode->right);
//         }

//         //direction chnage karni hai ab
//         lefttoright=!lefttoright;

//         for(auto i:ans){
//             result.push_back(i);
//         }
//         }
//     }
//     return result;
//     }
// };
// int main(){

// }
// Now we understand the logic for the boundary order traversal
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class solution
{
    // ab hum teno traversals ke function likhenge
    void traverseleft(node *root, vector<int> &ans)
    {
        // bae case agar root he NULL hai to
        if (root == NULL)
        {
            return;
        }
        // yeh ek leaf node hai
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        // then ab iska bad kuch aur chek karenge
        ans.push_back(root->data);
        if (root->left)
        {
            traverseleft(root->left, ans);
        }
        if (root->right)
        {
            traverseleft(root->right, ans);
        }
    }

    void traverseleaf(node *root, vector<int> ans)
    {
        // its a base case
        if (root == NULL)
        {
            return;
        }
        // agr yeh ek leaf node hai
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
        }
        traverseleaf(root->left, ans);
        traverseleaf(root->right, ans);
    }
    void traverseright(node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        if (root->left)
        {
            traverseright(root->right, ans);
        }
        if (root->left)
        {
            traverseright(root->left, ans);
        }
        ans.push_back(root->data);
    }

private:
    vector<int> boundary(node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        ans.push_back(root->data);

        // left side print karna hai

        traverseleft(root->left, ans);

        // ab sari leaf node print karni hai

        traverseleaf(root->left, ans);
        traverseleaf(root->right, ans);
        // ab sara right part print karn ahai

        traverseright(root->right, ans);
    }
};
int main()
{
}
// Now we will understand the boundary order traversal in the bnary tree
//   # include<iostream>
//  # include<bits/stdc++.h>
//  # include<stack>
//  # include<queue>
//  # include<vector>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int data){
//          this->data=data;
//          this->left=NULL;
//          this->right=NULL;
//      }
//  };
//  // logic for the boundary order traversa in a binary tree
//  class solution{
//      public:
//      void traverseLeft (node* root,vector<int> &ans){
//          //base case when root==NULL
//             if(root==NULL){
//              return;
//             }
//          //case of the leaf node
//          if(root->left==NULL&&root->right==NULL){
//              return;
//          }
//          ans.push_back(root->data);
//      if(root->left){
//          traverseLeft(root->left,ans);
//      }
//      else{
//          traverseLeft(root->right,ans);
//      }
//      }
//  void traverseLeaf(node* root,vector<int> &ans){
//      //base case for the leaf node
//           if(root==NULL){
//              return;
//           }
//      //now case of the Leaf node
//        if(root->left==NULL&&root->right==NULL){
//          ans.push_back(root->data);
//        }

//       traverseLeaf(root->left,ans);
//       traverseLeaf(root->right,ans);
// }
// void traverseRight(node* root,vector<int>& ans){
//     //base case
//     if(root==NULL){
//         return;
//     }
//     //case of the leaf node
//     if(root->left==NULL&& root->right==NULL){
//         return;
//     }
//     if(root->right){
//         traverseRight(root->right,ans);
//     }
//     if(root->left){
//         traverseLeft(root->left,ans);
//     }
//     ans.push_back(root->data);
// }
//     private:
//     vector<int> boundary(node* root){
//         vector<int> ans;
//         if(root==NULL)
//           return ans;

//     ans.push_back(root->data);

//     //left part mein traversal
//     traverseLeft(root->left,ans);

//     //handing the case of the leafnode using inorder traversal
//     //leftsubtree
//     traverseLeaf(root->left,ans);
//     //rightsub-tree
//     traverseLeaf(root->right,ans);

//     //Now logic for the right ordertraversal
//     traverseRight(root->right,ans);
//     }
// };
// int main(){
//     return 0;
// }

// vertical order traversal in a binary tree
// space complexity o(n)
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<vector>
//  # include<queue>
//  # include<vector>
//  # include<map>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      private:
//      node(int data){
//          this->data=data;
//          this->left=NULL;
//          this->right=NULL;
//      }
//  };
//  class solution{
//    public:
//    vector<int> verticalorder(node* root){
//      map<int,map<int,vector<int> > > nodes;
//      queue<pair<node*,pair<int,int> > >q;
//      vector<int> ans;

//     if(root==NULL){
//         return ans;
//     }
//     q.push(make_pair(root,make_pair(0,0)));

//     while(!q.empty()){
//     pair<node*,pair<int,int> > temp=q.front();
//     q.pop();
//     node* frontNode=temp.first;
//     int hd=temp.second.first;
//     int lvl=temp.second.second;

//     nodes[hd][lvl].push_back(frontNode->data);

//     if(frontNode->left){
//         q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
//     }
//     if(frontNode->right){
//         q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
//     }
//     for(auto i:nodes){
//         for(auto j:i.second){
//             for(auto k:j.second){
//                 ans.push_back(k);
//             }
//         }
//     }
//     }
//   }
// };
// int main(){
//     return 0;
// }
// vertical ordertraversal inside a binary treee
#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <vector>
#include <stack>
# include <map>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data){
     this->data=data;
     this->left=NULL;
     this->right=NULL;
    }
};
class solution{
    vector<int> verticalordertraversal(node* root){
     map<int,map<int,vector<int> > > nodes;
     queue<pair<node*,pair<int,int> > >q;
     vector<int> ans;
    if(root==NULL){
        return ans;
    }
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty()){
    pair<node*,pair<int,int> > temp=q.front();
    q.pop();
    node* frontnode=temp.first;
    int lvl=temp.second.first;
    int hd=temp.second.second;

    nodes[hd][lvl].push_back(frontnode->data);

    if(frontnode->left){
        q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
    }
    if(frontnode->right){
        q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));
    }
    for(auto i:nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }
    }
    }
};
int main()
{
}
//writng the logic for the top view of a abinary tree
//understanding the top view of a binary tree using level ordertraversal
// # include<iostream>
// # include<bits/stdc++.h>
// # include<queue>
// # include<stack>
// # include<vector>
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
//     vector<int> topview(node* root){
//         vector<int> ans;
//         if(root==NULL){
//             return ans;
//         }
//         map<int,int> topNode;
//         queue<pair<node*,int> > q;
//         q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<node*,int> temp=q.front();
//         q.pop();
//         node* frontnode=temp.first;
//         int hd=temp.second;
//         if(topNode.find(hd)==topNode.end()){
//             topNode[hd]=frontnode->data;
//         }
//     if(frontnode->left){
//         q.push(make_pair(frontnode->left,hd-1));
//     }
//     if(frontnode->right){
//         q.push(make_pair(frontnode->right,hd+1));
//     }
// for(auto i:frontnode){

// }
//     }
//     }
// };
// int main(){
//   return 0;
// }
// Top view of a binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<vector>
//  # include<queue>
//  # include<stack>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//    node(int data){
//      this->data=data;
//      this->left=NULL;
//      this->right=NULL;
//    }
//  };
//  class solution{
//      vector<int> topView(node* root){
//          vector<int> ans;
//          if(root==NULL){
//              return ans;
//          }

//         map<int,int> topNode;
//         queue<pair<node*,int> > q;

//         q.push(make_pair(root,0));

//     while(!q.empty()){
//         pair<node*,int> temp=q.front();
//         q.pop();
//         node* frontnode=temp.first;
//         int hd=temp.second;

        // if(topNode.find(hd)==topNode.end()){
        //     topNode[hd]=frontnode->data;
        // }
//     if(frontnode->left){
//         q.push(make_pair(frontnode->left,hd-1));
//     }
//     if(frontnode->right){
//         q.push(make_pair(frontnode->right,hd+1));
//     }
//     for(auto i:topnode){
//         ans.push_back(i:second);
//     }
//     return ans;
//     }
//     }
// };
// int main(){
//     return 0;
// }

// bottom view of binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<vector>
//  # include<queue>
//  # include<stack>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//    node(int data){
//      this->data=data;
//      this->left=NULL;
//      this->right=NULL;
//    }
//  };
//  class solution{
//      public:
//  vector<int> topView(node* root){
//      vector<int> ans;
//      if(root==NULL){
//          return ans;
//      }

//     map<int,int> topNode;
//     queue<pair<node*,int> > q;

//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<node*,int> temp=q.front();
//         q.pop();
//         node* frontnode=temp.first;
//         int hd=temp.second;

//         topNode[hd]=frontnode->data;

//         if(frontnode->left){
//             q.push(make_pair(frontnode->left,hd-1));
//         }
//         if(frontnode->right){
//             q.push(make_pair(frontnode->right,hd+1));
//         }
//     }
// }
// };
// int main(){
//     return 0;
// }

// Question 1
// ZigZag ordertraversal in a binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<vector>
//  # include<queue>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int d){
//          this->data=d;
//          this->left=NULL;
//          this->right=NULL;
//      }
//  };
//  class solution{
//      public:
//      vector<int> zigZagorder(node* root){
//          vector<int> result;
//          if(root==NULL){
//              return result;
//          }
//          queue<node*> q;
//          q.push(root);

//         bool lefttoright=true;

//         while(!q.empty()){
//             int size=q.size();
//             vector<int> ans(size);

//             for(int i=0;i<size;i++){
//                 node * frontnode=q.front();
//                 q.pop();

//                 //normal insert karna hai ya reverse insert karna hai
//                 int index=lefttoright ? i: size-i-1;
//                  ans[index]=frontnode->data;

//                  if(frontnode->left){
//                     q.push(frontnode->left);
//                  }
//                  if(frontnode->right){
//                     q.push(frontnode->right);
//                  }

//             //direction change karne ke lia
//             lefttoright!=lefttoright;

//         for(auto i:ans){
//             result.push_back(i);
//         }
//             }
//             return result;
//         }
//     }
// };
// int main(){
//     return 0;
// }

// Boundary traversal in a binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<vector>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int data){
//          this->data=data;
//          this->left=NULL;
//          this->right=NULL;
//      }
//  };
//  class solution{
//      public:
//      void traverseLeft(node* root,vector<int> &ans){
//         if(root==NULL||(root->left==NULL&&root->right==NULL)){
//          return;
//         }
//         ans.push_back(root->data);

//        if(root->left){
//         traverseLeft(root->left,ans);
//        }
//        else{
//         traverseLeft(root->right,ans);
//        }
//     }
//     void traverseLeaf(node* root,vector<int> &ans){
//         if(root==NULL){
//             return;
//         }
//         if(root->left==NULL&&root->right==NULL){
//             ans.push_back(root->data);
//             return;

//         }

//         traverseLeaf(root->left,ans);
//         traverseLeaf(root->left,ans);
//     }
//     void traverseRight(node* root,vector<int> ans){
//         if(root==NULL){
//             return;
//         }
//         if(root->left==NULL&&root->right==NULL){
//             return;
//         }
//         if(root->right){
//             traverseRight(root->right,ans);
//         }
//         else{
//             traverseRight(root->left,ans);
//         }

//         //wapas aagay
//         ans.push_back(root->data);
//     }
//     private:
//     vector<int> boundary(node* root){
//         vector<int> ans;
//         if(root==NULL){
//             return ans;
//         }
//     ans.push_back(root->data);

//     //left part mein traverse and store karo
//     traverseLeft(root->left, ans);

//     //left subtree
//     traverseLeaf(root->left, ans);
//     //right subtree
//     traverseLeaf(root->right, ans);

//     //traverse right
//     traverseRight(root->right,ans);
//     }
// };
// int main(){

// }

// Question 3
// Vertical traversal of a binary tree
// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// #include <vector>
// #include <map>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// class solution
// {
// public:
//     vector<int> verticalorder(node *root)
//     {
//         map<int, map<int, vector<int>>> nodes;
//         queue<pair<node *, pair<int, int>>> q;
//         vector<int> ans;

//         // base case when root is null
//         if (root == NULL)
//         {
//             return ans;
//         }

//         q.push(make_pair(root, make_pair(0, 0)));
//         while (!q.empty())
//         {
//             pair<node *, pair<int, int>> temp = q.front();
//             q.pop();
//             node *frontnode = temp.first;
//             int hd = temp.second.first;
//             int lvl = temp.second.second;

//             nodes[hd][lvl].push_back(frontnode->data);

//             if (frontnode->left)
//             {
//                 q.push(make_pair(frontnode->left, make_pair(hd - 1, lvl + 1)));
//             }

//             if (frontnode->right)
//             {
//                 q.push(make_pair(frontnode->right, make_pair(hd - 1, lvl + 1)));
//             }
//         for(auto i:nodes){
//             for(auto j:i.second){
//                 for(auto k:j.second){
//                     ans.push_back(k);
//                 }
//             }
//         }
//         return ans;
//         }
//     }
// };
// int main()
// {
//     return 0;
// }

// Question 4 and 5

// We have to find the top and bottom view of the
// binary tree
// we have to find the top view of a binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<vector>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int d){
//          this->data=data;
//          this->left=NULL;
//          this->right=NULL;
//      }
//  };
//  class solution{
//    vector<int> topView(node* root){
//      vector<int> ans;
//      //base case
//      if(root==NULL){
//          return ans;
//      }
//      map<int,int> topNode;
//      queue<pair<node*,int> > q;

//     q.push(make_pair(root,0));

//     while(!q.empty()){
//     pair<node*,int> temp=q.front();
//     q.pop();
//     node* frontnode=temp.first;
//     int hd=temp.second;

//     //if onr value is present for the horizontal distance then do nothing
//        these are the recursive calls for the left and right
//     if(topNode.find(hd)==topNode.end())
//              topNode[hd]=frontnode->data;

//     if(frontnode->left){
//         q.push(make_pair(frontnode->left, hd-1));
//     }
//     if(frontnode->right){
//         q.push(make_pair(frontnode->right,hd+1));
//     }
//     }
//   }
// };
// int main(){
//     return 0;
// }

// Question 5
// bottom view of a binary tree
// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// class solution
// {
//     // bottom view of a binary tree
//     vector<int> bottomView(node *root)
//     {
//         vector<int> ans;
//         if (root == NULL)
//         {
//             return ans;
//         }
//         map<int, int> topNode;
//         queue<pair<node *, int>> q;

//         q.push(make_pair(root, 0));

//         while (!q.empty())
//         {
//         pair<node *, int> temp=q.front();
//         q.pop();
//         node* frontnode=temp.first;
//         int hd=temp.second;

//         topNode[hd]=frontnode->data;

//         if(frontnode->left){
//             q.push(make_pair(frontnode->left,hd-1));
//         }
//         if(frontnode->right){
//             q.push(make_pair(frontnode->right, hd+1));
//         }
//     for(auto i:topNode){
//         ans.push_back(i.second);
//     }
//     return ans;
//         }
//     }
// };
// int main()
// {
// }

// Right view of a binary tree
//  # include<iostream>
//  # include<bits/stdc++.h>
//  # include<queue>
//  using namespace std;
//  class node{
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int data){
//       this->data=data;
//       this->left=NULL;
//       this->right=NULL;
//      }
//  };
//  class solution{
//      void solve(node* root,vector<int>& ans,int level){
//          //base case
//          if(root==NULL){
//              return;
//          }
//        //weentered int a newlevel
//        if(level==ans.size()){
//          ans.push_back(root->data);

//     solve(root->right,ans,level+1);
//     solve(root->left,ans,level+1);
//       }
//     }
//     vector<int> rightView(node* root){
//         vector<int> ans;
//         solve(root,ans,0);
//         return ans;
//     }
// };
// int main(){

// }
//writing code for the right view of the binary tree
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
//    public:
//     void solve(node* root,vector<int> &ans,int level){
//            if(root==NULL){
//             return;
//            }
//         if(level==ans.size()){
//             ans.push_back(root->data);
//         }
//     solve(root->left,ans,level+1);
//     solve(root->right,ans,level+1)
//    }
//    vector<int> rightview(node* root){
//     vector<int> ans;
//     solve(root,ans,0);
//    }
// };
// int main(){

// }
// Writing the code for the left view of a binary tree
// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// class solution
// {
// public:
// void solve(node* root,vector<int> &ans,int level){
//     //base case
//     if(root==NULL){
//         return;
//     }

//     if(level==ans.size()){
//         ans.push_back(root->data);
//     }

//     solve(root->left,ans,level+1);
//     solve(root->right,ans,level+1);
// }
// vector<int> leftview(node* root){
//     vector<int> ans;
//     solve(root,ans,0);
//     return ans;
// }
// };
// int main()
// {
//     return 0;
// }

// diagoanl order traversal inside a binary tree
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
class solution
{
    vector<int> diagonal(node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return;
        }
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *curr = q.front();
            q.pop();
            while (curr != NULL)
            {
                if (curr->left != NULL)
                {
                    q.push(curr->left);
                }
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return ans
};
int main()
{
    return 0;
}