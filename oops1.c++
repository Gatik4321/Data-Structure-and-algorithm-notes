/*creating a namespace of your name
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
namespace gatik{
    int a=10;
    void func1(){
        cout<<"creating your own namespace";
    }
}
int main(){
     int a=50;
     cout<<a;
     cout<<gatik::a;
     gatik::func1();
}
// creating a class to acess the elements
# include<iostream>
# include<bits/stdc++.h>
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
    // program to show the use of scope resolution operator
    # include<iostream>
    # include<bits/stdc++.h>
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
       return 0;
    }
    //program to declare the array outside the class
 # include<iostream>
    # include<bits/stdc++.h>
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
// program of creating the array inside the class
# include<iostream>
# include<bits/stdc++.h>
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
// friend function is ued to acess the privte data outside the class.
# include<iostream>
# include<bits/stdc++.h>
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
}
// friend of 2 class or multiclass
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class B;
class A{
    private:
    int a=10;
    friend void sum(A,B);
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
// program to use the inline function
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
inline int add(int x,int y){
    int d=x+y;
    return d;
}
int main(){
    int x=10;
    int y=20;
    cout<<add(x,y);
}
// program to showcase the use of static key word
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int display(int i){
    i=i+5;
}
int main(){
    cout<<display(3);
    cout<<display(3);
    cout<<display(3);
}
// passing object as an argument to function
// call by value;
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int marks;
    int totalmarks;
    public:
    void read(){
        cin>>marks;
    }
    void total(student m1,student m2){
        totalmarks=m1.marks+m2.marks;
    }
    void display(){
        cout<<totalmarks;
    }
};
int main(){
    student s1,s2,s3;
    s1.read();
    s2.read();
    s3.total(s1,s2);
    s3.display();
    return 0;
}
// call by refrence 
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int marks;
    int totalmarks;
    public:
    void read(){
        cin>>marks;
    }
    void total(student*m1,student*m2){
        totalmarks=m1->marks+m2->marks;
    }
    void display(){
        cout<<totalmarks;
    }
};
int main(){
    student s1,s2,s3;
    s1.read();
    s2.read();
    s3.total(&s1,&s2);
    s3.display();
    return 0;
}

// returning object as an argument
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int marks;
    int totalmarks;
    public:
    void read(){
        cin>>marks;
    }
    student total(student m2){
        student m3;
        m3.totalmarks=marks+m2.marks;
        return m3;
    }
    void display(){
        cout<<totalmarks;
    }
};
int main(){
    student s1,s2,s3;
    s1.read();
    s2.read();
    s3=s1.total(s2);
    s3.display();
}
// program to use the constructors and destructors in a program
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"hi i am a constructor";
    }
    ~A(){
        cout<<"hi i am a destructor";
    }
};
int main(){
    A obj;
}
// now understanding the types of constructor with the help of a program
// constructor donot have any destructor is called default constructor
// default constructor
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a=10;
    A(){
        cout<<a;
    }
};
int main(){
    A obj;
}
// parameterized constructor
// these are those constructors which works on paramters acess in the argument
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
     public:
     int a;
     int b;
     A(int x,int y){
        a=x;
        b=y;
        cout<<a<<b<<endl;
     }
     
};
int main(){
   A obj(2,4);
}
// program which includes basically 3 to 4 constructors is called overloaded constructors
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
     public:
     int a;
     int b;
     int c;
     A(int x,int y){
        a=x;
        b=y;
        cout<<a<<b;
     }
     A(int x){
        a=x;
        cout<<a;
     }
     A(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        cout<<a<<b<<c;
     }
     A(){
        int a=0,b=0;
        cout<<a<<b;
     }
     ~A(){
        cout<<"destructor";
     }
};
int main(){
   A o1;
   A o2(5,6);
   A o3(7);
   A o4(1,4,3);
}
// parameterized constructor with default argument 
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(int x=1,int y=2){
        int a=x;
        int b=y;
        cout<<a<<b;
    }
};
int main(){
    A obj(9,8);
   return 0;
}
// program to show he us eof copie dconstructor
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
      public:
      int a;
    A(int x){
        a=x;
    }
    A(A & obj){
        a=obj.a;
    }
};
int main(){
     A o1(2);
     A o2=o1;
     cout<<o1.a;
     cout<<o2.a;
}
#include<iostream>
using namespace std;
int main(){
int n,c,first=0,second=1,next;
int a[20],i,j=0,count=0;
cout<<"Enter the no. of terms of Fibonacci series=";
cin>>n;
cout<<"Terms of Fibonacci series are"<<endl;
for(c=0;c<n;c++)
{
 if(c<=1)
next=c;
else{
next=first+second;
first=second;
second=next;
}
cout<<next<<endl;
if(next-first>1){
for(i=first+1; i<next; i++)
{
a[j]=i;
count++;
j++;
}
}
}
cout<<"Missing numbers of the Fibonacci series are:"<<endl;
 for(j=0; j<count; j++)
 cout<<a[j]<<endl;

 return 0;

}
// if the base address is 1000 and find the address of (m-1,n-1)
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main(){
    int b,i,j,w,m,n,lr=0,lc=0;
    int a[10][10];
    cout<<"enter the no. of rows";
    cin>>m;
    cout<<"enter the no. of columns";
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the base addres of the array";
    cin>>b;
    cout<<"enter the storage class of the each element";
    cin>>w;
    i=m-1;
    j=n-1;
    cout<<"adress of the element"<<b + w*(n*(i-lr)+(j-lc));
    return 0;
}
// area of the rectangle using constructor overloading
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    int b;
    A(int x,int y){
        a=x;
        b=y;
        cout<<x*y;
    }
    ~A(){
        cout<<"destructor";
    }
    
};
int main(){
     A obj(8,9);
}
// program to create a constructor 
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int rollNO;
    int height;
    int weight;
    public:
    student(string n,int r,int h,int w){
        name=n;
        rollNO=r;
        height=h;
        weight=w;
    }
    void display();
    ~student();
};
void student::display(){
    cout<<"student details";
    cout<<name<<rollNO<<height<<weight;
}
student::~student(){
    cout<<"destructore";
}
int main(){
    student std("mohit",1234,6,78);
    student std1=std;
    std1.display();
    return 0;
}

# include<iostream>
# define MAX(a,b,c)(a>b&&a>c?a:(b>c?b:c))
# define MIN(a,b,c)(a<b&&a<c?a:(b<c?b:c))
using namespace std;
int main(){
int x,y,z,large,small;
cin>>x>>y>>z;
small=MIN(x,y,z);
large=MAX(x,y,z);
cout<<large<<small;
return 0;
}*/




