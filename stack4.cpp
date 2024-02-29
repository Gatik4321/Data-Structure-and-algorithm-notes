//in this we learn how to evaluate the prefic expressions
//code for solving the prefix expressions
// Online C++ compiler to run C++ program online
# include<iostream>
# include<stack>
# include<math.h>
# include<string>
using namespace std;
int prefixEvaluation(string s){
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(op1^op2);
                break;
            }
        }
    }
    return st.top();
}
int main(){
    cout<<prefixEvaluation("-+7*45+20");
    return 0;
}


//how to solve the postfix expressions
// Online C++ compiler to run C++ program online
# include<iostream>
# include<stack>
# include<math.h>
# include<string>
using namespace std;
int prefixEvaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int main(){
    cout<<prefixEvaluation("46+2/5*7+");
    return 0;
}



// infix to POWER_LEVEL_USER_NOTIFY_EXEC
# include<iostream>
# include<stack>
using namespace std;

int prec(char c) {
    if(c == '^') {
        return 3;
    }
    else if(c == '*' || c == '/') {
        return 2;
    }
    else if(c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

string infixtoPostfix(string s) {
    stack<char> st;
    string res;
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            res += s[i];
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && prec(st.top()) >= prec(s[i])) { // Fix here
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    cout << infixtoPostfix("(a-b/c)*(a/k-l)");
    return 0;
}
