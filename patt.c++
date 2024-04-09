# include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
              if((i+j<=5)){
                cout<<" ";
              }
              else{
                cout<<"*";
              }
        }
        cout<<"\n";
    }
    return 0;
}
