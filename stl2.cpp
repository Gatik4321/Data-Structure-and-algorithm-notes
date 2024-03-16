/*stl in cpp
# include<iostream>
# include<array>
using namespace std;
int main() {
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    cout<<"element at index 2"<<a.at(2)<<endl;
    cout<<a.empty()<<endl;
    //elemet at first index
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    return 0;
}
//to understand the vector in cpp language
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"size of vector"<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"size of vector"<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<"element at ndex 2"<<v.at(2)<<endl;
    cout<<"first elemnt"<<v.front();
    cout<<"last elemnt"<<v.back();
    for(int i:v){
        cout<<i<<endl;
    }
    v.pop_back();
    for(int i:v){
        cout<<i<<endl;
    }
     //to clear the vectorv.clear()
     vector<int> a(5,1);
     for(int i:a){
        cout<<i<<endl;
     }
     vector <int> last(a);
     for(int i:last){
       cout<<i<<endl;
     }
    return 0;
}
//deque in stl
# include<iostream>
# include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
     d.push_front(3);
      d.push_front(5);
       d.push_front(4);
        d.push_front(6);
    for(int i:d){
        cout<<i<<endl;
    }
    cout<<"element at index 1"<<d.at(1);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    d.erase(d.begin(),d.end());
    for(int i:d){
        cout<<i<<endl;
    }
    return 0;
}
//to understand the list in cpp
# include<iostream>
# include<list>
using namespace std;
int main(){
 list<int> l;
 l.push_back(1);
 l.push_front(2);
 l.push_back(4);
 l.push_front(5);
 for(int i:l){
    cout<<i<<endl;
 }
 l.erase(l.begin());
 //intialise the declared lisr
 list<int> n(5,100);
 list<int> n(l);
    return 0;
}
//to understand the concept of stack in tl cpp
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}
//to understand the concept of queue in cpp
# include<iostream>
# include<queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<s.front()<<endl;
    s.pop();
    cout<<s.front()<<endl;

}
//priority queue in cpp
# include<iostream>
# include<queue>
using namespace std;
int main(){
    //this is the intialisation of max heap in case of priority queue
    //intialisation of min heap
    priority_queue<int,vector<int>,greater<int>> w;
    priority_queue<int> s;
    w.push(1);
    w.push(3);
    w.push(2);
    w.push(0);
    int n=w.size();
    for(int i=0;i<n;i++){
        cout<<w.top()<<endl;
        w.pop();
    }
return 0;
}
//to understand the the algorithms in stl
# include<iostream>
# include<algorithm>
# include<vector> 
using namespace std;
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(3);
   v.push_back(3);
   v.push_back(4);
   v.push_back(6);
   cout<<"finding 6"<<binary_search(v.begin(),v.end(),6);
    int a=5;
    int b=3;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<b<<endl;
    reverse(v.begin(),v.end());
     sort(v.begin(),v.end());
     rotate(v.begin(),v.begin()+1,v.end());
     return 0;
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
}
program to understnad map in cpp language
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
//program to unserstand the sets in cpp
# include<iostream>
# include<bits/stdc++.h>
# include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(int i:s){
        cout<<i<<endl;
    }
    int n=s.count(5);
    cout<<n<<endl;
    s.erase(s.begin(),s.end());
    return 0;
}*/
//program to understand the maps in cpp
# include<iostream>
# include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="love";
    m[2]="babbar";
    m[13]="kumar";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.count(13);
    m.erase(13);
    return 0;
}