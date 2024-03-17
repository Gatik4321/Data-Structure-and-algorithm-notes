/*# include<iostream>
using namespace std;
int main(){
    int i,j,a,b;
    cin>>a>>b;
    
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
          cout<<"*";
    }
    cout<<"\n";
    }

return 0;
}
# include<iostream>
using namespace std;
int main(){
    int i,j,a,b;
    cin>>a>>b;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
           if(i==1||i==a){
            cout<<"*";
             }
             else if(j==1||j==b){
                cout<<"*";
             }
             else{
                cout<<" ";
             }
        }
        cout<<"\n";
    }

}
# include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
 for(i=1;i<=n;i++){
    for(j=n;j>=i;j--){
        cout<<"*";
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
        for(j=1;j<=n;j++){
            if(i+j<=5){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
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
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
