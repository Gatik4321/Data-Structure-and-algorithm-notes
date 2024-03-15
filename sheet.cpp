/*program to print  the first three largest eleemnt of the array
# include<iostream>
# include<bits/stdc++.h>
# include<array>
using namespace std;
int firstlargest(int a[],int n){
      int first,second,third;
      first=second=third=INT_MIN;
      for(int i=0;i<n;i++){
        if(a[i]>first){
          third=second;
          second=first;
            first=a[i];
        }
        else if(a[i]>second&&a[i]!=first){
                 third=second;
                 second=a[i];
        }
        else{
            third=a[i];
        }
      }
      cout<<first<<second<<third;
}
int main(){
    int n;
    //n be tthe no. of elements in the array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   firstlargest(a,n);
    return 0;
}
//another logic for finding the first three largest eleemnt of the array
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1];
    cout<<a[n-2];
    cout<<a[n-3];
    return 0;
}
# include<iostream>
# include<bits/stdc++.h>
# include<array>
using namespace std;
int firstlargest(int a[],int n){
      int first,second;
      first=second=INT_MIN;
      for(int i=0;i<n;i++){
        if(a[i]>first){
          second=first;
            first=a[i];
        }
        else{
            second=a[i];
        }
      }
     cout<<"largest element of the array is"<<first<<endl;
     cout<<"second largest eleemnt of the arrays is"<<second;
}
int main(){
    int n;
    //n be tthe no. of elements in the array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   firstlargest(a,n);
    return 0;
}
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"largest element of the array is"<<a[n-1];
    cout<<"second largest element of the array is"<<a[n-2];
    return 0;
}
//move all zeros to the end of the array
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int movezeros(int a[],int n){
    int k=0;
    for(int i=0;i<n;i++){
          if(a[i]!=0){
            a[k]=a[i];
            k++;
          }
    }
    for(int i=k;i<n;i++){
        a[i]=0;
    }
}
int printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int n;
    // n be the no. of elements in the array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    movezeros(a,n);
    printarray(a,n);
    return 0;
}
//rotate the array from the specific position
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    // n be the no. of elements iint the arrasy
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;
    //position from which you want to rotate
    for(int i=d;i<n;i++){
          cout<<a[i];
    }
    for(int i=0;i<d;i++){
        cout<<a[i];
    }
    return 0;
}
//soring an array which contain value 1 ton
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
   for(int i=0;i<n;i++){
    cout<<a[i];
   }
    return 0;
}
//program to print the sub array of an array
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    // n be the no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    //logic for printing the su array
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+a[k];
            }
            if(sum==key){
                cout<<"key found";
            }
            else{
                cout<<"key not found";
            }
             

        }
    }
    return 0;
}
//program to find the possible triangles in triangles
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    //n be the no. of element in the rrays
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i]){
                    count++;
                }
            }
        }
     }
     cout<<count;
     return 0;
}
//find the element that appear once in an array while other appears twice
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    //n be the no. of elements in an array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i]; 
    }
    cout<<xorsum;  
    return 0;
}
//program to find the distinct element in the array
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //logic to identify the distinct lement in the arrays
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(i<n-1&&a[i]==a[i+1]){
            i++;
      cout<<a[i]<<" ";
    }
    }
    return 0;

}
//program to segeragate even and odd elements in the array
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    //n be the no. of elements in the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            a[index]=a[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            a[index]=a[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
//program to print leaders in an array
# include<iostream>
# include<bits/stdc++.h>
# include<array>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    //n be the no. of elements in an array
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  for (int i = 0; i < n; i++)
    {int j;
        for (j=i+1;j<n;j++)
        {
            if (a[i] <=a[j])
                break;
        }    
        if (j == n) 
            cout << a[i] << " ";
  }

    return 0;
}
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // n here be the no. of inputs
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>=38){
            int rem=a%5;
            if(rem>=3){
                a=a+5-rem;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
//struct student 
# include<iostream>
using namespace std;
struct student
{
    int age;
    char first_name[100],last_name[100];
    int rollno;
};
int main(){
    struct student s1; 
    cin>>s1.age>>s1.first_name>>s1.last_name>>s1.rollno;
    cout<<s1.age<<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.rollno;
    return 0;
}
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
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }cout<<endl;
        }
    }
    return 0;
}
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
void concatenate(int a[],int b[],int n,int m){
        int d=m+n;
        int temp[d];
        int k=0,i=0,j=0,p;
        while(i<n){
            temp[k]=a[i];
             i++;
             k++;
        }
        while(j<m){
            temp[k]=b[j];
             j++;
             k++;
        }
        sort(temp,temp+d);
       for(int i=0;i<d;i++)
        p=p^temp[i];
}
int main(){
    int n;
    cin>>n;
    //n be the size of the first elelement of the array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    //m be the size of the second element of the array
        int b[m];
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    concatenate(a,b,n,m);

    return 0;
}
//hacker rank questions hour glass
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
int a[7][7];
int sum(int c,int b){
    return a[c][b]+a[c][b+1]+a[c][b+2]+a[c+1][b+1]+a[c+2][b]+a[c+2][b+1]+a[c+2][b+2];
}
int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    int ans=-100000;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ans=max(ans,sum(i,j));
        }
    }
    cout<<ans;
    return 0;
}
0 -4 -6 0 -7 -6
-1 -2 -6 -8 -3 -1
-8 -4 -2 -8 -8 -6
-3 -1 -2 -5 -7 -4
-3 -5 -3 -6 -6 -6
-3 -6 0 -8 -6 -7

//program to find the combination under 4 test cases
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
      return n*fact(n-1);
    }
}
int main(){
    int t;
    cin>>t;
    //here t represent the no. of test cases
    while(t--){
    int n,r;
    cin>>n>>r;
    int d=fact(n)/(fact(r)*fact(n-r));
    cout<<abs(d);
    }
    return 0;
}
//classes and objects
//hacker rank problem
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int ans=0,count=0;
class student{
    private:
    int scores[5];
    public:
void read(){
    for(int i=0;i<5;i++){
        cin>>scores[i];
    }
}
int sum(){
        int sum1=0;
    for(int i=0;i<5;i++){
        sum1=sum1+scores[i];
    }
    return sum1;
}
};
int main(){
    int n;
    cin>>n;
    int count=0;
    //n be the no. of student in the kristen clas;
 student obj[n];
    for(int i=0;i<n;i++){
        obj[i].read();
    }
   int k=obj[0].sum();
   for(int i=1;i<n;i++){
    int j=obj[i].sum();
    if(k<j){
        count++;
    }
   }
   cout<<count<<endl;
    return 0;
}
//box it question hacker rank
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
//class named box
class box{
  //private data type containing lenght breadth and height
    private:
    int l;
    int b;
    int h;
    //constructor intialise lbh with 0 default
    box(){
        l=b=h=0;
    }
    //parametrized constructor
    box(int lenght,int breadth,int height){
        l=lenght;
        b=breadth;
        h=height;
    }
    int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int Height(){
        return h;
    }
    long long CalculateVolume(){
        return l*b*h;

    }

};
int main(){
    box obj;

    return 0;
}
// funny strings
# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
# include<cmath>
# include<cstring>
using namespace std;
string s;
int t;
char ss[1000001];
//here t be the no test cases
int main(){
    cin>>t;
while(t--){
    cin>>ss;
    s=ss;
    string r=s;
    int flag=0;
    reverse(r.begin(),r.end());
    for(int i=0;i<s.size()-1;i++){
          if(abs(s[i]-s[i+1]!=abs(r[i]-r[i+1]))){
             flag=1;
             break;
          }
    }
    if(flag==1){
        cout<<"not funny"<<endl;
    }
    else{
        cout<<"funny"<<endl;
    }
}
return 0;
}
//alternating strings with the deletion of the characters
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    //t be the no. of test cases
    while(t--){
        string s;
         cin>>s;
        int n=s.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
//string construction problem
# include<iostream>
# include<bits/stdc++.h>
# include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        set<int> chara;
        int cost=0;
        for(char c:s){
            if(!chara.count(c)){
                chara.insert(c);
                    cost++;
                
            }
    
        }
         cout<<cost<<endl;
    }
    return 0;
}
// hacker rank problem love mystery
# include<iostream>
# include<bits/stdc++.h>
# include<cstring>
using namespace std;
int main(){
    int t;
    //t be the no. of test cases
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.size();
        int flag=0;
        for(int i=0;i<s.size();i++){
                if(s[i]!=s[l-i-1]){
                     flag=1;
                     break;
                }
        }
        if(flag==0){
            cout<<0<<endl;
        }
        else{
            cout<<s.size()-1<<endl;
        }
    }
    return 0;
}*/
