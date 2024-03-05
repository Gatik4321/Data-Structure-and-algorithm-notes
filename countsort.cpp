/*#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elements int he aray
    int a[n];
    int b[n];
    //input from the elements of the array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //find the maximum element in the array
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    //initialize count array to 0
    int count[max+1];
    memset(count, 0, sizeof(count));
    //store count of each element in the count array
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    //store cumulative count of each element in the count array
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    //place the elements in sorted order in the output array
    for(int i=n-1;i>=0;i--){
        b[count[a[i]]-1]=a[i];
        --count[a[i]];
    }
    //print the sorted array
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
//program for the implementation of the count sort
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elements in the array
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int count[max+1];
    memset(count,0,sizeof(count));
    //intialsing the count array as the elements presebt;
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    //entering the element in the new array
    for(int i=0;i<n;i++){
        b[count[a[i]-1]]=a[i];
        --count[a[i]];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}
//count sort part 1
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
    //now finding the max element 
    int max=INT_MIN;
    for(int i=0;i<n;i++){
            if(max<a[i]){
                max=a[i];
            }
    }
    int count[max+1];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=1;i<=max;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=0;i<max;i++){
        cout<<count[i]<<" ";
    }
    return 0;
}
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //finding the maximum element in the array
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int count[max+1];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=1;i<max;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i<n;i++){
        b[count[a[i]]-1]=a[i];
        --count[a[i]];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int count[max+1];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=0;i<=max;i++){
        cout<<count[i]<<" ";
    }
    return 0;
}
//algorithm for the count sort in cpp
# include<iostream>
# include<bits/stdc++.h>
# include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    //taking input of all the elements
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //find the maximum element in the array
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    //now creating an array named count
    int count[max+1];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=1;i<=max;i++){
          count[i]=count[i]+count[i-1];
    }
    //now inserting the element in the another array
    for(int i=0;i<n;i++){
        b[count[a[i]]-1]=a[i];
        --count[a[i]];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    int *count=new int [max+1];
    memset(count,0,sizeof(int)*(max+1));
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
    for(int i=0;i<=max;i++){
        cout<<count[i]<<" ";
    }
    return 0;
}
//algo for the quick sort
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int parti(int a[],int s,int e){
         int pivot=a[s];
         int cn=0;
         for(int i=s+1;i<=e;i++){
            if(a[i]<pivot){
                cn++;
            }
         }
         int pivotindex=s+cn;
         swap(a[pivotindex],a[s]);
         int i=s;
         int j=e;
         while(i<pivotindex&&j>pivotindex){
            while(a[i]<pivot){
                i++;
            }
            while(a[j]>pivot){
                j--;
            }
            if(i<pivotindex&&j>pivotindex){
                swap(a[i++],a[j--]);
            }
         }
         return pivotindex;
}
void quicksort(int a[],int s,int e){
       if(s>=e){
        return;
       }
       else{
        int p=parti(a,s,e);
        //sorting the right part of the array
        quicksort(a,p+1,e);
       }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
//program for the merge sort
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
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
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+(e-s)/2);
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[]={2,5,1,6,9};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;
class Box{  
//l,b,h are integers representing the dimensions of the box
private:
int lenght;
int breadth;
int height;
Box(){
    lenght=breadth=height=0;
}
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}






