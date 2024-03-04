/*for the algo of the quick sort # include<iostream>
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int partition(int arr[],int s,int e){
       int pivot=arr[s];
       int cnt=0;
       for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
       }
       int pivotIndex=s+cnt;
       swap(arr[pivotIndex],arr[s]);
       int i=s,j=e;
       while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
       }
     return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    else{
      int p=partition(arr,s,e);
      //left part sorting using recursion
      quickSort(arr,s,p-1);
      // right wala part solve using recursion
      quickSort(arr,p+1,e);
    }

}
int main(){
    int arr[]={2,4,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}*/
//algorithm for the quick sort
# include<iostream>
# include<algorithm>
# include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cn=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cn++;
        }
    }
    int pivotIndex=s+cn;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex&&j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
} 
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
 
       int p=partition(arr,s,e);
       //left sorting using recursion
       quickSort(arr,s,p-1);
       //right part sort karna hai
       quickSort(arr,p+1,e);
    }

int main(){
    int arr[]={2,5,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}