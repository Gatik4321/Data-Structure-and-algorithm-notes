/*# include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int num=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num ;
            num++;
        }
        cout<<"\n";
    }
    return 0;
}
# include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
     for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
// program to print the reverse of a number
# include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>b;
    while(b>0){
        a=b%10;
        cout<<a;
        b=b/10;
    }
    return 0;
}
# include<iostream>
using namespace std;
int main(){
    int i,j,n;
    // enter any no. upto which you want ot print the pattern
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}*/
# include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
          if((i+j)%2==0){
            cout<<"1";
          }  
          else{
            cout<<"0";
          }
        }
        cout<<"\n";
    }
    return 0;
}
