// /*#include <iostream>
// # include<stack>
// using namespace std;
// class Stack
// {
// public:
//     int top;
//     int *arr;
//     int size;
//     Stack(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int element)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = element;
//         }
//         else
//         {
//             cout << "Stack Overflow" << endl;
//         }
//     }
//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack Underflow" << endl;
//         }
//     }
//     int peek()
//     {
//         if (top >= 0 && top <= size)
//         {
//             return arr[top];
//         }
//         else{
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//     }
//     bool isEmpty()
//     {
//         if(top==-1){
//             return true;
//         }
//     }
// };
// int main()
// {  
//    Stack st(5);
//    st.push(22);
//    st.push(43);
//    st.push(44);
//    st.push(44);
//    st.push(44);
//    st.push(44);
//    cout<<st.peek()<<endl;
//    st.pop();
//    cout<<st.peek()<<endl;
//    st.pop();
//    cout<<st.peek()<<endl;
//     st.pop();
//    cout<<st.peek()<<endl;
//    if(st.isEmpty()){
//     cout<<"Stack is Empty"<<endl;
//    }
//    else{
//      cout<<"Stack is not Empty"<<endl;
//    }
//     /*creation of stack
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);

//    //pop operation
//    s.pop();
//    cout<<"printing top element in stack"<<s.top()<<endl;
//    if(s.empty()){
//     cout<<"stack is empty"<<endl;
//    }
//    else{
//     cout<<"stack is not empty"<<endl;
//    }
//    cout<<"size of stack is"<<s.size()<<endl;
//    cout<<"peek element of the stack is"<<s.peek()<<endl;
//    return 0;
// //implementation of the stack of stl
// # include<iostream>
// # include<stack> //library for the stack
// using namespace std;
// int main(){
//     //creation of the stack
//   stack<int> st;
//   //pushing the elements inside the stack
//    st.push(3);
//    st.push(4);
//    st.push(5);
//    st.push(6);
//    st.push(7);
//    st.push(8);
//    st.pop();
//    cout<<st.top()<<endl;
//    cout<<st.size()<<endl;
//    if(st.empty()){
//     cout<<"Stack is empty"<<endl;
//    }
//    else{
//     cout<<"stack is not empty"<<endl;
//    }
// } 
// //implemntation of the stack in an array
// # include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int top;//use to point the index
//     int *arr;//array is created
//     int size;//size of the array
//     //creating a constructor to take the input
//   Stack(int size){
//     this->size=size;
//     arr=new int[size];
//     this->top=-1;
//   }
//   //function of the push
//   void push(int element){
//     if(size-top>1){
//         top++;
//         arr[top]=element;
//     }
//     else{
//         cout<<"Stack Overflow";
//     }
//   }
//   //for poping/deleting the value
//   void pop(){
//     if(top>=0){
//         top--;
//     }
//     else{
//         cout<<"stack underflow";
//     }
//   }
//   //peek element od the array
//   int peek(){
//   if(top>=0 && top<=size){
//           return arr[top];
//   }
//   else{
//     cout<<"array is empty";
//     return -1;
//   }
//   }
//   //checking wether the array is empty or not
//   bool erase(){
//     if(top==-1){
//         return 1;
//     }
//     else{
//         return false;
//     }
//   }
// };
// int main(){
//   Stack st(5);
//   st.push(22);
//   st.push(43);
//   st.push(44);
//   st.pop();
//   cout<<st.peek()<<endl;
//    st.pop();
//   cout<<st.peek()<<endl;
//  if(st.erase()){
//     cout<<"stack is empty";
//  }
//  else{
//     cout<<"not empty";
//  }
// }
// //Implementation of 2 stacks in an arrays
// //in this case we have to intialise 2 stacks in an array
// //that is one is from the starting and one is from the ending
// # include<iostream>
// using namespace std;
// class Twostack{
//     public:
//     int top1;
//     int top2;
//     int *arr;
//     int size;
//     //creating a constructor for pointing the values
//     Twostack(int size){
//         this->size=size;
//         top1=0;
//         top2=size;
//         arr=new int[size];
//     }
//     void push1(int num){
//         if(top2-top1>1){
//            top1++;
//          arr[top1]=num;
//         }
//         else{
//             cout<<"stack overflow"<<endl;
//         }
//     }
//     void push2(int num){
//         if(top2-top1>1){
//             top2--;
//             arr[top2]=num;
//         }
//         else{
//             cout<<"stack overflow"<<endl;
//         }
//     }
//     int pop1(){
//         if(top1>0){
//             int ans=arr[top1];
//             top1--;
//             return ans;
//         }
//     }
//      int pop2(){
//         if(top2<size){
//             int ans=arr[top2];
//             top2++;
//             return ans;
//         }
//     }
// };
// int main(){
//     Twostack st(5);
//     st.push1(1);
//     st.push1(2);
//     st.push1(3);
//     st.push2(4);
//     st.push2(5);

//     return 0;
// }
// // Implementation of the stack using linked list
// # include<iostream>
// # include<bits/stdc++.h>
// # include<stack>
// using namespace std;
// class Node{
//     int data;
//     Node* next;
//     Node* top;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->top=NULL;
//     }
//   bool isempty(){
//     if(top==NULL){
//         return 1;
//     }
//     else{
//         return -1;
//     }
//   }
//   void push(int value){
//     Node *ptr=new Node(value);
//     ptr->data=value;
//     ptr->next=top;
//     top=ptr;
//   }
//   void pop(){
//     if(isempty()){
//         cout<<"stack is empty"<<endl;
//     }
//     else{
//         Node *ptr=top;
//         ptr=ptr->next;
//         delete(ptr);
//     }
//   }
//   void showTop(){
//     if(isempty()){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<top->data<<endl;
//     }
//   }
// };
// int main(){
// }*/
// reverse a string using stack
// # include<iostream>
// # include<stack>
// # include<string>
// using namespace std;
// int main(){
//     stack<char> s;
//     string ch="gatikalagh";
//     for(int i=0;i<ch.size();i++){
//         char t=ch[i];
//         s.push(t);
//     }
//     string ans="";
//   while (!s.empty()) {
//     char ch = s.top();
//     ans.push_back(ch);
//     s.pop();
// }
//     cout<<"reverse string is"<<ans;
//     return 0;
// }
// //revrse a string with the help of stack
// # include<iostream>
// # include<stack>
// # include<cstring>
// using namespace std;
// int main(){
//     string ch="gatikalagh";
//     stack<char> s;
//     for(int i=0;i<ch.size();i++){
//         char che=ch[i];
//           s.push(che);
//     }
//     string ans="";
//     while(!s.empty()){
//         char ch=s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout<<"reverse string is "<<ans<<endl;
// }*/
// // code for designing a special stack problem
// # include<iostream>
// # include<algorithm>
// # include<stack>
// using namespace std;
// class Specialstack{
//    //defining the data memebers use for te problem
//    stack<int> s;
//    int mini;
//    public:
//    void push(int data){
//     if(s.empty()){
//         s.push(data);
//         mini=data;
//     }
//     else{
//         if(data<mini){
//             int value=2*data-mini;
//             s.push(value);
//             mini=data;
//         }
//         else{
//             s.push(data);
//         }
//     }
//    }
//    int pop(){
//     // checking the condition for the underflow
//     if(s.empty()){
//         return -1;
//     }
//     int curr=s.top();
//     s.pop();
//     if(curr>mini){
//         return curr;
//     }
//     else{
//         int prevmini=mini;
//         int value=2*mini-curr;
//         mini=value;
//         return prevmini;
//     }
//    }
//    bool isempty(){
//     return s.empty();
//    }
//    int top(){
//     if(s.empty()){
//         return -1;
//     }
//     else{
//         return s.top();
//     }

//    }
// };
// int main(){

// }

//today implementtaion of stack
# include<iostream>
# include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"element at the top is"<<s.top();
    s.pop();
    cout<<"element at the top is"<<s.top();

    cout<<"size of the sytack is"<<s.size()<<endl;
    if(s.empty()){
        cout<<"stac is emptyt"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}