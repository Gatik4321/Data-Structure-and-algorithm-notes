/*checking for te private public and protected 
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
class B:protected A{
    public:
    void put(){
        cout<<" "<<b<<c;
    }
};
int main(){
    B obj;
    obj.put();
    return 0;
}
//concept of the single inheritance
# include<iostream>
using namespace std;
class A{
    public:
    void base(){
        cout<<"hi i am base"<<endl;
    }
};
class B:public A{
    public:
    void child(){
        cout<<"hi i am child"<<endl;
    }
};
int main(){
B obj;
obj.base();
obj.child();
}
//concept of multilevel inheritance
# include<iostream>
using namespace std;
class A{
    public:
    void base(){
        cout<<"hi i am base"<<endl;
    }
};
class B:public A{
    public:
    void child(){
   cout<<"hi i am child"<<endl;
    }
};
class C:public B{
    public:
    void put(){
        cout<<"namste"<<endl;
    }
};
int main(){
    C obj;
    obj.base();
    obj.child();
    obj.put();
    return 0;
}
//concept of multipple inhertance
# include<iostream>
using namespace std;
class A{
     public:
  void base(){
    cout<<"hi iam base"<<endl;
  }
};
class B{
    public:
    void child(){
        cout<<"hi i ama achild"<<endl;
    }
};
class C:public A,public B{
    public:
    void put(){
        cout<<"namaste kaisai ho";
    }
};
int main(){
   C obj;
   obj.base();
   obj.child();
   obj.put();
}
//concept of hierarchial inhertance 
# include<iostream>
using namespace std;
class A{
    public:
    void base(){
        cout<<"hi i am base"<<endl;
    }
};
class B:public A{
    public:
    void child(){
        cout<<"hi i am child"<<endl;
    }
};
class C:public A{
    public:
    void put(){
        cout<<"namaste"<<endl;
    }
};
int main(){
    C obj;
    obj.base();
    obj.put();
    return 0;
}
//case of hybrod inheritance which is a case of diamond ambiguity
# include<iostream>
using namespace std;
class A{
    public:
    void base(){
        cout<<"hi i am a base"<<endl;
    }
};
class B:virtual public A{
    public:
    void child(){
        cout<<"hi i am a child"<<endl;
    }
};
class C:virtual public A{
    public:
    void child1(){
        cout<<"hi i am a loda"<<endl;
    }
};
class D:public B,public C{
//now we are dealing with the case of diamond ambiguity
   public:
   void asd(){
    cout<<"hi i am virat kohli"<<endl;
   }
};
int main(){
    D obj;
    obj.base();
    obj.child();
    obj.child1();
    obj.asd();
    return 0;
}

//cocept of function overloading
# include<iostream>
using namespace std;
class A{
    public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    void sum (int a,int b,int c,int d){
        cout<<a+b+c+d<<endl;
    }
};
int main(){
 A obj;
 obj.sum(2,3);
 obj.sum(2,3,4);
 obj.sum(2,3,4,5);
 return 0;
}
//came under run timepolymorphism
// concept of function overriding 
# include<iostream>
using namespace std;
class A{
 public:
 void read(){
    cout<<"base class"<<endl;
 }
};
class B:public A{
    public:
    void read(){
            //A::read();
        cout<<"lola lele mera";
    }
};
int main(){
    A *p;
    A o;
 B obj;
 p->read();

 //obj.A::read();
obj.read();

}
//understanding the virtual function in cpp
//static and dynamic binding
# include<iostream>
using namespace std;
class A{
    public:
  virtual void read(){
        cout<<"hi i am A"<<endl;
  }
  void get(){
    cout<<"hi i am get of A"<<endl;
  }
};
class B:public A{
    public:
    void read(){
        cout<<"hi i am B"<<endl;
    }
    void get(){
        cout<<"hi i am get of B"<<endl;
    }
};
int main(){
    A* p;
     B o;
     A o1;
     p=&o;
     p->read();//static binding
     p=&o1;
     p->read();
     p=&o;
     p->get();//dynamic binding
     o.get();
    return 0;
}
//use of this keyword 
# include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    Hero(int health){
        this->health=health;
        cout<<health<<endl;
    }
};
int main(){
  Hero obj(2);
  return 0;
}
//derived class code
# include<iostream>
using namespace std;
class A{
   public:
   void read(){
    cout<<"class A"<<endl;
   }
   class B{
         public:
         void disp(){
            cout<<"class B"<<endl;
         }
   };
};
int main(){
    A obj;
    obj.read();
    A::B obj1;
    obj1.disp();
    return 0;
}
//cocept of the operator overloading
//unary operator overloading
# include<iostream>
using namespace std;
class A{
    private:
    int x=1;
    int b;
    public:
    void operator++(){
        ++x;
    }
    void operator++(int b){
          this->b=b;
    }
    void display(){
        cout<<x<<endl;
        cout<<b<<endl;
    }
};
int main(){
    A obj;
    obj.operator++();
    obj.operator++(3);
    obj.display();
    return 0;
}
//binary operator overloding
# include<iostream>
using namespace std;
class A{
    private:
    int a=3,b=5;
    public:
    void operator+(){
          cout<<a+b;
    }
};
int main(){
 A obj;
 obj.operator+();
}
//operator overloading + binary
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
   }
   void display(){
    cout<<x<<endl;
   }
};
int main(){
    A m1,m2,m3;
    m1.read();
    m2.read();
    m3=m1+m2;
    m3.display();
    return 0;
}*/
//pointer to object member function
# include<iostream>
using namespace std;
class A{
    public:
    int x;
    A(int x){
        this->x=x;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
 A o(3);
 A* ptr=&o;
 ptr->x=9;
 o.display();
}
