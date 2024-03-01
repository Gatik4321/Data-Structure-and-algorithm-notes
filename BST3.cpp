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
//     void inorder(node* root,vector<int> in){
//         if(root==NULL){
//             return;
//         }
//         else{
//             inorder(root->left,in);
//             in.push_back(root->data);
//             inorder(root->right,in);
//         }
//     }
//    bool twoSumInBST(node* root,int target){
//     vector<int> inorderValue;
//     inorder(root,inorderValue);
    
//     int i=0;
//     int j=inorderValue.size();
//     while(i<j){
//         int sum=inorderValue[i]+inorderValue[j];
//         if(sum==target){
//             return true;
//         }
//         else if(sum>target){
//             j--;
//         }
//         else{
//             i++
//         }
//         return false;
//     }
// };
// int main(){

// }


//Balanced BST
//we have to check wether a bst is balanced or not
// # include<iostream>
// # include<bits/stdc++.h>
// # include<vector>
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
// void inorder(node* root,vector<int> in){
//     if(root==NULL){
//         return;
//     }
//     else{

//     }
// }
// node* flatten(node* &root){
//     vector<int> inordervalue;
//     inorder(root,inordervalue);

//     int n=inordervalue.size();
//     node* newroot=new node(inordervalue[i]);
//     node* curr=newroot;


//     //2n step
//     //now marking the left pointer and right pointer
//     for(int i=1;i<n;i++){
//         node* temp=new node(inordervalue[i]);
//         curr->left=NULL;
//         curr->right=temp;
//         curr=temp;
//     }
//     //jab pura traverse ho jay then you can mark left and right pointer equal to NULL
//     curr->left=NULL;
//     curr->right=NULL;

//     return newroot;

// }
// };
// int main(){
//     return 0;
// }

//We have to convert the normal bst into balanced bst
// # include<iostream>
// # include<bits/stdc++.h>
// // # include<vector>
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
//     void inorder(node* root,vector<int> in){
//         if(root==NULL){
//             return;
//         }
//         else{
//             inorder(root->left,in);
//             in.push_back(root->data);
//             inorder(root->right,in);
//         }
//     }
// node* inordertoBST(int s,int e,vector<int> in){
//     if(s>e){
//         return NULL;
//     }
//     int mid=s+(e-s)/2;
//     node* root=new node(in[mid]);
//     root->left=inordertoBST(s,mid-1,in);
//     root->right=inordertoBST(mid+1,e,in);
//     return root;
// }
// node* balancedbst(node* root){
//     vector<int> inorderValue;
//     inorder(root,inorderValue);
//    return inordertoBST(0,inorderValue.size()-1,inorderValue);
// }
// };
// int main(){

// }

//Code for the merge sort inside the bst
//algo 
//covert the bst into sorted doubly linked list
//merge two sorted Linked list
//then after convert the Linked list into BST
# include<iostream>
# include<bits/stdc++.h>
# include<queue>
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
//step 1 convert the BST into sorted doubly Linked List
void convertIntoSortedDLL(node* root,node* head){
    if(root==NULL){
        return;
    }
    convertIntoSortedDLL(root->right,head);
   root->right=head;
   if(head!=NULL){
    head->left=root;
   }
   head=root;
   
   convertIntoSortedDLL(root->left,head);
}
//step 2 convert the wto doubly linked list into the sorted bst
node* mergeSortedLinkedList(node* &head1,node* &head2){
      node* head=NULL;
      node*tail=NULL;
    while(head1!=NULL &&head2!=NULL){
           if(head1->data<head2->data){
            if(head==NULL){
             head=head1;
             tail=head1;
             head1=head1->right;
            }
            else{
           tail->right=head1;
           head1->left=tail;
           tail=head1;
           head1=head1->right;
            }
           }
           else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
           }
    }
 while(head1!=NULL){
       tail->right=head1;
       head1->left=tail;
       tail=head1;
       head1=head1->right;
 }
 while(head2!=NULL){
       tail->right=head2;
       head2->left=tail;
       tail=head1;
       head2=head2->right;
 }
}
int countnodes(node* &head){
    int count=0;
    while(head!=NULL){
        head=head->right;
        count++;
    }
return count;
}
//step 3 convert the merge BST into the sorted Linked list
node* sortedLLtoBST(node* &head,int n){
      //base case 
      if(n<=0 || head==NULL){
        return NULL;
      }
    node* left=sortedLLtoBST(head,n/2);

    node* root=head;
    root->left=left;
    head=head->right;
    root->right=sortedLLtoBST(head,n-n/2-1);
    return root;
}
};
int main(){

}
