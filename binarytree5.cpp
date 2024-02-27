//Question of constructing trees from the inorder and preorder traversal
//Time Complexity of the logic become o(n2)  due to function calling and the recursion
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
    //in this function we will write the logic to solve the problem
    int findposition(int in[],int element,int n){
        for(int i=0;i<n;i++){
            if(in[i]==element){
                return i;
            }
        }
    }
    node* solve(int in[],int pre[],int index,int inorderStart,int inOrderend,int n){
        //condition in which question can end
        if(index>=n||inorderStart>inOrderend){
            return NULL;
        }
    int element=pre[index++];
    node* temp=new node(element);
    int position=findposition(in,element,n);

    //now recursive callings for the function
    temp->left=solve(in,pre,index,inorderStart,position-1,n);
    temp->right=solve(in,pre,index,position+1,inOrderend,n);

    return temp;
    }
   node* builttree(int in[],int pre[],int n){
        //firstly finding the index for the preorder
        int preOrderindex=0;
        node* ans=solve(in,pre,preOrderindex,0,n-1,n);
        return ans;
   }
};
int main(){
    return 0;
}

//Question 1
//To reduce the time complexity we can solve the same question with the help of maps
// mapping will only ruone time and hence address get stored which help in addressing
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
    //in this function we will write the logic to solve the problem
    void createMapping(int in[],map<int,int> &nodetoindex,int n){
        for(int i=0;i<n;i++){
            nodetoindex[in[i]]=i;
        }
    }
    node* solve(int in[],int pre[],int index,map<int,int> &nodetoindex,int inorderStart,int inOrderend,int n){
        //condition in which question can end
        if(index>=n||inorderStart>inOrderend){
            return NULL;
        }
    int element=pre[index++];
    node* temp=new node(element);
    int position=nodetoindex[element];

    //now recursive callings for the function
    temp->left=solve(in,pre,index,nodetoindex,inorderStart,position-1,n);
    temp->right=solve(in,pre,index,nodetoindex,position+1,inOrderend,n);

    return temp;
    }
   node* builttree(int in[],int pre[],int n){
        //firstly finding the index for the preorder
        int preOrderindex=0;
        map<int,int> nodetoIndex;
        createMapping(in,nodetoIndex,n);
        node* ans=solve(in,pre,preOrderindex,nodetoIndex,0,n-1,n);
        return ans;
   }
};
int main(){
    return 0;
}
//above we have seen how to create a solution using mapping
//Constructing the tree from inorder and preorder traversal
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class solution{
    public:
   void createmapping(int in[],map<int,int> nodetoparent,int n){
        for(int i=0;i<n;i++){
               nodetoparent[in[i]]=i;
        }
    }
    node* solve(int in[],int pre[],int index,int inorderstart,int inorderend,int n,map<int,int> nodetoparent){
        if(index>=n||inorderstart>inorderend){
            return NULL;
        }
        int element=pre[index++];
        node* temp=new node(element);
        int position=nodetoparent[element];

        temp->left=solve(in,pre,index,0,position-1,n,nodetoparent);
        temp->right=solve(in,pre,position+1,inorderend,n,nodetoparent);

        return temp;
    }
     node* builttree(int in[],int pre[],int n){
       int preorderindex=0;
       map<int,int> nodetoparent;
       createmapping(in,nodetoparent,n);
       node* ans=solve(in,pre,preorderindex,0,n-1,n,nodetoparent);
       return ans;
     }
};
int main(){
    return 0;
}
//Question 2
//construct a binary tree
//using inorder and postordertraversal
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
    //in this function we will write the logic to solve the problem
    void createMapping(int in[],map<int,int> &nodetoindex,int n){
        for(int i=0;i<n;i++){
            nodetoindex[in[i]]=i;
        }
    }
    node* solve(int in[],int pre[],int index,map<int,int> &nodetoindex,int inorderStart,int inOrderend,int n){
        //condition in which question can end
        if(index<0 ||inorderStart>inOrderend){
            return NULL;
        }
    int element=pre[index--];
    node* temp=new node(element);
    int position=nodetoindex[element];

    //now recursive callings for the function
    temp->right=solve(in,pre,index,nodetoindex,position+1,inOrderend,n);
    temp->left=solve(in,pre,index,nodetoindex,inorderStart,position-1,n);
    return temp;
    }
   node* builttree(int in[],int post[],int n){
        //firstly finding the index for the preorder
        int postOrderindex=n-1;
        map<int,int> nodetoIndex;
        createMapping(in,nodetoIndex,n);
        node* ans=solve(in,post,postOrderindex,nodetoIndex,0,n-1,n);
        return ans;
   }
};
int main(){
    return 0;
}