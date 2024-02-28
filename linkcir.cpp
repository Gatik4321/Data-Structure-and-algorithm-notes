/*implementation of the circular linked list
# include<iostream>
using namespace std;
class Node{
        public:
        int data;
        Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //code for deletion in circular doubly linked list
    static void deleteNode(Node* &tail,int value){
        if(tail==NULL){
            cout<<"list is empty,please check again"<<endl;
            return;
        }
        else{
            Node* prev=tail;
            Node* curr=prev->next;
            while(curr->data!=value){
                prev=curr;
                curr=curr->next;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
             if(curr==prev){
                tail=NULL;
            }
            if(tail==curr){
                tail=prev; 
            }
        }
    }
 static void insertatPosition(Node* &tail,int element ,int d){
           //assuminn that element presenrt in the list
    
           if(tail==NULL){
            Node* newnode=new Node(d);
            tail=newnode;
            newnode->next=newnode;
           }
 else{
    //non empty list
     Node* curr=tail;
     while(curr->data!=element){
        curr=curr->next;
     }
     Node* temp=new Node(d);
     temp->next=curr->next;
     curr->next=temp;
 }
 }
 static void print(Node* &tail){
    Node* temp=tail;
    //here we use the characterstics of do while loop
    //that data inside the loop execute one time
    do{
      cout<<tail->data<<" ";
      tail=tail->next;  
    }while(tail!=temp);
 }
};
int main(){
 Node* tail=NULL;
 Node::insertatPosition(tail,5,3);
 Node::print(tail);
 Node::insertatPosition(tail,3,5);
 Node::print(tail);
 Node::insertatPosition(tail,5,7);
 Node::print(tail);
  Node::insertatPosition(tail,7,9);
 Node::print(tail);
 Node::deleteNode(tail,7);
 Node::print(tail);
 Node::deleteNode(tail,3);
  Node::print(tail);
    return 0;
}*/
//implementation of the circular linked list
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
               delete(next);
               next=NULL;
        }
    }//code for deletion in circular linked list
    static void deleteNode( ){

    }
  static void insertatposition(Node* &tail,int element,int d){
              if(tail==NULL){
                Node* newNode=new Node(d);
                tail=newNode;
                newNode->next=newNode;
              }
    else{
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
         temp->next=curr->next;
         curr->next=temp;
    }
  }
  static void print(Node* &tail){
        Node* temp=tail;
        do{
        cout<<tail->data<<endl;
        tail=tail->next;
        }while(tail!=temp);
  }
};
int main(){
Node *node1=new Node(10);
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node* tail=NULL;
Node::insertatposition(tail,5,3);
Node::print(tail);
Node::insertatposition(tail,3,7);
Node::print(tail);
}