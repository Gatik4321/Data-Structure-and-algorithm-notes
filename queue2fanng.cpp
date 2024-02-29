/*logic for the queue reversal
struct Queue* rev(struct Queue* Q)
{
    stack<int> s;
    while(!Q.empty()){
        int element=Q.front();
        Q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element=s.top();
        s.pop();
        Q.push(element);
    }
    return Q;
}
//Now quesion is find negative integer in every kth size window
# include<iostream>
# include<stack>
# include<vector>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],long long int N,long long int K){
       deque<long long int>dq;
       vector<long long> ans;
       //we will processing the first kth row
       for(int i=0;i<K;i++){
        if(A[i]<0){
            dq.push_back(i);
        }
       }
       //Now storing the answer of the first kyh window
       if(dq.size()>0){
        ans.push_back(A[dq.front()]);
       }
       if(dq.size()<0){
        ans.push_back(0);
       }
       //now we are applying the for the processing of the remaining windows
       for(int i=K;i<N;i++){
               if(!dq.empty()&&i-dq.front()>=K){
                dq.pop_front();
               }
       if(A[i]<0){
        dq.push_back(i);
       }
       }
       if(dq.size()>0){
        ans.push_back(A[dq.front()]);
       }
       else{
        ans.push_back(0);
       }
       return ans;

}
int main(){
}
// in this question we have to reverse the first k elements of the queue
# include<iostream>
# include<vector>
#include<stack>
#include<queue>
using namespace std;
queue<int> modifyQueue(queue<int> q,int k){
    // we have created a stack for the input of the element--
stack<int> s;
// step1:popfirst k elements of the queue and put them into stack
for(int i=0;i<k;i++){
    int val=q.front();
    q.pop();
    s.push(val);
}
while(!s.empty()){
    int val=s.top();
    s.pop();
    q.push(val);
}
int t=q.size()-k;
while(t--){
    int value=q.front();
    q.pop();
    q.push(value);
}
return q;
}
int main(){
}

// question to find the non-repeating character in a string
# include<iostream>
# include<stack>
# include<queue>
# include<unordered_map>
using namespace std;
class Solution{
   public:
   string FirstNonRepeating(string A){
    unordered_map<char,int> count;
    // count for storing the count of the string
        queue<int> q;
        string ans="";
        for(int i=0;i<A.size();i++){
            char ch=A[i];
            count[A[i]]++;
            q.push(ch);
        while(!q.empty()){
            if(count[q.front()]>1){
                    q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
        }
        return ans;
   }
};
int main(){

}
// logic to implement the n queues in an array
# include<iostream>
# include<queue>
# include<stack>
using namespace std;
class kQueue{
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot;
    public:
    kQueue(int n,int k){
        //k is the no. of queues in an array
        //N is the no. of elements present in the array
        this->n=n;
        this->k=k;
        front=new int[k];
        rear=new int[k];
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        next=new int[n];
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
        arr=new int[n];
        freespot=0;
    }
    void enqueue(int data,int qn){
        //first checking the condition of the stack overflow
        if(freespot==-1){
            cout<<"No empty space is present";
            return;
        }
        //find the first free index
        int index=freespot;
        //finding the next free index present in the next array
        freespot=next[index];
        //check wether it is the first element of the of stack
        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]]=index;
        }
        // update next as it is filled it will be -1
        next[index]=-1;
        rear[qn-1]=index;
        arr[index]=data;
    }

    // Now we are witing the logic for the deque
    // ab hum  queues in an array mein deletion perform karenge
    int deque(int qn){
         if(front[qn-1]==-1){
            return;
         }
         else{
            int index=front[qn-1];
            front[qn-1]=next[index];
            next[index]=freespot;
            freespot=index;
            return arr[index];
         }
    }
};*/
// In this question we have to implememnt k stackd in an array
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class kQueue
{
public:
    int *arr;
    int N;
    int *front;
    int *next;
    int K;
    int *rear;
    int freespot;
    kQueue(int n, int k)
    {
        this->N = n;
        this->K = k;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        next = new int[n];
        freespot = 0;
    }
    void enqueue(int data, int qn)
    {
        // we are checking the overflow condition in the case of the push function
        if (freespot == -1)
        {
            cout << "condition of the stack overflow" << endl;
            return;
        }
        else
        {
            // it is the first empty index inside the stack
            int index = freespot;
            // now updating the freespot for the next value
            freespot = next[index];
            // if we are putting the first element inside the queue
            if (front[qn - 1] == -1)
            {
                front[qn - 1] = 0;
            }
            else
            {
                next[rear[qn - 1]] = index;
            }
            next[index] = -1;
            rear[qn - 1] = index;
            arr[index] = data;
        }
    }
    // above writte the logic of how to implememnt k queue in an array
    // Now we understand how to perform the deque operation
    int deque(int qn){
        //first we are checking that there is an element present inside the queue or not 
        // or it will be condition of the underflow
        if(front[qn-1]==-1){
            cout<<"Condition for the queue underflow"<<endl;
            return;
        }
        else{
            int index=front[qn-1];
            front[qn-1]=next[index];
            next[index]=freespot;
            freespot=index;
            return arr[index];
        }
    }
};
int main()
{
}
/*we have to find the sum of the maximum and minium in the every kth sized wndow
#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr, int n, int k) {

    deque<int> maxi(k);
    deque<int> mini(k);

    //Addition of first k size window

    for(int i=0; i<k; i++) {

        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0;

    ans += arr[maxi.front()] + arr[mini.front()];

    //remaining windows ko process karlo
    for(int i=k; i<n; i++) {



        //next window

        //removal
        while(!maxi.empty() && i - maxi.front() >=k) {
            maxi.pop_front();
        }

        while(!mini.empty() && i - mini.front() >=k) {
            mini.pop_front();
        }

        //addition

        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}

int main() {


    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;


    return 0;
}*/
//in this question we have to find the maximuma dn minimum element in the kth sized window
# include<iostream>
# include<stack>
# include<queue>
using namespace std;
int solve(int *arr,int n,int k){
    deque<int> maxi(k);
    deque<int> mini(k);
    for(int i=0;i<k;i++){
    while(!maxi.empty()&&arr[maxi.back()]<=arr[i]){
             maxi.pop_back();
}
    while(!mini.empty()&&arr[mini.back()>=arr[i]]){
        mini.pop_back();
    }
    maxi.push_back(i);
    mini.push_back(i);
}
int ans=0;
ans+=arr[maxi.front()+arr[mini.front()]];
for(int i=k;i<n;i++){
    //now we are witing the logic for processing inside the kthsize window
    while(!maxi.empty()&&i-maxi.front())
}
}
int main(){
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k)<<endl;
    return 0;
}