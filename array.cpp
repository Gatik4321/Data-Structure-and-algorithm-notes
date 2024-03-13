/*# include<iostream>
using namespace std;
int main(){
    int n,i;
     cin>>n;
    int a[n];
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    cout<<a[i]; 
    
    return 0;
}
// program to finf he maximum elements of sn array
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<endl;
    }
    int max=0;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        
    }
     cout<<max;
    // for finding the minimum element of an array
    int min=0;
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
      cout<<min;
    return 0;

}
// to find an element inside an array using linear searching
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<endl;
    
    int key;
    // enter the key mean element that you wanr to found
    cout<<"enter the key";
    cin>>key;
   
        if(a[i]==key){
            cout<<"element found";
        }
        else{
            cout<<"element not found";
        }
    }
    return 0;
     
}
// to find the element of an aaray using linear search as a function
# include<iostream>
using namespace std;
int linearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
        }
    return -1;
    
    
}
int main(){
    int i,n;
    // enter the no. of elements inside an array
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(a,n,key)<<endl;
    return 0;

}
// program for binary search of an element inside an array
# include<iostream>
# include<math.h>
using namespace std;
int binarySearch(int a[],int n,int key){
    int s=0;
    int e=1;
    int mid=(s+e)/2;
    while(s<=e){
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int n,i;
    // enter no. of elements inside an array
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    int key;
    cin>>key;
    cout<<binarySearch(a,n,key)<<endl;
    return 0;
}
//binary sorting of elements inside an array
# include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n,i;
    // enter the no. of elements inside an array
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[n];
    }
    for(i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
                 if(a[j]<a[i]){
                    int t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                 }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<endl;
        return 0;
    }
}*/
// designing calculator using switch case statements
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any no. between 1 to 5";
    cin>>n;
    switch(n){
    case 1:
    int a,b,c;
    cin>>a>>b;
    c=a+b;
      cout<<c;
      break;
       case 2:
    int e,f,g;
    cin>>e>>f;
    g=e-f;
      cout<<g;
      break;
         case 3:
    int i,j,k;
    cin>>i>>j;
    k=i*j;
      cout<<k;
      break;
        case 4:
    int l,m,n;
    cin>>l>>m;
    n=l/m;
      cout<<n;
      break;
      case 5:
    int o,p,q;
    cin>>a>>b;
    q=o%p;
      cout<<q;
      break;
      default:
      cout<<"please enter any no. b/w 1 to 5";
      break;
    }
    return 0;
}

