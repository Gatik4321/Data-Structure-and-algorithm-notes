/*/concept of the try catch and throw
/ exception handeling
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            cout<<"value of a is poitive"<<endl;
        }
        else{
            throw(a);
        }
}
catch(int a){
    cout<<"Sorry this a -ve no."<<endl;
}
cout<<"thnku for banking with us"<<endl;
return 0;
    }
//try without catch
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            cout<<"value of a is poitive"<<endl;
        }
}
return 0;
    }


//try without throw
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            cout<<"value of a is poitive"<<endl;
        }
}
catch(int a){
    cout<<"Sorry this a -ve no."<<endl;
}
cout<<"thnku for banking with us"<<endl;
return 0;
    }
//in this case that i try without throw try work but the statemebt bloc of catch remain same and not execute as we have not included throw in the program and without throw catch do not work

// throw without try
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
        if(a>0){
            cout<<"value of a is poitive"<<endl;
        }
        else{
            throw(a);
        }
catch(int a){
    cout<<"Sorry this a -ve no."<<endl;
}
cout<<"thnku for banking with us"<<endl;
return 0;
    }
    no it do ot work
    
//    multiple throw and multiple catch in __ORDER_BIG_ENDIAN__
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            throw(a);
        }
        else if(a==0){
            throw(8);
        }
        else if(a<0){
            throw(2);
        }
}
catch(int a){
    cout<<"itna paisa kahan se ayya tere pass"<<endl;
}
cout<<"thnku for banking with us"<<endl;
return 0;
    }
// now understanding the concept of multiple catch
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Amount"<<endl;
    cin>>a;
    try{
        if(a>0){
            throw(a);
        }
        else if(a==0){
            throw(3.14);
        }
        else if(a<0){
            throw('c');
        }
}
catch(int a){
    cout<<"itna paisa kahan se ayya tere pass"<<endl;
}
catch(char c){
    cout<<"thanku for entering the characters"<<endl;
}
catch(double d){
    cout<<"thnku for entering the floating point value."<<endl;
}
cout<<"thnku for banking with us"<<endl;
return 0;
    }
    in the cae of multiple flaots we have learnt one thing that we have to includedouble always instead of the float
    
//cocept of nesting of try
# include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the amont you want to deposit"<<endl;
    cin>>a;
    try{
        try{
            if(a>0){
                throw(a);
            }
            }
        catch(int n){
            cout<<"lorem";
            throw(a);
        }
        }
    catch(int g){
        cout<<"amount entered succesfully"<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
	try
	{
		int a, b;
		cout<<"Enter two integer values: ";
		cin>>a>>b;
		try
		{
			if(b == 0)
			{
				throw b;
			}
			else
			{
				cout<<(a/b);
			}
		}
		catch(...)
		{
			throw; //rethrowing the exception
		}
	}
	catch(int)
	{
		cout<<"Second value cannot be zero";
	}
	return 0;
}
//perform the exception handeling in which entered second value can't be zero
# include<iostream>
using namespace std;
int main(){
   try{
    int a,b;
    cout<<"enter the value of the a and b"<<endl;
        cin>>a>>b;
        try{
            if(b==0){
                throw(b);
            }
            else{
                cout<<(a/b)<<endl;
            }
        }
        catch(...){
            throw;//this is for the exception handeling
        }
   }
   catch(int){
    cout<<"Second avlue can't be zero"<<endl;
   }
   return 0;
}
//Wap for the exception handeling throwing the integer restrictions
# include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    try{
        if(a>0){
            throw(a);
        }
        else if(a==0){
            throw('c');
        }
        else if(a<0){
            throw(3.14);
        }
    }
    catch(int a){
        cout<<"Positive value"<<endl;
    }
    catch(char c){
        cout<<"character "<<endl;
    }
    catch(double d){
        cout<<"floating value"<<endl;
    }
    return 0;
}*/
# include<iostream>
# include<fstream>
using namespace std;
int main(){
 fstream obj;
   obj.open("gatik.cpp",ios::out||ios::in);
   obj.seekg(8,ios::beg);
}