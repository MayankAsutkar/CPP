#include<iostream>
using namespace std;
//destructor never takes an arguement nor does it return any value.

class mayank
{
    public:
    mayank()
    {
        cout<<"constructor function called"<<endl;
    }
    ~mayank() // syntax for destructor function.[-->~class_name() { }]
    {
        cout<<"destructor function called"<<endl;
    }
};

int main()
{
    cout<<"we are in the main body"<<endl;
    cout<<"creating first object phy"<<endl;
    mayank phy;
    {
        cout<<"entered this block"<<endl;
        cout<<"creating 2 more objects"<<endl;
        mayank chem,math;
        cout<<"exiting this block"<<endl;
    }
    cout<<"returned to the main body"<<endl;

    return 0;
} 
/* when a destructor is made in the class it ensures that as soon as the use of constructor function 
is over its data is destroyed completely after use of it */
