// // Now we learn the implememnttaion of the binary tree
// # include<iostream>
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
// node* buildtree(node* root){
//    cout<<"Enter the data: "<<endl;
//    int data;
//    cin>>data;
//    root=new node(data);
//    if(data==-1){
//     return NULL;
//    }
//    cout<<"Enter data for inserting in left"<<data<<endl;
//    root->left=buildtree(root->left);
//    cout<<"Enter data for inserting in right"<<data<<endl;
//    root->right=buildtree(root->right);
//    return root;
// }
// int main(){
//      node* root=NULL;
//      root=buildtree(root);
// }
// //construction of a binary tree
// # include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
// node(int d){
//     this->data=d;
//     this->left=NULL;
//     this->right=NULL;
// }
// };
// node* builttree(node* root){
//     cout<<"Enter the data:"<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data==-1){
//         return NULL;
//     }
//     cout<<"Enter the data for inserting in the left of the data"<<data<<endl;
//     root->left=builttree(root->left);
//     cout<<"Enter the data for inserting in the right of the data"<<endl;
//     root->right=builttree(root->right);
// }
// int main(){

// }
// // understanding the construction of the binary tree
// #include <iostream>
// #include <queue>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// // Now we are implementing the level order traversal using binary trees
// // in these we are implmenting dividing the code i different levels
// node *buildtree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "Enter data for inserting the left of" << data << endl;
//     root->left = buildtree(root->left);
//     cout << "Enter data for inserting in right of" << data << endl;
//     root->right = buildtree(root->right);
//     return root;
// }
// void levelordertraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         { // purana level completelty travel ho chuk hai
//             cout << endl;
//             if (!q.empty())
//             {
//                 // queue still has ome child nodes
//                 q.push(NULL);
//             }
//         }
//         else{
//              cout << temp->data << " ";
//         if (temp->left)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right)
//         {
//             q.push(temp->right);
//         }
//         }
//     }
// }
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
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
//      postorder(root->right);
//       cout<<root->data<<" ";
// }
// void builtfromlevelordertraversal(node* root){
//         queue<node*> q;
//         cout<<"enter a data for root"<<endl;
//         int data;
//         cin>>data;
//         root=new node(data);
//         q.push(root);

//         while(!q.empty()){
//             node* temp=q.front();
//             q.pop();

//         cout<<"Enter left node for:"<<temp->data<<endl;
//         int leftdata;
//         cin>>leftdata;

//         if(leftdata!=-1){
//             temp->left=new node(leftdata);
//             q.push(temp->left);
//         }
//         cout<<"Enter right node for:"<<temp->data<<endl;
//         int rightdata;
//         cin>>leftdata;

//         if(rightdata!=-1){
//             temp->right=new node(rightdata);
//             q.push(temp->right);
//         }
//         }
// }
// int main()
// {
//     node *root = NULL;
//     root = buildtree(root);
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     levelordertraversal(root);
//     cout<<"inorder traversal is"<<endl;
//     inorder(root);
//     preorder(root);
//     postorder(root);
//     builtfromlevelordertraversal(root);
// }
// // Now understanding the complete implementation of the binary trees
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;
//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// // this is how we implement a simple binary tree
// node *binarytree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     else
//     {
//         cout << "Enter the value to write in the left of: " << data << endl;
//         root->left = binarytree(root->left);
//         cout << "Enter the data to write in the right of: " << data << endl;
//         root->right = binarytree(root->right);
//     }
// }
// // we always perform level order traversal of a binary tree using the concept of the queue
// void levelordertraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         { // purana level completelty travel ho chuk hai
//             cout << endl;
//             if (!q.empty())
//             {
//                 // queue still has ome child nodes
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }
// void inorder(node* root){
// if(root==NULL){
//     return;
// }
// else{
//     inorder(root->left);
//     cout<<root->data;
//     inorder(root->right);
// }
// }
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     else{
//         cout<<root->data;
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     else{
//         postorder(root->left);
//         postorder(root->right);
//         cout<<root->data;

//     }
// }
// void builtfromlevelordertraversal(node* root){
//         queue<node*> q;
//         cout<<"enter a data for root"<<endl;
//         int data;
//         cin>>data;
//         root=new node(data);
//         q.push(root);

//         while(!q.empty()){
//             node* temp=q.front();
//             q.pop();

//         cout<<"Enter left node for:"<<temp->data<<endl;
//         int leftdata;
//         cin>>leftdata;

//         if(leftdata!=-1){
//             temp->left=new node(leftdata);
//             q.push(temp->left);
//         }
//         cout<<"Enter right node for:"<<temp->data<<endl;
//         int rightdata;
//         cin>>leftdata;

//         if(rightdata!=-1){
//             temp->right=new node(rightdata);
//             q.push(temp->right);
//         }
//         }
// }
// void reverselevelorder(node* root){
//     stack<node*> S;
//     queue<node*> q;
//     q.push(root);

//     while(Q.empty()==false){
//         root=Q.front();

//     }
// }
// if we have to use the level order traversal for printing the elements in the reverse orderthan we have touse stack aswellas queue
// void reverseordertraversal(node* root){
// queue<node*> q;
// stack<node*> s;
// Q.push(root);

// while(Q.empty==false){
//     root=q.front();
//     q.pop();
//     S.push(root);
//     if(root->left){
//         Q.push(root->left);
//     }
//     if(root->right){
//         Q.push(root->right);
//     }
// }
// while(S.empty()==false){
//     root=S.top();
//     cout<<root->data<<Endl;
//     S.pop();
// }
// }
// void reverseLevelOrder(node* root){
//     stack <node *> S;
//     queue <node *> Q;
//     Q.push(root);
 
    
//     while (Q.empty() == false)
//     {
//         root = Q.front();
//         Q.pop();
//         S.push(root);
//         if (root->right)
//             Q.push(root->right);
 
//         if (root->left)
//             Q.push(root->left);
//     }
//     while (S.empty() == false)
//     {
//         root = S.top();
//         cout << root->data << " ";
//         S.pop();
//     }
// }
// void builtfromlevelordertraversal(node* root){
//     queue<node*> q;
//     int data;
//     cin>>data;
//     root=new node(data);
//     q.push(root);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();
//     cout<<"Enter the left node for:"<<temp->data<<endl;
//     int leftdata;
//     cin>>leftdata;
//     if(leftdata!=-1){
//         temp->left=new node(leftdata);
//         q.push(temp->left);
//     }
//      cout<<"Enter the right node for:"<<temp->data<<endl;
//     int rightdata;
//     cin>>rightdata;
//     if(rightdata!=-1){
//         temp->right=new node(rightdata);
//         q.push(temp->left);
//     }
//     }
// }
// int main()
// {
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     node *root = NULL;
//     root = binarytree(root);
//     levelordertraversal(root);
//     inorder(root);
//     preorder(root);
//     postorder(root);
//     builtfromlevelordertraversal(root);
//     reverseLevelOrder(root);
//     return 0;
// }
//basics of the binary tree
//implementation of the binary tree
// # include<iostream>
// # include<bits/stdc++.h>
// # include<stack>
// # include<queue>
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

// node *buildtree(node *root)
// {
//     int data;
//     cin >> data;
//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     else
//     {
//         cout << "Enter the value to write in the left of: " << data << endl;
//         root->left = buildtree(root->left);
//         cout << "Enter the data to write in the right of: " << data << endl;
//         root->right = buildtree(root->right);
//     }
// }
// // we always perform level order traversal of a binary tree using the concept of the queue
// void levelordertraversal(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         node *temp = q.front();
//         q.pop();
//         if (temp == NULL)
//         { // purana level completelty travel ho chuk hai
//             cout << endl;
//             if (!q.empty())
//             {
//                 // queue still has ome child nodes
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }
// //now writing the logic for the inorder traversal
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     else{
//     inorder(root->left);
//     cout<<root->data<<endl;
//     inorder(root->right);
//     }
// }
// //now writing the logic for the preordertraversal
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
// else{
//     cout<<root->data<<endl;
//     preorder(root->left);
//     preorder(root->right);
// }
// }
// //now writing the logic for the postordertraversal
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     else{
//         postorder(root->left);
//         postorder(root->right);
//         cout<<root->data<<endl;
//     }
// }
// void buildfromlevelordertraversal(node* root){
//     queue<node*> q;
//     int data;
//     cin>>data;
//     root=new node(data);
//     q.push(root);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();
//     }
//     cout<<"Enter the data for entering in left node:"<<temp->data<<endl;
//     int leftdata;
//     cin>>leftdata;
//     if(leftdata!=-1){
//         temp->left=new node(leftdata);
//         q.push(temp->left);
//     }

//     cout<<"Enter the data for entering in rightnode"<<temp->data<<endl;
//     int rightdata;
//     cin>>rightdata;
//     if(rightdata!=-1){
//         temp->right=new node(rightdata);
//         q.push(temp->right);
//     }
// }
 //void builtfromlevelordertraversal(node* root){
//     queue<node*> q;
//     int data;
//     cin>>data;
//     root=new node(data);
//     q.push(root);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();
//     cout<<"Enter the left node for:"<<temp->data<<endl;
//     int leftdata;
//     cin>>leftdata;
//     if(leftdata!=-1){
//         temp->left=new node(leftdata);
//         q.push(temp->left);
//     }
//      cout<<"Enter the right node for:"<<temp->data<<endl;
//     int rightdata;
//     cin>>rightdata;
//     if(rightdata!=-1){
//         temp->right=new node(rightdata);
//         q.push(temp->left);
//     }
//     }
// }
// int main(){
// node* root=NULL;
// buildtree(root);
// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// levelordertraversal(root);
// }
//code for traversal in the binary tree
# include<iostream>
# include<stack>
# include<bits/stdc++.h>
# include<queue>
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
   node* builttree1(node* root){
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    else{
        cout<<"Enter the value you want to write in the left of the data"<<data<<endl;
        root->left=builttree1(root->left);
        cout<<"Enter the value you want to write in the right of the data"<<data<<endl;
        root->right=builttree1(root->right);
    }
   }
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
   node* builttree(node* root){
       int data;
       cin>>data;
       root=new node(data);
       if(data==-1){
        return NULL;
       }
       else{
        cout<<"Enter the value you want to write in the left of"<<data<<endl;
        root->left=builttree(root->left);
        cout<<"Enter the value you want to write in the right of"<<data<<endl;
        root->right=builttree(root->right);
       }
   }
   //built from the level ordertraversal
   void builtfromlevelordertraversal1(node* root){
    queue<node*> q;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Enter the data in left of node"<<temp->left<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the data in the right of node"<<temp->right<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
   }

   //void built from the level order traversal
   void builtfromlevelordertraversal(node* root){
    queue<node*> q;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Enter the data in leftofthe node"<<temp->left<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the data in the right of the node"<<temp->right<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);

        }
    }
   }
   //now uderstanding the levelordertraversal inside the binary trees
   void levelordertraversal1(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
        else{
            cout<<temp->data<<endl;
            if(temp->left){
                levelordertraversal1(temp->left);
            }
            if(temp->right){
                levelordertraversal1(temp->right);
            }
        }
        }
    }
   }
   //level order traversal in binary tree
      void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<endl;
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    }
   }
   //inorder traversal
   //LNR
   void inorder1(node *root){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
   }
   //talking about the inorder traversal
   //LNR
   //left node right
   void inorder(node* root){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<endl;
    }
   }
   //NLR
   void preorder(node* root){
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
   }
   void postorder(node* root){
    if(root==NULL){
        return;
    }
    else{
        postorder(root->left);
        cout<<root->data;
        postorder(root->right);
    }
   }
   //void reverse order traversal inspired form the level order traversal
   void reverseleveloordertraversal1(node* root){
    stack<node*> S;
    queue<node*> Q;
    Q.push(root);
    while(Q.empty()==false){
        root=Q.front();
        Q.pop();
        S.push(root);
        if(root->right){
            Q.push(root->right);
        }
        if(root->left){
            Q.push(root->left);
        }
    }
    while(S.empty()==false){
        root=S.top();
        cout<<root->data<<endl;
        S.pop();
    }
   }
   void reverseLevelorder(node* root){
    stack<node*> S;
    queue<node*> Q;
    Q.push(root);
    while(Q.empty()==false){
        root=Q.front();
        Q.pop();
        S.push(root);
        if(root->right){
            Q.push(root->right);
        }
        if(root->left){
            Q.push(root->left);
        }
    }
    while(S.empty()==false){
        root=S.top();
        cout<<root->data<<endl;
        S.pop();
    }
   }
   void reverseLevelOrder(node* root){
    stack <node *> S;
    queue <node *> Q;
    Q.push(root);
 
    
    while (Q.empty() == false)
    {
        root = Q.front();
        Q.pop();
        S.push(root);
        if (root->right)
            Q.push(root->right);
 
        if (root->left)
            Q.push(root->left);
    }
    while (S.empty() == false)
    {
        root = S.top();
        cout << root->data << " ";
        S.pop();
    }
}
int main(){
 node* root=NULL;
 builttree(root);
 // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
 levelordertraversal(root);
}