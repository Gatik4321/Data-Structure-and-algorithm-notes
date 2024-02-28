/*#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node* sortList(Node* &head){
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                zerocount++;
            }
            else if(temp->data==1){
                onecount++;
            }
            else if(temp->data==2){
                twocount++;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(zerocount!=NULL){
                temp->data=0;
                zerocount--;
            }
            else if(onecount!=NULL){
                temp->data=1;
                onecount--;
            }
            else if(twocount!=NULL){
                temp->data=2;
                twocount--;
            }
            temp=temp->next;
        }
        return head;
    }


    //logic for insert at head of linked list
    static void insertathead(Node* &head,int d){
             Node* temp=new Node(d);
             temp->next=head;
             head=temp;
    }
    //print the data of the linked list
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main(){
Node* node1=new Node(0);
Node* head=node1;
Node* tail=node1;
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node::insertathead(head,1);
Node::insertathead(head,1);
Node::insertathead(head,2);
Node::insertathead(head,1);
node1->sortList(head);
Node::print(head);
return 0;
}
//sort a linked list including 0s 1s and 2s
//Approach 1
# include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
   //logic for sorting the linked list
   static Node* sorted(Node* &head){
          int zerocount=0;
          int onecount=0;
          int twocount=0;
          Node* temp=head;
          while(temp!=NULL){
            if(temp->data==0){
                zerocount++;
            }
            else if(temp->data==1){
                onecount++;
            }
            else if(temp->data==2){
                twocount++;
            }
            temp=temp->next;
          }
          temp=head;
          while(temp!=NULL){
            if(zerocount!=NULL){
                temp->data=0;
                zerocount--;
            }
            else if(onecount!=NULL){
                temp->data=1;
                onecount--;
            }
            else if(twocount!=NULL){
                temp->data=2;
                twocount--;
            }
            temp=temp->next;
          }
          return head;
   }
   //logic for insert at head
   static void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
   }
   //logic for printing the elements of the linked list
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main(){
Node* node1=new Node(0);
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node* head=node1;
Node* tail=node1;
Node::insertathead(head,1);
Node::insertathead(head,2);
Node::insertathead(head,1);
Node::insertathead(head,2);
Node::insertathead(head,0);
Node::insertathead(head,1);
node1->sorted(head);
Node::print(head);
return 0;
}
//Approach 2
//approach 2 to sort 0s 1s and 2s in the linked list
# include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
   static void insertattail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
   }
   //logic for sorting the linked list
   static Node* sorted(Node* &head){
         Node* zerohead=new Node(-1);
         Node* zerotail=zerohead;
         Node* onehead=new Node(-1);
         Node* onetail=onehead;
         Node* twohead=new Node(-1);
         Node* twotail=twohead;
         Node* curr=head;
         while(curr!=NULL){
             int value=curr->data;
             if(value==0){
                insertattail(zerotail,curr);
             }
             else if(value==1){
                insertattail(onetail,curr);
             }
             else if(value==2){
                insertattail(twotail,curr);
             }
             curr=curr->next;
         }
         if(onehead->next!=NULL){
            zerotail->next=onehead->next;
         }
         else{
            zerotail->next=twohead->next;
         }
         onetail->next=twohead->next;
         twotail->next=NULL;

         //setup head
         head=zerohead->next;

         delete(zerohead);
         delete(onehead);
         delete(twohead);
   }
   //logic for insert at head
   static void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
   }
   //logic for printing the elements of the linked list
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main(){
Node* node1=new Node(0);
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node* head=node1;
Node* tail=node1;
Node::insertathead(head,1);
Node::insertathead(head,2);
Node::insertathead(head,1);
Node::insertathead(head,2);
Node::insertathead(head,0);
Node::insertathead(head,1);
node1->sorted(head);
Node::print(head);
return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    static Node *reverse(Node *&head)
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *forward = NULL;
        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head = prev;
        return head;
    }
    static void insertattail(Node *&head, Node *&tail, int value)
    {
        Node *temp = new Node(value);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail=temp;
        }
    }

    static Node *addings(Node *&first, Node *&second)
    {
        int carry = 0;
        Node *anshead = NULL;
        Node *anstail = NULL;
        while (first != NULL && second != NULL)
        {
            int sum = carry + first->data + second->data;
            int digit = sum % 10;
            insertattail(anshead, anstail, digit);
            carry = sum / 10;
            first = first->next;
            second = second->next;
        }
        while (first != NULL)
        {
            int sum = carry + first->data;
            int digit = sum % 10;
            insertattail(anshead, anstail, digit);
            carry = sum / 10;
            first = first->next;
        }
        while (second != NULL)
        {
            int sum = carry + second->data;
            int digit = sum % 10;
            insertattail(anshead, anstail, digit);
            carry = sum / 10;
            second = second->next;
        }
        while (carry != 0)
        { 
            int digit = carry % 10;
            insertattail(anshead, anstail, digit);
            carry = carry / 10;
        }
        return anshead;
    }
 
    static Node *adding(Node *&first, Node *&second)
    {
        first = reverse(first);
        second = reverse(second);
        Node *ans = addings(first, second);
        ans = reverse(ans);
        return ans;
    }

    static void insertathead(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    static void print(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(12);
    Node *head1 = node1;
    Node *head2 = node2;

    Node::insertathead(head1, 11);
    Node::insertathead(head1, 13);
    Node::insertathead(head1, 14);
    Node::insertathead(head1, 15);

    Node::insertathead(head2, 16);
    Node::insertathead(head2, 17);
    Node::insertathead(head2, 18);
    Node::insertathead(head2, 19);

    Node::adding(head1, head2);

    Node::print(head1);
    cout << endl;
    Node::print(head2);

    return 0;
}*/
// problem to find the clone in a linked list
// t(c)=o[n2];
#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next = NULL;
    Node *random = NULL;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }

    // Logic for inserting a node at the head of the linked list
    static void insertAtHead(Node *&head, int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    // logic for the insert at tail
    static void insertattail(Node *&head, Node *&tail, int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    // logic for finding the clone in linked list
    static Node *copy(Node *&head)
    {
        Node *clonehead = NULL;
        Node *clonetail = NULL;
        Node *temp = head;
        while (temp != NULL)
        {
            insertattail(clonehead, clonetail, temp->data);
            temp = temp->next;
        }
       map<Node*,Node*> oldtonew;
       Node* originalNode=head;
       Node* cloneNode=clonehead;
       while(originalNode!=NULL&&cloneNode!=NULL){
                oldtonew[originalNode]=cloneNode;
                originalNode=originalNode->next;
                cloneNode=cloneNode->next;
       }
      originalNode=head;
      cloneNode=clonehead;
      while(originalNode!=NULL&&cloneNode!=NULL){ 
        cloneNode->random=oldtonew[originalNode->random];
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
      }
      return clonehead;
    }
    // Printing the linked list with data and random pointers
    static void printList(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << "Data: " << temp->data << ", Random: " << temp->random->data << endl;
            temp = temp->next;
        }
        // Now create the mapping to point the linked list
    }
};

int main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;

    // Inserting nodes at the head of the linked list
    Node::insertAtHead(head, 2);
    Node::insertAtHead(head, 3);
    Node::insertAtHead(head, 4);
    Node::insertAtHead(head, 5);

    // Assigning random pointers to the nodes
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head->next;

    cout << "The original linked list is:" << endl;
    Node::printList(head);
      Node::copy(head);
      Node::printList(head);
    return 0;
}