/*# include<iostream> 
# include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    cout<<"front of queue is"<<q.front()<<endl; 
    q.push(15);
    cout<<"front of queue is"<<q.front()<<endl; 
    q.push(13);
    cout<<"size of queue is"<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"size of queue is"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}
//implementtion of the queue using array
# include<iostream>
# include<queue>
using namespace std;
class Queue{
    int * arr;
    int front;
     int rear;
     int size;
     public:
     Queue(){
        size=100001;
        arr=new int[size];
        front=0;
        rear=0;
     }
     void enqueue(int data){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
     }
     int front(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
     }
     bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
     }
     int dequeue(){
        if(front==rear){
            cout<<"pop annot happen as ypur stadck is empty"<<endl;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
     }
     return ans;
};
int main(){

}
// implementation of the queue stl(standard) template libraries
# include<iostream>
# include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(9);
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    cout<<"size of the queue is"<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<"size of the queue is"<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    cout<<"fornt element of the queue is"<<q.front()<<endl;
    return 0;
}
//Now we learn the implementation of the queue using an array
# include<iostream>
# include<queue> 
using namespace std;
class queue{
    int* arr;
    int size;
    int front;
    int rear;
  //making a contructor for intialising the values
  queue(int n){
    this->size=n;
    arr=new int[n];
    front=rear-1;
  }
  void enqueue(int data){
    if(rear==size){
        cout<<"Queue is full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
  }
  bool isempty(){
    if(front==rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
  }
  int front(){
    if(front==rear){
        return -1; //this is means queue is empty we cant return anything
    }
    else{
        return arr[front];
    }
  }
  //logic to remove an element in queue
  void dequeue(int data){
       if(front==rear){
        return -1;
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
};
int main(){

    return 0;
}
//now implementation of the queues using linked list
# include<iostream> 
# include<queue>
using namespace std;
class Queue{
    int data;
    Queue* next;
    Queue* front;
    Queue* rear;
    Queue(int d){
        this->data=d;
        this->next=NULL;
        this->front=NULL;
        this->rear->NULL;
    }
            Queue *temp=new Queue(data);
    void enqueue(int data){
        if(rear==NULL){
        // this means your queue is empty
        rear=front=temp;
        return;
        }
    else{
        rear->next=temp;
        rear=temp;
    }
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty element cant be deeted"<<endl;
        }
        Queue* temp=front;
        front=front->next;
        if(front==NULL){
            rear==NULL;
        }
        delete(temp);
    }
};*/
//implementation of the deque using stl
# include<iostream>
# include<queue> 
using namespace std;
class queue{
     queue* front;
     queue* rear;
     int size;
     int* arr;
     queue(){
        this->front=NULL;
        this->rear=NULL;
        this->size=6;
        arr=new int[size];
     }
    //  logic for the eque int the circulkra queue from the front
    // things to rememeber while solving this question
    // 1 check the condition that either queue is full or not
    // 2 check wether we are inseeting first element or not
     bool enqueue(int data){
           if(front==0 && rear==size-1|| rear==(front-1)%(size-1)){
            cout<<"Queue is full"<<endl;
            return false;
           }
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;        }
     }
};
int main(){

}