/*cocept of try catch and throw
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            cout<<"Amount entered successfully"<<endl;
        }
        else{
            throw(a);
        }
    }
    catch(int a){
        cout<<"sorry this is a neagative value"<<endl;
    }
    cout<<"Thankyou for banking with us"<<endl;
    return 0;
}*/
//Not adding throw inside a try
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            cout<<"Amount entered successfully"<<endl;
        }
    }

    catch(int a){
        cout<<"sorry this is a neagative value"<<endl;
    }
    cout<<"Thankyou for banking with us"<<endl;
    return 0;
}