/*# include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* prev;
   Node* next;
   Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
   }
   static int insertathead(Node*&head,int d){
             Node* temp=new Node(d);
             temp->next=head;
             head->prev=temp;
             head=temp;
   }
   static int insertattail(Node* &tail,int d){
            Node *temp=new Node(d);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
   }
   static void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
   }
   static int getLenght(Node*&head){
       int len=0;
       Node* temp=head;
       while(temp!=NULL){
        len++;
        temp=temp->next;
       }
       return len;
   }
};
int main(){
    Node* node1=new Node(10);
    cout<<node1->data;
    cout<<node1->prev;
    cout<<node1->next;
    Node *head=node1;
    Node *tail=node1;
    Node::print(head);
    Node::getLenght(head);
    Node::insertathead(head,11);
    Node::print(head);
    Node::insertattail(tail,22);
    Node::print(tail);
    return 0;
}
//doubly linked list
# include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
     Node* prev;
     Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
     }
static void print(Node* &head){
      Node* temp=head;
      while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
      }
}
static int insertattail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
            Node *temp=new Node(d);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
   }
static void inputathead(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    Node* temp=new Node(d);
       temp->next=head;
        head->prev=temp;
         head=temp;
}
//deletion code in case of doubly linked list
   static void deleteNode(Node* &head,int position){
             if(position==1){
                //deleting any middle node or last node
                Node* temp=head;
                temp->next->prev=NULL;
                head=head->next;
                temp->next=NULL;
                delete(temp);
             }
             else{
                Node* curr=head;
                Node* prev=NULL;
                int cnt=1;
                while(cnt<position){
                    prev=curr;
                    curr=curr->next;
                    cnt++;
                }
                curr->prev=NULL;
                prev->next=curr->next;
                curr->next=NULL;
                delete(curr);
             }
    }
static void insertatposition(Node* & tail,Node* &head,int position,int d){
            if(position==1){
            inputathead(tail,head,d);
            return;
        }
                  Node* temp=head;
                  int cnt=1;
               while(cnt<position-1){
                 temp=temp->next;
                 cnt++;
               }

               //creating a node for d
               Node *nodetoinsert=new Node(d);
                   nodetoinsert->next=temp->next;
                   temp->next->prev=nodetoinsert;
                   temp->next=nodetoinsert;
                   nodetoinsert->prev=temp;
            //insert at tail;
            if(temp->next==NULL){
                insertattail(head,tail,d);
                return;
            }
    }
};
int main(){
Node* node1=new Node(11);
cout<<node1->data<<endl;
cout<<node1->prev<<endl;
cout<<node1->next<<endl;
Node* head=node1;
Node* tail=node1;
Node::insertatposition(tail,head,1,100);
Node::print(head);
Node::insertatposition(tail,head,2,200);
Node::print(head);

}*/
//implementation of the doubly linked list
// # include<iostream>
// # include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
//     static void inputathead(Node* &head,int d){
//          if(head==NULL){
//             Node* temp=new Node(d);
//             temp=head;
//          }
//         else{
//             Node* temp=new Node(d);
//             temp->next=head;
//             head->prev=temp;
//             head=temp;
//         }
//     }
//     static void inputattail(Node* &tail,int d){
//         if(tail==NULL){
//             Node* temp=new Node(d);
//             temp=tail;
//         }
//          Node* temp=new Node(d);
//          tail->next=temp;
//          temp->prev=tail;
//          tail=temp;
//     }
//         static void deleteNode(Node* &head,int position){
//                    if(position==1){
//                 //deleting any middle node or last node
//                 Node* temp=head;
//                 temp->next->prev=NULL;
//                 head=head->next;
//                 temp->next=NULL;
//                 delete(temp);
//              }                
//               else{
//                 Node* curr=head;
//                 Node* prev=NULL;
//                 int cnt=1;
//                 while(cnt<position){
//                     prev=curr;
//                     curr=curr->next;
//                     cnt++;
//                 }
//                 curr->prev=NULL;
//                 prev->next=curr->next;
//                 curr->next=NULL;
//                 delete(curr);
//              }
//     }
//     static void insertatposition(Node* & tail,Node* &head,int position,int d){
//             if(position==1){
//             inputathead(head,d);
//             return;
//         }
//                   Node* temp=head;
//                   int cnt=1;
//                while(cnt<position-1){
//                  temp=temp->next;
//                  cnt++;
//                }

//                //creating a node for d
//                Node *nodetoinsert=new Node(d);
//                    nodetoinsert->next=temp->next;
//                    temp->next->prev=nodetoinsert;
//                    temp->next=nodetoinsert;
//                    nodetoinsert->prev=temp;
//             //insert at tail;
//             if(temp->next==NULL){
//                 inputattail(tail,d);
//                 return;
//             }
//     }
//     static void print(Node* &head){
//             Node* temp=head;
//             while(temp->next!=NULL){
//                 cout<<temp->data<<endl;
//                 temp=temp->next;
//             }
//     }
// };
// int main(){
//     Node* node1=new Node(10);
//     cout<<node1->data<<endl;
//     cout<<node1->next<<endl;
//     cout<<node1->prev<<endl;
//     Node* head=node1;
//     Node* tail=node1;
//     Node::inputathead(head,12);
//    // Node::print(head);
//     Node::inputathead(head,14);
//    // Node::print(head);
//     Node::inputattail(tail,16);
//   //  Node::print(head);
//     Node::inputattail(tail,18);
//    // Node::print(head);
//     Node::inputattail(tail,20);
// //Node::print(head);
//     Node::inputattail(tail,22);
//    // Node::print(head);
//    Node::deleteNode(head,5);
//    Node::print(head);
// }