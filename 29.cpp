#include<iostream>    //constructors in cpp
using namespace std;

class complex
{
    int a,b;
    public:
     complex();
     void printNumber()
     {
        cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
     }
};

complex :: complex()
{
    cout<<"enter the value of numbers"<<endl;
    cin>>a;
    cin>>b;
    printNumber();
}

int main()
{
    complex c1;
    return 0;
}

/*
//constructor is a special member function with the same name of the class.
//it is used to initialize the objects of its class.
//it is automatically invoked(called) whenever an object is created.
//
// it should be declared in the public section of the class.
// it gets invoked automatically.
// do not hhave return types.
//it can have default arguement.
//we cannot refer to their address.
*/