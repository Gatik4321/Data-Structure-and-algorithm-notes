/*simple code to understand the concept of inhertance 
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
    class A{
        private:
        int a=10;
        public:
        int b=20;
        protected:
        int c=30;
    };
    class B:private A{
         public:
         void put(){
            cout<<b<<c;
         }
    };
    int main(){
        B obj;
        obj.put();
    
    
    return 0;

}
# include<iostream>
# include<bits/stdc++.h>
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
        obj.b=90;
        obj.put();
    
    
    return 0;

}
# include<bits/stdc++.h>
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
            cout<<b<<c;
         }
    };
    int main(){
        B obj;
        obj.put();
    
    
    return 0;

}
//understand the cocept of single inheritaance
//class having only one base and one child
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
    class A{
    public:
    void base(){
        cout<<"hi i am base";
    }
    };
    class B:public A{
        public:
         void put(){
            cout<<"hi i am a child";
         }
    };
    int main(){
    B obj;
    obj.base();
    obj.put();
    return 0;
    }
//multilevel
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
    class A{
    public:
    void base(){
        cout<<"hi i am base";
    }
    };
    class B:public A{
        public:
         void put(){
            cout<<"hi i am a child";
         }
    };
    class C:public B{
        public:
        void child(){
            cout<<"namaste";
        }
    };
    int main(){
    C obj;
    obj.base();
    obj.put();
    obj.child();
    return 0;
    }
    // multiple inheritance
    # include<iostream>
# include<bits/stdc++.h>
using namespace std;
    class A{
    public:
    void base(){
        cout<<"hi i am base";
    }
    };
    class B {
        public:
         void put(){
            cout<<"hi i am a child";
         }
    };
    class C:public A,public B{
        public:
        void child(){
            cout<<"namaste";
        }
    };
    int main(){
    C obj;
    obj.base();
    obj.put();
    obj.child();
    return 0;
    }
    //hierarchial inheritance
      # include<iostream>
# include<bits/stdc++.h>
using namespace std;
    class A{
    public:
    void base(){
        cout<<"hi i am base";
    }
    };
    class B:public A {
        public:
         void put(){
            cout<<"hi i am a child";
         }
    };
    class C:public A{
        public:
        void child(){
            cout<<"namaste";
        }
    };
    int main(){
    C obj;
    obj.base();
    obj.child();
    return 0;
    }*/
    //hybride inheritance
    # include<iostream>
# include<bits/stdc++.h>
using namespace std;
    class A{
    public:
    void base(){
        cout<<"hi i am base";
    }
    };
    class B:public A {
        public:
         void put(){
            cout<<"hi i am a child";
         }
    };
    class C:public A{
        public:
        void child(){
            cout<<"namaste";
        }
    };
    class D: public B, public C{
        public:
        void func(){
            cout<<"hi iam d";
        }

    };
    int main(){
    D obj;
    obj.put();
    obj.child();
    obj.func();
    }
