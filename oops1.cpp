/*passing object as an argument to function
# include<iostream>
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
//returning object to a function
# include<iostream>
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
    return 0;
}
//to use static 
# include<iostream>
using namespace std;
class A{
    private:
    static int i;
    public:
    void display(){
        cout<<++i;
    };
    int A :: i=1;
    int main(){
        A O1,O2,O3;
        O1.display();
        O2.display();
        O3.display();
        return 0;
    }
}*/

