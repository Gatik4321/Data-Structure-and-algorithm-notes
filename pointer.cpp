/*pinters in cpp
# include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    //printing the address of num
    cout<<&num;
    int *ptr=&num;
    cout<<*ptr;
    double d=4.3;
    double *p2=&d;
    cout<<sizeof(num);
    cout<<sizeof(p2);
    cout<<sizeof(*ptr);

}
# include<iostream>
using namespace std;
int main(){
    //pointer  to int is creatted
 
 int num=5;
 int *p=&num;
 cout<<"before"<<*p<<endl;
 (*p)++;
 cout<<"after"<<*p;
 //copying the value of one pointer into another
 int *q=p;
 cout<<*q<<"-"<<*p;
 int i=3;
 int *t=&i;
 (*t)++;
 cout<<(*t)++<<endl;
    return 0;
}
//pointers part 2
 //array with pointers
 # include<iostream>
 using namespace std;
 int main(){
    /*int arr[10]={23,122,41,67};
    cout<<arr[0]<<endl;
    cout<<"address of first meemory block is"<<&arr[0]<<endl;
    cout<<*(arr+1)<<endl;
    cout<<(*arr)+1<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    int i=3;
    cout<<i[arr]<<endl;
    
   int temp[10]={1,2,3,4,5,6,7,8,9};
   cout<<sizeof(temp)<<endl;
   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*temp)<<endl;
   cout<<sizeof(&temp)<<endl;
    cout<<sizeof(*ptr)<<endl;
     cout<<sizeof(&ptr)<<endl;

int a[20]={1,2,3,4};
cout<<&a[0]<<endl;
cout<<a<<endl;
cout<<&a<<endl;
int *p=&a[0];
cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;
 }
 //character arrays in pointers
  # include<iostream>
  using namespace std;
  int main(){
    int arr[5]= {1,2,3,4,5};
    char ch[6]="abcde";
    cout<<arr<<endl;
    char *c;
    c=&ch[0];
    cout<<c<<endl;
    char temp='z';
    char *p=&temp;
    cout<<p<<endl;

    return 0;
  }
  //function and pointers ci=oncept
  # include<iostream>
  using namespace std;
  void print(int *p){
     cout<<*p<<endl;
  }
  void update(int *p){
      *p=*p+1;
  }
  int getSum(int arr[],int n){
    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
  }
  int main(){
    int value=5;
    int *p=&value;
     update(p);
     print(p);
     int arr[5]={1,2,3,4,5};
     cout<<getSum(arr,5)<<endl;
    return 0;
  }
  //understanding te concept of double pointers
  # include<iostream>
  using namespace std;
  void update(int **p2){
    //p=p+1;
    //kuch change hofga
    //*p=*p+1;
    **p2=**p2+1;
  }
  int  main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
    int ***p3=&p2;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<"address of p"<<p<<endl;
    cout<<**p2<<endl;
    cout<<***p3<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;;
    return 0;
  }*/
  