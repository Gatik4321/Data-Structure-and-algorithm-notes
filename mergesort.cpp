/*now writing the algo for ht e merge sorting
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
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
     }
     //merge
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
void mergeSort(int *arr,int s,int e){ 
    if(s>=e){
        return;
    } 
     int mid=(s+(e-s)/2);
    //left part sort karna hai
    mergeSort(arr,s,mid);
    //right part sort karna hai
     mergeSort(arr,mid+1,e);
     //merge
     merge(arr,s,e);
}
int main(){
    int arr[15]={2,5,1,6,9};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}*/
//program for the merge sort
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
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
    }
    //merge 
    int index1=0;
    int index2=0;
    t=s;
    while(index1<len1 && index2<len2){
          if(first[index1]<second[index2]){
              arr[t++]=first[index1++];
          }
          else{
            arr[t++]=second[index2++];
          }
    }
          while(index1<len1){
            arr[t++]=first[index1++];
          }
          while(index2<len2){
             arr[t++]=second[index2++];
          }

}
void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+(e-s)/2);
    //left part sort karna hai
    mergeSort(arr,s,mid);
    //right part sort karna hai
    mergeSort(arr,mid+1,e);
    //now merge two sorted arrays
    merge(arr,s,e);
}
int main(){
    int arr[]={2,5,1,6,9};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}