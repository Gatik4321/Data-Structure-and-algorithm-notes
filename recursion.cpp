/*program to find the factorial of a number
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
       return n*fact(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int res;
    res=fact(n);
    cout<<res<<endl;
    return 0;
}
//recursion problem for finding the power of two
# include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*power(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int res=power(n);
    cout<<res<<endl;
    return 0;
}
//program for printing counting using recursion
# include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return n;
    }
    else{
        print(n-1);
              cout<<n<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<print(n)<<endl;
    return 0;
}
//understanding the concept of source and destination
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void reachHome(int src,int des){
    cout<<"source"<<src<<"destination"<<des<<endl;
    if(src==des){
       cout<<"pahunch gya"<<endl;
       return ;
           }
           else{
            src++;
            reachHome(src,des);
           }
}
int main(){
    int src=1;
    int des=10;
    cout<<endl;
    reachHome(src,des);
    return 0;
}
// program to find the fibonacci series element
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int fib(int n){
    int ans=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
     ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    //enter the term of fibonacciseries you want to print
    cout<<fib(n);
    return 0;
}
//count ways to reach the n stairs
// program to find the fibonacci series element
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int stairs(int n){
    int ans=0;
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     ans=stairs(n-1)+stairs(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    //enter the term of fibonacciseries you want to print
    cout<<stairs(n);
    return 0;
}
// to understand the logic for the say digit
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void sayDigit(int n,string arr[]){ 
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    sayDigit(n,arr);
    cout<<arr[digit]<<endl;

}
int main(){
    string arr[10]={"zero","first","second","third","fourth","fifth","sixth","seven","eight","nine"};
    int n;
    cin>>n;
    sayDigit(n,arr);
    return 0;
}
//program to decide wether an array is sorted or not using recursion
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
bool ans(int a[],int n){
    if(n==0||n==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    else{
       return ans(a+1,n-1);
    }
}
int main(){
    int n;
    cin>>n;
    //n be the no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<ans(a,n)<<endl;
    return 0;
}
//program to print the sum of an array using recursion
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int w=0;
int sum(int a[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return a[0];
    }
    else{
        int remainingpart=sum(a+1,n-1);
        int w=a[0]+remainingpart;
        return w;
    }
}
int main(){
    int n;
    cin>>n;
    //n be the no. of elelements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(a,n)<<endl;
    return 0;
}
//linear search of element in an array
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[],int n,int key){
           if(n==0){
            return 0;
           }
        if(a[0]==key){
        return true;
        }
        else{
          return linearsearch(a+1,n-1,key);
        }
}
int main(){
    int n;
    cin>>n;
    //n be the no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(a,n,key)<<endl;
    return 0;
}
//algorithm for the selection sort
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elelements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int minidx=i;               
        for(int j=i+1;j<n;j++){
            if(a[minidx]>a[j]){
               minidx=j;
            }
               swap(a[j],a[minidx]);
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}
//program to understand the insertion sort
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=1;i<n;i++){
        int temp=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
  for(int i=0;i<n;i++){
    cout<<a[i];
  }
  return 0;
}
//binary search of elelemnt in an array using recursion
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
      if(s>e){
        return false;
      }
      int mid=(s+(e-s)/2);
      if(arr[mid]==key){
        return true;
      }
      else if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
      }
      else{
           return binarysearch(arr,s,mid-1,key);
      }
}
int main(){
    int arr[]={2,4,6,10,16,18};
    int size=6;
    int key=7;
    cout<<"elelemnt presen in the array or not"<<binarysearch(arr,0,6,key);
    return 0;
}
//program to reverse a string using recursion
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
using namespace std;
void reverse(int i,int j,string& s){
    if(i>j){
        return;
    }
    else{
        swap(s[i],s[j]);
        i++;
        j--;
       reverse(i,j,s);
       }
}
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    reverse(0,n-1,s);
    cout<<s<<endl;
    return 0;
}
//to check wether a string is plaidrome or not
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0;
    int flag=0;
    int n=s.size();
    for(int i=0;i<n;i++){
          if(s[i]!=s[n-1-i]){
             flag=1;
          }
    }
    if(flag==0){
      cout<<"string is palidrome";
    }
    else{
        cout<<"string is not palidrome";
    }
    return 0;
}
//to check wether a string is palidrome using the concept of recursion
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int i=0;
int flag=0;
bool palidrome(string& s,int n){
       if(n==0){
        return 0;
       }
       if(n==1){
        return 1;
       }
       if(s[i]==s[n-1-i]){
       i++;
        flag=1;
       palidrome(s,n);
       }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    cout<<palidrome(s,n)<<endl;
    return 0;
}
//calculating the power of a no. using recursion
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
       return  a*ans *ans;
    }
}
int main(){
    int a,b;
    //we have to find pow(a,b)
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}
//bubble sorting using recursion
# include<iostream>
using namespace std;
void sortArray(int *arr,int n){
    if(n==0||n==1){
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        sortArray(arr,n-1);
    }
}
int main(){
    int arr[5]={2,5,1,6,9};
     sortArray(arr,5);
     for(int i=0;i<5;i++){
        cout<<arr[i];
     }

    return 0;
}
//merge sort of ellemnt in an array
# include<iostream>
# include<bits/stdc++.h>
int merge(int *arr,int s,int e){
    int mid=(s+(e-s)/2);
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int t=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[t++];
    }
       t=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[t++];
        int index1=0;
        int index2=0;
        t=s;
        while(index1<len1&&index2<len2){
             if(first[index1]<second[index2]){
                arr[t++]=first[index1++];
             }
             else{
                arr[t++]=second[index2++];
             }
             while(index1<len1){
                arr[t++]=first[index1++];
             }
             while(index2<len2){
                arr[t++]=second[index2++];
             }
        }

    }

}
//logic for the merge sort
void mergeSort(int *arr,int s,int e){
         if(s>=e){
            return;
         }
        int mid=(s+(e-s)/2);
        //left part sorting alorithm
        mergeSort(arr,s,mid);
        //right part sorting algorithm
        mergeSort(arr,mid+1,e);
        //now merge the two arrays
        merge(arr,s,e);
}
using namespace std;
int main(){
    int arr[]={2,4,1,6,9};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
//subsets and subsequence of a string
# include<iostream>
# include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    // be the no. of elements in an array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }cout<<endl;
        }
    }
    return 0;
}
//subsets
# include<iostream>
# include<algorithm>
# include<vector>
using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> ans){
      if(index>=nums.size()){
        ans.push_back(output);
        return;
      }
      //case of exclude
      solve(nums,output,index+1,ans);
      //case of include
      int element=nums[index];
      output.push_back(element);
      solve(nums,output,index+1,ans);
}

int main(){
    vector<vector<int>> ans;
     vector<int> nums={1,2,3};
     vector<int> output;
     int index=0;
    solve(nums,output,index,ans);
    return 0;
}
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

void recu(string s, string output, int index, map<int,string> m, vector<string>& ans){
    if(index >= s.size()){
        ans.push_back(output);
        return;
    }
    int number = s[index] - '0';
    string value = m[number];
    for(int i = 0; i < value.size(); i++){
        output.push_back(value[i]);
        recu(s, output, index + 1, m, ans);
        output.pop_back();
    }
}

int main(){
    string s;
    string output;
    vector<string> ans;
    int index = 0;
    map<int,string> m;
    m[0] = "";
    m[1] = "";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    getline(cin, s);
    recu(s, output, index, m, ans);
    for(auto str : ans){
        cout << str << " ";
    }
    return 0;
}
//to find out subset using recursion
//exclude and include case
# include<iostream>
# include<cstring>
# include<vector>
using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> ans){
       if(index>=nums.size()){
        ans.push_back(output);
        return;
       }
       //case of exclude
       solve(nums,output,index+1,ans);
       //case of include
       int element=nums[index];
       output.push_back(element);
       solve(nums,output,index+1,ans);
}
int main(){
    vector<vector<int>> ans;
    vector<int> nums={1,2,3};
    int index=0;
    vector<int> output;
    solve(nums,output,index,ans);
return 0;
}
//phone keypad problem
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

void recu(string s, string output, int index, map<int,string> m, vector<string>& ans){
    if(index >= s.size()){
        ans.push_back(output);
        return;
    }
    int number = s[index] - '0';
    string value = m[number];
    for(int i = 0; i < value.size(); i++){
        output.push_back(value[i]);
        recu(s, output, index + 1, m, ans);
        output.pop_back();
    }
}

int main(){
    string s;
    string output;
    vector<string> ans;
    int index = 0;
    map<int,string> m;
    m[0] = "";
    m[1] = "";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    getline(cin, s);
    recu(s, output, index, m, ans);
    for(auto str : ans){
        cout << str << " ";
    }
    return 0;
}
//recursive function to find out the permutation of a string
# include<iostream>
# include<cstring>
# include<vector>
using namespace std;
void solve(vector<vector<int>> ans,int index,vector<int> nums){
    if(index>=nums.size()){
       ans.push_back(nums);
       return;
    }
    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(ans,index+1,nums);
        swap(nums[index],nums[j]);
    }
}
int main(){
    vector<vector<int>> ans;
    vector<int> nums={1,2,3};
    int index=0;
    solve(ans,index,nums);
   for(auto& v:ans) {
        for(auto& num:v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}*/
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

void recu(string s, string output, int index, map<int,string> m, vector<string>& ans){
    if(index >= s.size()){
        ans.push_back(output);
        return;
    }
    int number = s[index] - '0';
    string value = m[number];
    for(int i = 0; i < value.size(); i++){
        output.push_back(value[i]);
        recu(s, output, index + 1, m, ans);
        output.pop_back();
    }
}

int main(){
    string s;
    string output;
    vector<string> ans;
    int index = 0;
    map<int,string> m;
    m[0] = "";
    m[1] = "";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    getline(cin, s);
    recu(s, output, index, m, ans);
    for(auto str : ans){
        cout << str << " ";
    }
    return 0;
}