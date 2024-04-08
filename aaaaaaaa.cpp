/*to use this keyword in cpp program
# include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
    person(person&obj){
        name=obj.name;
        age=obj.age;
    }
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main(){
    person person1("john",25);
    person person2(person1);
    person1.display();
    person2.display();
    return 0;
}
//operator overloading
// in the case of urinary operator
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int b;
    int x=1;
    public:
    void operator++(int b){
        this->b=b++;
    }
    void operator++(){
        ++x;
    }
    void display(){
        cout<<x<<b<<endl;
    }
};
int main(){
    A obj;
    obj.operator++(8);
    obj.operator++();
    obj.display();
}
//operator overloading in binary operator
//returning operator overloading as argument
# include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    void read(){
        cin>>x;
    }
    A operator+(A o1){
        A o2;
        o2.x=x+o1.x;
        return o2;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
    A s1,s2,s3;
    s1.read();
    s2.read();
    s3=s1.operator+(s2);
    s3.display();
    return 0;
}
//to calculate and display the cube of an integer using function overloading
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
     private:
     int x;
     float y=5;
     public:
     void cube(int x){
        cout<<x*x*x;
     }
     void cube(){
        cout<<y*y*y;
     }
};
int main(){
    A obj;
    obj.cube(5);
    obj.cube();
    return 0;
}
//operator overloading for pre and post increament
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int x=1;
    int b;
    public:
    void operator++(int b){
        this->b=b++;
    }
    void operator++(){
        ++x;
    }
    void display(){
        cout<<x<<b;
    }
};
int main(){
     A obj;
     obj.operator++(4);
     obj.operator++();
     obj.display();
}
///program for the hierarchial inheritance;
# include<iostream>
# include<cstring>
# include<bits/stdc++.h>
using namespace std;
class staff{
    private:
    int code;
    string name;
    string subject;
    string publication;
    public:
    void get(){
        cin>>code;
        cin>>subject;
        cin>>name;
        cin>>publication;
    }
    void display(){
        cout<<code;
        cout<<subject;
        cout<<name;
        cout<<publication;
    }
};
    class staff1:public staff{
         private:
         int code1;
         string name1;
         char grade;
         void get1(){
            cin>>code1;
            cin>>name1;
            cin>>grade;
         }
         void display(){
            cout<<code1;
            cout<<name1;
            cout<<grade;
         }
};
class staff2:public staff{
    int code2;
    string name3;
    int speed;
    int wages;
    public:
    void get3(){
        cin>>code2>>name3>>speed>>wages;
    }
   void display4(){
    cout<<code2<<name3<<speed<<wages;
   }
};
int main(){
    staff2 obj;
    obj.get();
    obj.get3();
     obj.display();
     obj.display4();
    return 0;
}
//question on inheritance
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int roll;
    public:
    void get(){
        cin>>roll;
    }
    void put(){
        cout<<roll;
    }
};
class test:public student{
      private:
      int sub1;
      int sub2;
      public:
      void get1(){
        cin>>sub1>>sub2;
      }
      void put1(){
        cout<<sub1<<sub2;
      }
};
class sports:public student{
    private:
    int score;
    public:
    void get2(){
        cin>>score;
    }
    void put2(){
        cout<<score;
    }
};
class display:virtual public test,virtual public sports{
    private:
    int total;
    public:
    void display1(){
    get();
    get1();
    get2();
    }
};*/
//big sorting algo
# include<iostream>
# include<algorithm>
# include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
             cin>>s[i];    
    }
    sort(s.begin(),s.end());
    return 0;
}