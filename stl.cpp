// undestanding stl in cpp language
/*undestanding arrays inf STL
# include<iostream>
# include<array>
using namespace std;
int main(){ 
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }63trf3
    3
    cout<<"element at index 2"<<a.at(2)<<endl;
    cout<<"empty or not"<<a.empty()<<endl;
    cout<<"first element of the array"<<a.front()<<endl;
    cout<<"last element of the array"<<a.back()<<endl;
    return 0;
}
//vectors in stl
# include<iostream>
# include<bits/stdc++.h>
# include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<endl;
    }
    cout<<v.capacity();
    v.push_back(1);
    cout<<v.capacity();
    v.push_back(2);
    cout<<v.capacity();
     v.push_back(4); 
    cout<<v.capacity();
    cout<<"element at index 2"<<v.at(2);
    cout<<"first element"<<v.front();
    cout<<"last lement"<<v.back();
    cout<<"before pop";
    for(int i:v){
        cout<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"afterpop";
    for(int i:v){
        cout<<i<<endl;
    }
    v.clear();
    cout<<v.size()<<endl;
   return 0; 
}
// program for understanding the deque
# include<iostream>
# include<bits/stdc++.h>
# include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<endl;
    }
    cout<<d.at(1)<<endl;
    cout<<d.front();//first element
    cout<<d.back();//last element
    d.erase(d.begin(),d.begin()+1);
    return 0;
}
//program to undestand the list in cpp;
# include<iostream>
# include<bits/stdc++.h>
# include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5,100);
    for(int i:n){
        cout<<i<<endl;
    }
    l.push_back(1);
    l.push_front(2);
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<endl;
    }
    return 0;
}
// to understand the stck in stl
# include<iostream>
# include<bits/stdc++.h>
# include<stack>
using namespace std;
int main(){
stack<string> s;
s.push("love");
s.push("babbar");
s.push("kumar");
cout<<"top element"<<s.top()<<endl;
cout<<"size of stack"<<s.size();
}
// to understand the queue in stl
# include<iostream>
# include<bits/stdc++.h>
# include<queue>
using namespace std;
int main(){
queue<string> s;
s.push("love");
s.push("babbar");
s.push("kumar");
cout<<"top element"<<s.front()<<endl;
cout<<"size of stack"<<s.size();
return 0;
}
//program for understanding the priority queue
# include<iostream>
# include<bits/stdc++.h>
# include<queue>
using namespace std;
int main(){
    // for the formation of max heap
    priority_queue<int> p;
    // for the formation of the minimym heap
    priority_queue<int,vector<int>,greater<int>> w;
    p.push(1);
    p.push(3);p.push(2);p.push(0);
    int n=p.size();
    for(int i=0;i<n;i++){
        cout<<p.top();
        p.pop();
    }
    return 0;
}
//to undertand the few stl agorithm
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
# include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(),6);
    int a=5;
    int b=3;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;;
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i;
    }

}
//program to undertstand the sets in stl;
# include<iostream>
# include<set>
using namespace std;
int main(){
 set<int> s;
    s.insert(5);
        s.insert(5);
    s.insert(5);

    s.insert(1);
    s.insert(6);
    s.insert(0);
    for(int i:s){
        cout<<i<<endl;;
    }
    s.erase(s.begin(),s.end());
    for(int i:s){
        cout<<i;
    }
    cout<<s.count(6)<<endl;

    return 0;
}*/
//program to understnad map in cpp language
# include<iostream>
# include<bits/stdc++.h>
# include<map>
using namespace std;
int main(){
    map<int,string> m;// how to define a map
    m[1]="love";
    m[2]="babbar";
    m[13]="kumar";
    for(auto i:m){
        cout<<i.first<<" "<<i.second;
    }
    cout<<m.count(13);
    m.erase(13);
       return 0;
}
/* cpp program to reverse an array using the concept of stl
# include<iostream>
# include<vector>
# include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v){
              int s=0;
              int e=v.size()-1;
              while(s<=e){
                swap(v[s],v[e]);
                s++;
                e--;
              }
     return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    vector<int> ans=reverse(v);
    print(ans);
    return 0;
}
//program to move zeros to one end of the array
# include<iostream>
# include<bits/stdc++.h>
# include<vector>
using namespace std;
vector<int> zeros(vector<int> v){
    int i=0;
    for(int j=0;j<v.size();j++){
            if(v[j]!=0){
                swap(v[j],v[i]);
                i++;
            }
    }
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
int main(){
    vector<int> v;
    v.push_back(4);     v.push_back(0);
     v.push_back(5);
     v.push_back(6);
     v.push_back(0);
     v.push_back(1);
     v.push_back(0);
     v.push_back(3);
     vector<int> ans=zeros(v);
     print(ans);
    return 0;
}
//program to merge two sorted arrays
# include<iostream>
# include<bits/stdc++.h>
# include<vector>
using namespace std;
int merge(int a[],int n,int b[],int m,int c[]){
           int i=0,j=0;
           int k=0;
           while(i<n&&j<m){
            if(a[i]>b[j]){
                c[k]=b[j];
                k++;
                j++;
            }
            else{
                c[k]=a[i];
                k++;
                i++;
            }
           }
            while(i<n){
               c[k]=a[i];
               k++;
               i++;
            }
            while(j<m){
                c[k]=b[j];
                k++;
                j++;
            }
           
}
int print(int c[],int n){
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
}
int main(){
    int a[5]={1,3,5,7,9};
    int b[3]={2,4,6};
    int c[]={0};
    merge(a,5,b,3,c);
    print(c,8);
    return 0;
}
//program to rotate a an array by a no. 
# include<iostream>
# include<bits/stdc++.h>
# include<array>
# include<vector>
using namespace std;
vector<int> rotate(vector<int> v,int key){
    int n=v.size();
    vector<int> temp(v.size());
    for(int i=0;i<n;i++){
        temp[(i+key)%n]=v[i];
    }
    return v;
}

int main(){
    vector<int> v;
    v.push_back(10);
        v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    int key=3;
    vector<int> ans=rotate(v,key);
}
# include<iostream>
# include<bits/stdc++.h>
# include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    // n be the no. of elements in an array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+key)%n]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}
// program to check whether the array is sorted or rotated 
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elemnts in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[n-1]>a[0]){
        count++;
    }
    cout<<count;
    return 0;
}
// program for the sum or addition of two arrays
# include<iostream>
# include<bits/stdc++.h>
# include<array>
# include<vector>
using namespace std;
int main(){
    int n,m;
    // where n and m be the sie of two arrays
    cin>>n;
    cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    vector<int> ans;
    int i=n-1;
    int j=m-1;
    int carry=0;
    while(i>=0&&j>=0){
        int val1=a[i];
        int val2=b[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10; 
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
         int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }   
    for(int i:ans){
        cout<<i<<endl;
    }
    return 0;
}*/
//stl in cpp
# include<iostream>
# include<array>
using namespace std;
int main() {
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    return 0;
}