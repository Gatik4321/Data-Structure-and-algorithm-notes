// implementation of the queues using STL
/*#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    cout<<q.front()<<endl;
    q.push(15);
    cout<<q.front()<<endl;
    q.push(13);
    cout<<q.front()<<endl;
    cout<<"size of the queue is"<<q.size()<<endl;
    q.pop();
    cout<<"size of the queue is"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    cout<<q.front()<<endl;
    // cout<<q.rear()<<endl;
    return 0;
}
// implementation of the queues using arrays
// we have to implement queue using the __ARRAY_OPERATORS
# include<iostream>
using namespace std;
class queue{
     private:
     int *arr;
     int size;
     int front;
     int rear;
   queue(int n){
    this->size=n;
    arr=new int[size];
    front=0;
    rear=0;
   }
   public:
   void enqueue(int data){
    if(rear==size){
        cout<<"Queue is full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
   }
   int dequeue(){
    if(front==rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int ans=arr[front];
        arr[front]=-1;
        front++;
        return ans;
        if(front==rear){
            front=0;
            rear=0;
        }
    }
   }
   bool isempty(){
    if(front==rear){
        return 1;
    }
    else{
        return -1;
    }
   }
   int top(){
    if(isempty()){
        return -1;
    }
   else{
    return arr[front];
   }
   }
};
int main(){

}
// Now understanding the implementation of the queue using linked list
// now we implement the queue using linked list
#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int d) {
        Node* temp = new Node(d);
        if (rear == NULL) {
            rear = temp;
            front = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    int dequeue() {
        if (front == NULL) {
            return -1;
        } else {
            Node* temp = front;
            int dequeuedData = temp->data;
            front = front->next;
            if (front == NULL) {
                rear = NULL;
            }
            delete temp;
            return dequeuedData;
        }
    }
};

int main() {
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << queue.dequeue() << endl; 
    cout << queue.dequeue() << endl; 
    queue.enqueue(4);
    cout << queue.dequeue() << endl; 
    cout << queue.dequeue() << endl; 

    return 0;
}
// Now we learn how to implement a circular queue
# include<iostream> 
# include<queue>
# include<bits/stdc++.h>
using namespace std;
class Circularqueue{
      int *arr;
      int front;
      int rear;
      int size;
      Circularqueue(int n){
        this->size=n;
        arr=new int[size];
        front=rear=-1;
      }
    bool enqueue(int value){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return -1;
        }
        else if(front==-1){
            front=rear=0;
            arr[rear]=value;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            arr[rear]=value;
        }
        return true;
    }
    int dequeue(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        } 
        int ans=arr[front];
        arr[front]=-1;
          if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
               front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};
// stl of doubly ended queue
# include<iostream> 
# include<queue>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    d.pop_back();
    if(d.empty()){
        cout<<"deque is empty"<<endl;
    }
    else{
        cout<<"deque is not empty"<<endl;
    }

}*/
// implementation of deque using array
#include <bits/stdc++.h> 
class Deque
{
public:
    // Initialize your data structure.
    int *arr;
    int size;
    int front;
    int rear;
    Deque(int n)
    {
        // Write your code here.
        this->size=n;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
    // Check full condition
    if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1))) {
        // cout<<"Queue is full"
        return false;
    }
    else if(front == -1) {
        front = rear = 0;
    }
    else if(front == 0 && rear != size-1) {
        front = size-1;
    }
    else {
        front--;
    }
    arr[front] = x;
    return true;
}

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size)) {
            // Queue is full
            return false;
        } else if (front == -1) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
         if (front == -1) {
            // Queue is empty
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
       if(front==-1){
           return -1;
       }
       int ans=arr[rear];
       arr[rear]=-1;
       if(front==rear){
           front=rear=-1;
       }
       else if(rear==0){
           rear=size-1;
       }
       else{
           rear--;
       }
       return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
             return -1;
        }
        else{
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front==-1){
            return 1;
        }
        else{
            return 1;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
      if ((front == 0 && rear == size - 1) ||
          (front!=0&&rear == (front - 1 + size) % size)) {
        // Queue is full
        return true;
      }
      else{
          return false;
      }
        // Write your code here.
    }
};