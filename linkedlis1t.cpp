/* how to create a node
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Node{
     public:
    int data;
    Node* next;
    //creating constructor for taking input and output in node
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    public:
    static void deletenode(int position,Node* &head){
                if(position==1){
                    Node*temp=head;
                   head=head->next;
                     delete(temp);
                }
                else{
                    Node* curr=head;
                    Node* prev=NULL;
                    //deleting any middle and last node
                      int cnt=1;
                      while(cnt<position){
                        prev=curr;
                        curr=curr->next;
                        cnt++;
                      }
                      prev->next=curr->next;
                      curr->next=NULL;
                        delete curr;
                }
    }
    static void insertatposition(Node*&tail,Node* & head,int position,int d){
        if(position==1){
            insertathead(head,d);
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
                   temp->next=nodetoinsert;
            //insert at tail;
            if(temp->next==NULL){
                insertattail(tail,d);
                return;
            }
    }
    static void insertathead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
    }
    static void insertattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }
};
int main(){
   Node* node1=new Node(10);
     cout<<node1->data<<endl;
     cout<<node1->next<<endl;
     Node* head=node1;
     Node*tail=node1;
     Node::insertathead(head,12);
     Node::print(head);
     Node::insertathead(head,15);
     Node::print(head);
     Node::insertattail(tail,10);
     Node::print(tail);
     Node::insertattail(tail,22);
     Node::print(tail);
     Node::insertatposition(tail,head,3,22);
     Node::print(head);
     Node::insertatposition(tail,head,2,22);
     Node::print(head);
     Node::deletenode(4,head);
     Node::print(head);
     return 0;

}
// program to create a node
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
    //deleting element in a linked list
    static void deleteNode(Node* &head,int position){
             if(position==1){
                //deleting any middle node or last node
                Node* temp=head;
                head=head->next;
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
                prev->next=curr->next;
                delete(curr);
             }
    }
    //input from the tail in inked list
    static void inputattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        temp=tail;
    }
    //taking input from the head in linked list
    static void inputathead(Node* &head,int d){
             Node* temp=new Node(d);
             temp->next=head;
             head=temp;
    }
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
       static void insertatposition(Node*&tail,Node* &head,int position,int d){
        if(position==1){
            inputathead(head,d);
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
                   temp->next=nodetoinsert;
            //insert at tail;
            if(temp->next==NULL){
                inputattail(tail,d);
                return;
            }
    }
};
int main(){
 Node* node1=new Node(10);
 Node* head=node1;
 Node* tail=node1;
 cout<<node1->data<<endl;
 cout<<node1->next<<endl;
 Node::inputathead(head,12);
 Node::print(head);
 Node::inputathead(head,15);
 Node::print(head);
 Node::inputattail(tail,16);
 Node::print(tail);
 Node::inputattail(tail,17);
 Node::print(tail);
 Node::insertatposition(tail,head,3,77);
 Node::print(head);
 Node::deleteNode(head,4);
 Node::print(head);
}
//program to create a linked list
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
            delete next;
            this->next=NULL;
            cout<<"memory is free for the node with data"<<value<<endl;
        }
    }
    static void insertattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
    }
    static void insertathead(Node* &head,int d){
         Node* temp=new Node(d);
         temp->next=head;
         head=temp;
    }
    //now inserting the data at a position
    static void insertatposition(Node* &tail,Node* &head,int position,int d){
                if(position==1){
                    insertathead(head,position);
                    return;
                }
                Node* temp=head;
                int cnt=1;
                while(cnt<position-1){
                    temp=temp->next;
                    cnt++;
                }
                Node* nodetoinsert=new Node(d);
                nodetoinsert->next=temp->next;
                temp->next=nodetoinsert;

                if(temp->next==NULL){
                    insertattail(tail,position);
                    return;
                }
    }
    //code for the deletion in the linked list
    static void deleteNode(Node* &head,int position){
             if(position==1){
                Node* temp=head;
                head=head->next;
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
                prev->next=curr->next;
                curr->next=NULL;
                delete(curr);
             }
    }
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main(){
   Node* node1=new Node(10);
   Node* head=node1;
   Node* tail=node1;
   cout<<node1->data<<endl;
   //cout<<node1->next<<endl;
   Node::insertathead(head,12);
   //Node::print(head);
   Node::insertathead(head,14);
   //Node::print(head);
   Node::insertathead(head,16);
   //Node::print(head);
   Node::insertattail(tail,18);
   Node::print(tail);
   Node::insertattail(tail,20);
   Node::print(tail);
   Node::insertattail(tail,22);
   Node::print(tail);
   Node::insertatposition(tail,head,2,200);
   Node::print(head);
   Node::insertatposition(tail,head,3,400);
   Node::print(head);
   return 0;
}
//program to reverse a linked list
# include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //creating a constructor to provide the input
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
// logic for finding the length of the linked list
static int getlength(Node* &head){
    Node* temp = head;
    int len = 0; // Initialize length to 0
    while(temp != NULL){
        len++;
        temp = temp->next; // Add update statement for temp
    }
    return len;
}

// logic to find the middle node in a linked list
static Node* getmid(Node* head){
    int len = getlength(head); // Call getlength() to get correct length
    int ans = (len / 2);
    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
    //now writing the logic to reverse a linked list
static Node* reverse(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    else {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head = prev;
        return head;
    }
}
        static void insertathead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main(){
   Node* node1=new Node(10);
     //cout<<node1->data<<endl;
     //cout<<node1->next<<endl;
     Node* head=node1;
     Node::insertathead(head,12);
     Node::insertathead(head,15);
     Node::insertathead(head,18);
     Node::insertathead(head,20);
     Node::reverse(head);
     Node::print(head);
     Node* middle=Node::getmid(head);
     cout<<"middle eleement is"<<middle->data<<endl;

}
//program to reverse alinked list and find the middle element of the linked list
# include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor for the node of a linked list
    Node(int data){
       this->data=data;
       this->next=NULL;
    }
    //now logic to find the midddle elemment of the linked lst
    //to find the lenght of the linked list
    static int getlenght(Node* &head){
        Node* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    //to calculate the middle element of the list
    static Node* mid(Node* &head){
        Node* temp=head;
        int len=getlenght(head);
        int ans=(len/2);
        int cnt=0;
        while(cnt<ans){
            temp=temp->next;
            cnt++;
        }
        return temp;
    }
    //now code to reverse a linked list
    static Node* reverse(Node* &head){
        if(head==NULL|head->next==NULL){
            return head;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        head=prev;
        return prev;
    }
    //logic for insertion of elements in a linked list
    static void insertathead(Node* &head,int d){
             Node* temp=new Node(d);
             temp->next=head;
             head=temp;
    }
    //logic for printing a linked list
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
             temp=temp->next;
        }
    }
};
int main(){
Node* node1=new Node(10);
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;
Node* head=node1;
Node::insertathead(head,12);
Node::insertathead(head,13);
Node::insertathead(head,14);
Node::insertathead(head,16);
Node::reverse(head);
Node::print(head);
Node* middle=Node::mid(head);
cout<<"middle element of the linked list is"<<middle->data<<endl;
}
//wap a linked list in the groups of k
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //creating a constructor for taking the input
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //code for taking input from the head
    static void insertathead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    //logic for reverse a linked list in kth groups
    static Node* reverse(Node* head,int k){
        if(head==NULL){
            return NULL;
        }
        else{
            Node* forward=NULL;
            Node* curr=head;
            Node* prev=NULL;
            int count=0;
            while(curr!=NULL&&count<k){
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
                count++;
            }
            if(forward!=NULL){
                head->next=reverse(forward,k);
            }
            return prev;
        }
    }
    //to check wether the given linked list is circular or not
    4
    //logic to print a linked list
    static void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node::insertathead(head,12);
    Node::insertathead(head,14);
    Node::insertathead(head,16);
    Node::insertathead(head,18);
    Node::insertathead(head,20);
    //Node::print(head);
    head = Node::reverse(head,2); // Update the head pointer after reversing
    Node::print(head);
    return 0;
}
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    static void insertanode(Node* &tail, int element, int d) {
        if (tail == NULL) {
            Node* newNode = new Node(d);
+3            tail = newNode;
            newNode->next = newNode;
        }
        else {
            Node* curr = tail;
            while (curr->data != element) {
                curr = curr->next;
            }
            Node* newNode = new Node(d);
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }

    static bool iscircularlinkedlist(Node* head) {
        if (head == NULL) {
            return false;
        }
        Node* temp = head->next;
        while (temp != NULL && temp != head) {
            temp = temp->next;
        }
        if (temp == NULL) {
            return false;
        }
        return true; // Fixed the return statement
    }

    static void print(Node* head) {
        Node* temp = head;
        do {
            cout << temp->data << endl;
            temp = temp->next;
        } while (temp != head);
    }
};

int main() {
    Node* node1 = new Node(3);
    Node* head = node1;

    Node::insertanode(head, 3, 5);
    Node::insertanode(head, 5, 3);
    Node::insertanode(head, 5, 7);
    Node::print(head);

    if (Node::iscircularlinkedlist(head)) {
        cout << "linked list is circular in nature" << endl;
    }
    else {
        cout << "linked list is not circular in nature" << endl;
    }

    return 0;
}
//singly linked list
# include<iostream>
# include<map>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
     Node(int data){
        this->data=data;
        this->next=NULL;
     }
     bool detectloop(Node* &head){
        if(head==NULL){
            return false;
        }
     map<Node*,bool> visited;
     Node* temp=head;
     while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        else
        visited[temp]=true;
        temp=temp->next;
     }
     return false;
     }
     //insertat tail of linked list
     static void inserattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
     }
     //logic for insert at head in a linked list
   static void inserathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
   }
   //logic to print a linked list
   static void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
   }
};
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node::inserattail(tail,12);
    Node::inserattail(tail,14);
    Node::inserattail(tail,16);
   tail->next=head->next;
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    if(head->detectloop(head)){
            cout<<"cycle is present";
    }
    else{
        cout<<"cycle is not present";
    }
    return 0;
}
//reducing the space complexity of the code
# include<iostream>
# include<map>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
     Node(int data){
        this->data=data;
        this->next=NULL;
     }
     //floyddetectloop
     static Node* floydetectloop(Node* &head){
               if(head==NULL){
                return NULL;
               }
        else{
            Node* slow=head;
            Node* fast=head;
            while(slow!=NULL&&fast!=NULL){
                fast=fast->next;
                if(fast!=NULL){
                    fast=fast->next;
                }
                slow=slop0;
                w->next;
                if(slow==fast){
                    cout<<slow->data<<endl;
                    return slow;
                }
            }

        }
        return NULL;
     }
     //insertat tail of linked list
     static void inserattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
     }
     //logic for insert at head in a linked list
   static void inserathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
   }
   //logic to print a linked list
   static void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
   }
};
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node::inserattail(tail,12);
    Node::inserattail(tail,14);
    Node::inserattail(tail,16);
   tail->next=head->next;
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    if(Node::floydetectloop(head)){
            cout<<"cycle is present";
    }
    else{
        cout<<"cycle is not present";
    }
    return 0;
}
//first element of the loop
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
     //floyddetectloop
     static Node* floydetectloop(Node* &head){
               if(head==NULL){
                return NULL;
               }
        else{
            Node* slow=head;
            Node* fast=head;
            while(slow!=NULL&&fast!=NULL){
                fast=fast->next;
                if(fast!=NULL){
                    fast=fast->next;
                }
                slow=slow->next;
                if(slow==fast){
                    cout<<slow->data<<endl;
                    return slow;
                }
            }

        }
        return NULL;
     }
     //getting the starting nofr
     static Node* startnode(Node* &head){
         if(head==NULL){
            return NULL;
         }
         Node* intersection=floydetectloop(head);
         Node* slow=head;
         while(slow!=intersection) {
                slow=slow->next;
                intersection=intersection->next;
     }
     return slow;
     }
     //removing the loop from the linked list
     static void removeloop(Node* &head){
        if(head==NULL){
            return;
        }
        Node* startingnode=startnode(head);
        Node* temp=startingnode;
        while(temp->next!=startingnode){
            temp=temp->next;
        }
        temp->next=NULL;
     }
     //insertat tail of linked list
     static void inserattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
     }
     //logic for insert at head in a linked list
   static void inserathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
   }
   //logic to print a linked list
   static void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
   }
};
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node::inserattail(tail,12);
    Node::inserattail(tail,14);
    Node::inserattail(tail,16);
   tail->next=head->next;
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    Node* tati=Node::startnode(head);
    cout<<tati->data<<endl;
    if(Node::startnode(head)){
            cout<<"cycle is present";
    }
    else{
        cout<<"cycle is not present";
    }
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    static void inseratheaad(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    static void print(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    Node* uniquesortedlinkedlist(Node* &head){
        if(head==NULL){
            return NULL;
        }
        else{
            Node* curr=head;
            while(curr!=NULL){
                if(curr->next!=NULL && curr->data==curr->next->data){
                  Node* next_next=curr->next->next;
                  Node* nodetodelete=curr->next;
                  delete(nodetodelete);
                  curr->next=next_next;
                }
                else{
                    curr=curr->next;
                }
            }
            return head; // Fix: Move outside the loop
        }
    }
};

int main(){
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    Node::inseratheaad(head,12);
    Node::inseratheaad(head,14);
    Node::inseratheaad(head,14);
    Node::inseratheaad(head,18);
    Node::inseratheaad(head,20);
    node1->uniquesortedlinkedlist(head); // Fix: Call using object
    Node::print(head);
}
#include<iostream>
using namespace std;

class Node {
public:
    int data;
  sz  Node* next = NULL;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    static Node* uniquesortedlinkedlist(Node* &head) {
        if(head == NULL) {
            return NULL;
        }
        else {
            Node* curr = head;
            while(curr != NULL && curr->next != NULL) {
                if(curr->data == curr->next->data) {
                    Node* next_next = curr->next->next;
                    Node* Nodetodelete = curr->next;
                    delete(Nodetodelete);
                    curr->next = next_next;
                }
                else {
                    curr = curr->next;
                }
            }
            return head;
        }
    }
    static void insertathead(Node* &head, int d) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    static void print(Node* &head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    Node::insertathead(head, 12);
    Node::insertathead(head, 14);
    Node::insertathead(head, 14);
    Node::insertathead(head, 18);
    Node::insertathead(head, 20);
    node1->uniquesortedlinkedlist(head);
    Node::print(head);
}
//program to unique a unsorted linked list
#include<iostream>
# include<map>
using namespace std;

class Node {
public:
    int data;
    Node* next = NULL;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
   static Node* uniqueunsortedlinkedlist(Node* &head){
    if(head == NULL){
        return NULL;
    }
    else{
        map<int, bool> visited;
        Node* curr = head;
        Node* prev = NULL;
        while(curr != NULL){
            if(visited[curr->data] == true){
                prev->next = curr->next;
                Node* temp = curr;
                curr = curr->next;
                temp->next = NULL;
                delete(temp);
                continue; // Skip the rest of the loop body
            }
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}
    static void insertathead(Node* &head, int d) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    static void print(Node* &head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;
    Node::insertathead(head, 2);
    Node::insertathead(head, 2);
    Node::insertathead(head, 4);
    Node::insertathead(head, 2);
    Node::insertathead(head, 2);
    node1->uniqueunsortedlinkedlist(head);
    Node::print(head);
}
//logic for checking wether the given linked list is palidrome or not
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next = NULL;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    static void insertathead(Node* &head, int d) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    static void print(Node* &head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    bool checkPalindrome(vector<int> arr){
             int n=arr.size();
             int s=0;
             int e=n-1;
             while(s<=e){
                if(arr[s]!=arr[e]){
                    return false;
                }
                s++;
                e--;
             }
             return true;
    }
    bool ispalindromecheck(Node* &head){
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalindrome(arr);
    }
};

int main() {
    Node* node1 = new Node(4);
    Node* head = node1;
    Node::insertathead(head, 4);
    Node::insertathead(head, 2);
    Node::insertathead(head, 2);
    Node::insertathead(head, 4);
    Node::insertathead(head, 4);

    if(node1->ispalindromecheck(head)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    Node::print(head);

    return 0;
}
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next = NULL;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    static void insertathead(Node* &head, int d) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    static void print(Node* &head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
        while(curr!=NULL){
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
        }
        return prev;
    }
    Node* getMid(Node* &head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    bool ispalindrome(Node* &head){
        if(head==NULL&&head->next==NULL){
            return true;
        }
        Node* middle=getMid(head);
        Node* temp=middle;
        middle->next=reverse(temp);
        //compare both halves
        Node* head1=head;
        Node* head2=middle->next;
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        temp=middle->next;
        middle->next=reverse(temp);
        return true;
    }
};

int main() {
    Node* node1 = new Node(4);
    Node* head = node1;
    Node::insertathead(head, 4);
    Node::insertathead(head, 2);
    Node::insertathead(head, 2);
    Node::insertathead(head, 4);
    Node::insertathead(head, 4);
    if(node1->ispalindrome(head)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}
// find duplicate in sorted linked list
#include <iostream>
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
    //logic for the duplicates in the sorted linked list
    static Node* uniquesortedlinkedlist(Node* &head){
        if(head==NULL){
            return NULL;
        }
        else{
            Node* curr=head;
            while(curr!=NULL){
                if(curr->next!=NULL&&curr->data==curr->next->data){
                      Node* node_node=curr->next->next;
                      Node* Nodetodelete=curr->next;
                      delete(Nodetodelete);
                      curr->next=node_node;
                }
                else{
                    curr=curr->next;
                }
            }
            return head;
        }
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
Node* node1=new Node(8);
Node* head=node1;
Node* tail=node1;
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node::insertathead(head,12);
Node::insertathead(head,14);
Node::insertathead(head,18);
Node::insertathead(head,18);
node1->uniquesortedlinkedlist(head);
Node::print(head);
return 0;
}
//Now finding duplicate in the unsorted linked list
#include <iostream>
# include<map>
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
       static Node* uniqueunsortedlinkedlist(Node* &head){
    if(head == NULL){
        return NULL;
    }
    else{
        map<int, bool> visited;
        Node* curr = head;
        Node* prev = NULL;
        while(curr != NULL){
            if(visited[curr->data] == true){
                prev->next = curr->next;
                Node* temp = curr;
                curr = curr->next;
                temp->next = NULL;
                delete(temp);
                continue; // Skip the rest of the loop body
            }
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
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
Node* node1=new Node(8);
Node* head=node1;
Node* tail=node1;
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node::insertathead(head,3);
Node::insertathead(head,3);
Node::insertathead(head,3);
Node::insertathead(head,1);
node1->uniqueunsortedlinkedlist(head);
Node::print(head);
return 0;
}
//to check wether the given linked list is palidrome or not
//#Approach 1
#include <iostream>
#include<vector>
# include<array>
# include<map>
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
    bool checkPalindrome(vector<int> arr){
             int n=arr.size();
             int s=0;
             int e=n-1;
             while(s>=e){
                if(arr[s]!=arr[e]){
                    return false;
                }
                else{
                    s++;
                    e--;
                }
                return true;
             }
    }
   //logic to check wether the given linked list is palidrome or not
     bool ispalindromecheck(Node* &head){
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalindrome(arr);
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
Node* node1=new Node(8);
Node* head=node1;
Node* tail=node1;
cout<<node1->data<<endl;
cout<<node1->next<<endl;
Node::insertathead(head,8);
Node::insertathead(head,8);
Node::insertathead(head,8);
Node::insertathead(head,8);
if(node1->ispalindromecheck(head)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
Node::print(head);
return 0;
}*/