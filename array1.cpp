/*binary sorting of elements inside an array
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n,i;
    // enter the no. of elements inside an array
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
                 if(a[j]<a[i]){
                    int t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                 }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    return 0;
}
// binary sorting of elements inside an array
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    // no. of elements inside an array
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=1;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
// program for insertion sort of an element in an array
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    // enter the no. of elements you want to print in the array
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
// to update the array element with maximum of all previous elements 
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int i,n;
    // enter the no. of elements inside an array
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
          cin>>a[i];
    }
    int mx=0;
    for(i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx;
    }
    return 0;
}*/
// program to print the sum of all the sub arrays
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int i,n;
    // enter the number of elements inside an array 
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
          cin>>a[i];
    }
    for(i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr+=a[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}

