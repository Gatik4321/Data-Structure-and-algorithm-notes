//Writing the code for deleting an elemnet from thr middle of the stack
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class solution{
void solve(stack<int>& inputStack,int count,int size){
    if(count==size/2){
        inputStack.pop();
        return;
    }
    int num=inputStack.top();
    inputStack.pop();

    solve(inputStack,count+1,size);

    inputStack.push(num);
}
void deleteMiddle(stack<int>& inputStack,int N){
    int count=0;
    solve(inputStack,count,N);
}
};
int main(){

}