//Writing the code for the morris traversal in a binary tree
# include<iostream>
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
void Mooristraversal(node* root){
      node* current=root;
    while(current!=NULL)        {
        if(current->left!=NULL){
            cout<<current->data<<" ";
            current=current->right;
        }
        else{
            node* pred=current->left;
             while(pred->right!=NULL&&pred->right!=current){
                pred=pred->right;
        
        if(pred->right==NULL){
            pred->right=current;
            current=current->left;
        }
        else{
            pred->right=NULL;
            cout<<current->data<<" ";
            current=current->right;
        }
            }
        }
    }
}
int main(){
   node* root=NULL;
}

//flatten a binary tree using linked list
# include<iostream>
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
void flatten(node* root){
    node* curr=root;
    while(curr!=NULL){
        if(curr->left){
        node* pred=curr->left;
        while(pred->right)
           pred=pred->right;
    }
    pred->right=curr->right;
    curr->right=curr->left;
    curr->left=NULL;
    }
    curr=curr->right;
}
int main(){

}