//in this tutorial we will solve some questions related to the binary tree
//1st Question
//is to find the heinght of the binary tree
// # include<iostream>
// # include<queue>
// # include<stack>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//       public:
//       int data;
//       node* left;
//       node* right;
//       node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//       }
// };

//this is the main logic if you want to find the height of any of the binary tree
// class solution{
//       public:
//       int height(struct node* root){
//           //intianl case if the root of the binary tree is null
//           if(root==NULL){
//             return 0;
//           }
//           else{
//             int left=height(root->left);
//             int right=height(root->right);
//             int ans=max(left,right)+1;
//             return ans;
//           }
//       }
// };
// int main(){

// }
//finding the height of the binary tree
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// int height(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     else{
//         int left=height(root->left);
//         int right=height(root->right);
//         int ans=max(left,right)+1;
//         return ans;
//     }
// };
// int main(){
//     return 0;
// }
//finding the height of the binarytree
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// int height(struct node* root){
//     //first case is that we are finding the height but the root is NULL
//     if(root==NULL){
//         return 0;
//     }
// else{
//     int left=height(root->left);
//     int right=height(root->right);
//     int ans=max(right,left)+1;
//     return ans;
// }
// }
// int main(){

// }
//Question 2 finding the diamerter of the binary tree
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//     private:
//       int height(struct node* root){
//         if(root==NULL){
//             return 0;
//         }
//         else{
//             int left=height(root->left);
//             int right=height(root->right);
//             int ans=max(left,right)+1;
//             return ans;
//         }
//     }
//     public:
//     int diameter(node* root){
//         if(root==NULL){
//             return 0;
//         }
//         else{
//             int opt1=diameter(root->left);
//             int opt2=diameter(root->right);
//             int opt3=height(root->left)+height(root->right)+1;
//             int ans=max(opt1,max(opt2,opt3));
//             return ans;                  
//         }
//     }
// };
// int main(){

// }
//Question 2 is the diameter of the binary tree
//Approach 1
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//  private:
//       int height(struct node* root){
//         if(root==NULL){
//             return 0;
//         }
//         else{
//             int left=height(root->left);
//             int right=height(root->right);
//             int ans=max(left,right)+1;
//             return ans;
//         }
//     }
// int diamater(struct node* root){
//        if(root==NULL){
//         return 0;
//        }
//        else{
//     int opt1=diamater(root->left);
//     int opt2=diamater(root->right);
//     int opt3=height(root->left)+height(root->right)+1;
//     int ans=max(opt1,max(opt2,opt3));
//     return ans;
//        }
// }
// };
// int main(){
//     return 0;
// }
//Question 2
//finding the diameter of the binary tree
//#Approach 1
//now writing the brute force approach to finding the diameter of the binary tree
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//   public:
//   int data;
//   node* left;
//   node* right;
//   node(int d){
//     this->data=d;
//     node* left=NULL;
//     node* right=NULL;
//   }
// };
// class solution{
//    private:
//     int height(struct node* root){
//           //intianl case if the root of the binary tree is null
//           if(root==NULL){
//             return 0;
//           }
//           else{
//             int left=height(root->left);
//             int right=height(root->right);
//             int ans=max(left,right)+1;
//             return ans;
//           }
//       }
//    public:
//    int diameter(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int op1=diameter(root->left);
//     int op2=diameter(root->right);
//     int op3=height(root->left)+height(root->right)+1;
//     int ans=max(op1,max(op2,op3));
//     return ans;
//    }
// };
// int main(){

// }

//now we are solving this question with the help of time optimisation approach
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//   public:
//   pair<int,int> diameterFast(node* root){
//     if(root==NULL){
//         pair<int,int> p=make_pair(0,0);
//         return p;
//     }
//     else{
//         pair<int,int> left=diameterFast(root->left);
//         pair<int,int> right=diameterFast(root->right);

//         int opt1=left.first;
//         int opt2=left.second;
//         int opt3=left.second+right.second+1;

//         pair<int,int> ans;
//         ans.first=max(opt1,max(opt2,opt3));
//         ans.second=max(left.second,right.second)+1;
//         return ans;
//     }
//   }
//   int diameter(node* root){
//     return diameterFast(root).first;
//   }
// };
// int main(){

// }
//Approach to find the diamater of the binary tree
//Approach 2
// # include<iostream>
// # include<bits/stdc++.h>
// # include<queue>
// # include<stack>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//   pair<int,int> diameterFast(node* root){
//     if(root==NULL){
//         pair<int,int> p=make_pair(0,0);
//         return p;
//     }
//     else{
//         pair<int,int> left=diameterFast(root->left);
//         pair<int,int> right=diameterFast(root->right);

//         int opt1=left.first;
//         int opt2=right.first;
//         int opt3=(left.second+right.second)+1;

//         //return type ans
//         pair<int,int> ans;
//         ans.first=max(opt1,max(opt2,opt3));
//         ans.second=max(left.second,right.second)+1;
//         return ans;
//     }
//   }
//   int diameter(node* root){
//     return diameterFast(root).first;
//   }
// };
// int main(){
//     return 0;
// }
//above we have seen the brute force approach to find the diameter of the binary tree
//now we see the approach 2
//Approach2 is basically called pairing APPROACH
//dimater fast approach
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//     pair<int,int> diameterfast(node* root){
//         if(root==NULL){
//             pair<int,int> p=make_pair(0,0);
//             return p;
//         }
//         else{
//             pair<int,int> left=diameterfast(root->left);
//             pair<int,int> right=diameterfast(root->right);

//             int op1=left.first;
//             int op2=right.first;
//             int op3=(left.second+right.second)+1;

//             pair<int,int> ans;
//             ans.first=max(op1,max(op2,op3));
//             ans.second=max(left.second,right.second)+1;

//             return ans;
//         }
//     }
//     int diameter(node* root){
//         return diameterfast(root).first;
//     }
// };
// int main(){
// }
//Brute Force Approach to check wether the tree is balanced or not
//Approah 1
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
//     private:
//     int height(node* root){
//         if(root==NULL){
//             return 0;
//         }
//         else{
//             int left=height(root->left);
//             int right=height(root->right);
//             int ans=max(left,right)+1;
//             return ans;
//         }
//     }
//     public:
// bool isBalanced(node* root){
//       //base case
//       if(root==NULL){
//         return true;
//       }
//       else{
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
//         bool diff=(height(root->left)-height(root->right)<=1);
//       if(left&&right&&diff){
//         return 1;
//       }
//       else{
//         return false;
//       }
//       }
// }
// };
// int main(){
//brute force Approach to check that a tree is balanced or not
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
class solution{
    private:
    int height(node* root){
        if(root==NULL){
            return 0;
        }
        else{

        }
    }
    public:
  bool isBalanced(node* root){
    if(root==NULL){
        return true;
    }
    else{
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=(height(root->left)+height(root->right)<=1);
        if(left&&right&&diff){
            return 1;
        }
        else{
            return 0;
        }
    }
  }
};
int main(){
    return 0;
}
// }
//Brute force Approach to check that tree is balanced or not
//Approach 1
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
//     int height(struct node* root){
//           //intianl case if the root of the binary tree is null
//           if(root==NULL){
//             return 0;
//           }
//           else{
//             int left=height(root->left);
//             int right=height(root->right);
//             int ans=max(left,right)+1;
//             return ans;
//           }
//       }
//  bool isBalanced(node* root){
//     if(root==NULL){
//         return true;
//     }
//     else{
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
//         bool diff= abs (height(root->left)-height(root->right))<=1;
//     }
//     if(left && right && diff){
//         return true;
//     }
//     else{
//         return -1;
//     }
//  }
// };
// int main(){

// }

//optimised approach to check the balanced trees
// time complexityo(n)
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// //optimised Approach to check wether the binary tree is balanced or not
// class solution{
// pair<bool,int> isBalancedFast(node* root){
//     //base case
//     if(root==NULL){
//         pair<bool,int> p=make_pair(true,0);
//         return p;
//     }
//     else{
//         pair<bool,int> left=isBalancedFast(root->left);
//         pair<bool,int> right=isBalancedFast(root->right);

//         bool left1=left.first;
//         bool right1=right.first;

//         bool diff=(abs(left.second-right.second)<=1);
//         ans.second=(left.second+right.second)+1;

//         if(left&&right&&diff){
//             ans.first=1;
//         }
//         else{
//             ans.first=0;
//         }
//     }
// }
// };
// class solution{
//      pair<bool,int> isBalancedfast(node* root){
//         if(root==NULL){
//             pair<bool,int> p=make_pair(true,0);
//             return p;
//         }
//         pair<bool,int> left=isBalancedfast(root->left);
//         pair<bool,int> right=isBalancedfast(root->right);

//         bool left1=left.first;
//         bool right1=right.first;

//         bool diff=abs(left.second-right.second)<=1;

//         pair<bool,int> ans;
//         ans.second=max(left.second+right.second)+1;

//         if(left&&right&&diff){
//             ans.first=1;
//         }
//         else{
//             ans.first=false;
//         }
//      }
// };
// int main(){
//     return 0;
// }
//Approach 2 for the question the binary trees are balnced or not
//optimised Approach
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* root;
//     node* left;
//     node(int d){
//         this->data=d;
//         node*left=NULL;
//         node*right=NULL;
//     }
// };
// class solution{
//    public:
//    pair<bool,int> isBalancedFast(node* root){
//     if(root==NULL){
//         pair<bool,int> p=make_pair(true,0);
//         return p;
//     }
//     else{
//         pair<bool,int> left=isBalancedFast(root->left);
//         pair<bool,int> right=isBalancedFast(root->right);

//         bool leftans=left.first;
//         bool rightans=right.first;

//         bool diff=abs(left.second-right.second)<=1;

//         pair<bool,int> ans;
//         ans.second=max(left.second,right.second)+1;


//         if(leftans&&rightans&&diff){
//             ans.first=1;
//         }
//         else{
//             ans.first=false;
//         }
//     }
//    }
// };
// int main(){

// }
//Now Question 4
//check wether the given two binary trees are identical or not
// 
Question 5 sum equal to root element
# Approach is optimised
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class node{
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
  pair<bool,int> isSumtree(node* root){
    //base case when root==NULL
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
   //case of a leaf node
   if(root->left==NULL&&root->right==NULL){
    pair<bool,int> p=make_pair(true,0);
    return p;
   }
    pair<bool,int> left1=isSumtree(root->left);
    pair<bool,int> right1=isSumtree(root->right);
    bool gatik1=left1.first;
    bool gatik2=right1.first;

    bool condn=root->data==left1.second+right1.second;
    pair<bool,int> ans;
  }
};
class solution{
    pair<bool,int> isSumTreefast(node* root){
        //base case
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        if(root->left==NULL&&root->right==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        pair<bool,int> left1=isSumTreefast(root->left);
        pair<bool,int> right1=isSumTreefast(root->right);

         bool gatik1=left1.first;
         bool gatik2=right1.first;

         bool condn=root->data==left1.second+right1.second;
         pair<bool,int> ans;
    }
};
int main(){
    return 0;
}
//Question the binary tree
//Question is that wether the given two binary trees re identical or not
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
//     bool isIndentical(node* r1,node*r2){
//         if(r1==NULL&&r2==NULL){
//             return true;
//         }
//         if(r1==NULL&&r2!=NULL){
//             return false;
//         }
//         if(r1!=NULL&&r2==NULL){
//             return false;
//         }
//         bool left=isIndentical(r1->left,r2->left);
//         bool right=isIndentical(r1->right,r2->right);
//           bool value=r1->data==r2->data;

//     if(left&&right&&value){
//         return true;
//     }
//     else{
//         return false;
//     }
//     }
// };
// int main(){
//     return 0;
// }
//bool to check wether the binary trees are identical or not
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//   public:
//   int data;
//   node* left;
//   node* right;
//   node(int d){
//     this->data=d;
//     this->left=NULL;
//     this->right=NULL;
//   }
// };
// class solution{
//    public:
//    bool isIdenticalFast(node* r1,node* r2){
//     if(r1==NULL&&r2==NULL){
//         return true;
//     }
//     if(r1==NULL&&r2!=NULL){
//         return false;
//     }
//     if(r1!=NULL&&r2==NULL){
//         return false;
//     }
//     else{
//         bool left=isIdenticalFast(root->left);
//         bool right=isIdenticalFast(root->right);
//         bool value=r1->data==r2->data;
//     if(left&&right&&value){
//         return true;
//     }
//     else{
//         return false;
//     }
//     }
//    }
// };
// int main(){
//     return 0;
// }
//Question 5 wether the root element 
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// class solution{
// pair<bool,int>isSumTreeFast(node* root){
//       if(root==NULL){
//         pair<bool,int> p= make_pair(true,0);
//         return p;
//       }
//       if(root->left==NULL&&root->right==NULL){
//         pair<bool,int> p=make_pair(true,0);
//         return p;
//       }
//       pair<bool,int> leftAns=isSumTreeFast(root->left);
//       pair<bool,int> rightAns=isSumTreeFast(root->right);
//       bool isleft=leftAns.first;
//       bool isSecond=rightAns.first;

//       bool condn=root->data==leftAns.second+rightAns.second;
//       pair<bool,int> ans;
//       if(is)
// }
// };
// int main(){
//     return 0;
// }
