/*# include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
        
    }
    return fact;
}
int main(){
    int n,r;
    int ans=fact(n)/fact(r)*fact(n-r);
    cout<<ans<<endl;
}
// simple peogram for classes and objects
# include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    int age;
    public:
    void read()
    {
     cin>>rollno>>age;
    }
    void display()
    {
        cout<<rollno<<age;
    }
};
int main(){
    student obj;
    obj.read();
    obj.display();
    return 0;

}
// to define the function outside the class
# include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    int age;
    public:
    void read();
    void display();
};
void student::read(){
    cin>>rollno>>age;
}
void student::display(){
    cout<<rollno<<age;
}
int main(){
    student obj;
    obj.read();
    obj.display();

}
//enter the marks of 5 student s and calculate the percentage
# include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
   float per=(a+b+c+d+e)/5;
    cout<<a<<b<<c<<d<<e<<per;
    return 0;

}
// fibonacci series and missing elements of the series
# include<iostream>
# include<limits.h>
using namespace std;
int fib(int num){
        int t=0;
        int t1=1;
        int t2;
    for(int i=0;i<=num;i++){
        cout<<t<<endl;
        t2=t1+t;
        t=t1;
        t1=t2;
    }
       } 
    int nonfib(int n){
        
    }
    int main(){
        int n;
        cin>>n;
        fib(n);
    
    return 0;
    }
//logic for printing non fibonacci series
# include<iostream>
using namespace std;
int main(){
    int n,i,j;
    int a=0,b=1,c=0,d=0;
    cin>>n;
    cout<<"non fibonacci series is";
    for(i=0;i<n;i++){ 
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(j=c+1;j<d;j++){
            if(j<=n){
                cout<<j;
            }
            else{
                break;
            }
        }
    }
    return 0;
}
// defining classes and objects inside a function
# include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    int age;
    public:
    void read(){
        cin>>rollno>>age;
    }
    void display(){
        cout<<rollno<<age;
    }
};
int main(){
      student obj;
      obj.read();
      obj.display();
      return 0;
}
//defining class and objects but function is defined outside
# include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    int age;
     public:
     void read();
     void diplay();
};
void student::read(){
    cin>>rollno>>age;
}
void student::diplay(){
    cout<<rollno<<age<<endl;
}
int main(){
    student obj;
    obj.read();
    obj.diplay();
    return 0;
}
//array outside te class
# include<iostream>
using namespace std;
 class student{
    private:
    int rollno;
    int age;
    public:
    void read(){
        cin>>rollno>>age;
    }
    void display(){
        cout<<rollno<<age;
    }
 };
int main(){
 student obj[3];
 for(int i=0;i<3;i++){
    obj[i].read();
 }
 for(int i=0;i<3;i++){
    obj[i].display();
 }
    return 0;
}
// definin array inside a class
# include<iostream>
using namespace std;
class student{
    private:
    int rollno[3];
     public:
     void read(){
        for(int i=0;i<3;i++){
            cin>>rollno[i];
        }
     }
    void display(){
        for(int i=0;i<3;i++){
            cout<<rollno[i];
        }
    }
     
};
int main(){
  student obj;
  obj.read();
  obj.display();
  return 0;
}
//defining a friend function inside a class to extract the data outside
# include<iostream>
using namespace std;
class abc{
    private:
    int a=10;
    int b=20;
    friend void sum(abc);
};
void sum(abc o){
int add=o.a+o.b;
cout<<add;
}
int main(){
    abc obj;
    sum(obj);
    return 0;
}
// defining friend function having 2 class or multiclass
# include<iostream>
using namespace std;
class A{
    private:
    int a=10;
};
class B{
    private:
    int b=20;
    friend void sum(A,B);
};
void sum(A o,B o1){
    int add=o.a+o1.b;
    cout<<add;
}
int main(){
   A obj;
   B obj1;
   sum(obj,obj1);
   return 0;
}
//program to find the average marks of 5 students in aclass
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"total no. of subjects";
    cin>>n;
    float avg;
    float marks,sum=0;
    for(int i=0;i<n;i++){
        cin>>marks;
        sum=sum+marks;
        
    }
    avg=sum/n;
    cout<<avg;
    
}

# include<iostream>
using namespace std;
int fib(int n){
    int t=0,t1=1,t2=0,a[20],j=0,count;
    for(int i=0;i<n;i++){
           t2=t1+t;
           t=t1;
           t1=t2;
           cout<<t<<endl;
        if((t2-t)>1){
            for(int i=t+1;i<t2;i++){
                   a[j]=i;
                   count++;
                   j++;
            }

        }
    }
    cout<<"missing elements of the fibonacci series are"<<endl;
    for(j=0;j<count;j++){
        cout<<a[j]<<endl;
        
    }
   

}
int main(){
    int n;
    cout<<"enter the no. of elements of fibonacci series";
    cin>>n;
    cout<<fib(n);
    return 0;
}
# include<iostream>
using namespace std;
int main(){
    int n;
    // n of lines for which you want to print for the pattern
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>6){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    // here  n be the no. of elements you want to print inside an array
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        float count=0,count1=0,count2=0;
      for(int i=0;i<n;i++){
        if(a[i]>0){
           count++;
        }
        else if(a[i]<0){
            count1++;
        }
        else{
            count2++;
        }
      }
      cout<<fixed <<setprecision(6)<<count/n<<endl;
      cout<<fixed<<setprecision(6)<<count1/n<<endl;
      cout<<fixed<<setprecision(6)<<count2/n<<endl;

        return 0;
}
// to find the minium and maximum sum of the elements of the array
# include<iostream>
# include<cstring>
# include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 // n be the no. of elements inside an array
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
   sort(a,a+n);
   int min_value=0;
   int max_value=0;
    int j = 1;
    for(int i = 0; i < n - 1; i++)
    {
        min_value += a[i];
        max_value += a[j];
        j++;
    }
    cout<<min_value<<" "<<max_value;
    return 0;
 
}
//problem to find the unique element of the array
# include<iostream>
using namespace std;
int unique(int a[],int n){
    int xorsum=0;
     for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
     }
     return xorsum;
}
int main(){
    int a[]={1,2,3,4,3,2,1};
    cout<<unique(a,7)<<endl;
    return 0;

}
// problem to find the two unique element inside an array:
# include<iostream>
using namespace std;
int setbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int unique(int a[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^a[i];
    }
    int temp=xorsum;
   int setbit=0;
   int pos=0;
   while(setbit!=1){
    setbit=xorsum&1;
    pos++;
    xorsum=xorsum>>1;
   }
   int newxor=0;
   for(int i=0;i<n;i++){
       if(setbit(a[i],pos-1)){
        newxor=newxor^a[i];
       }
   }
   cout<<newxor<<endl;
   cout<<(temp^newxor)<<endl;
}
int main(){
    int a[]={2,4,6,7,4,5,2,6};
    cout<<unique(a,8);
    return 0;
}
# include<iostream>
using namespace std;
bool getbit(int n,int pos){
    return(n&(1<<pos)!=0);
}
int setBit(int n,int pos){
    return (n|(1<<pos));
}
int unique(int a[],int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getbit(a[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}
int main(){
    int a[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(a,10);
    return 0;
}
//no between 1 to 1000 divisible by both 5 and 7
# include<iostream>
using namespace std;
int divisible(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main(){
    int a,b,n;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b)<<endl;
    return 0;
    
}
// to find the gcd that is greatest common divisor
# include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
//sieve of erosthenes
# include<iostream>
using namespace std;
void primesieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
          cout<<i<<" ";
        }
    }cout<<endl;
}
int main(){
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}
//find the indexs of sum of the array when it becomes equal tos
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //n be the number of elements insdie an aaray
    cin>>n;
    int a[n];
    return 0;
}
// wap to understnad the concept of inheritance in cpp language
# include<iostream>
using namespace std;
class A{
    private:
    int a=10;
    public:
    int b=20;
    protected:
    int c=30;
};
class B:public A{
        public:
        void put(){
            cout<<b<<c;
        }
};
int main(){
     B obj;
     obj.put();
     obj.b=90;
}*/
// understanding the inheritance with another example
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"animal is eating"<<endl;
    }
    void sleep(){
        cout<<"animal is sleeping"<<endl;
    }

};
class Dog:public animal{
    public:
    void bark(){
        cout<<"Dog is barking"<<endl;
    }
};
int main(){
    Dog myDog;
    myDog.eat();
    myDog.sleep();
    myDog.bark();
}