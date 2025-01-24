#include<iostream>
using namespace std;

inline int product(int a,int b)
{
    return a*b;
}
int main()
{
    //inline function
    int a,b;
    cout<<"enter the two values"<<endl;
    cin>>a;
    cin>>b;

    cout<<"product is "<<product(a,b);
    return 0;
}

