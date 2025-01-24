#include<iostream>  //constructor overloading :-the object automatically calls the function it needs
using namespace std;

class complex
{
    int a,b;
    public:
      complex()
      {
        a=0;
        b=0;
      }
      complex(int x)
      {
        a=x;
        b=0;
      }
      complex(int x,int y)
      {
        a=x;
        b=y;
      }
      void printNumber()
      {
        cout<<a<<" + "<<b<<"i"<<endl;
      }
};

int main()
{
    complex p1;
    p1.printNumber();

    complex p2(1);
    p2.printNumber();

    complex p3(4,5);
    p3.printNumber();

    return 0;
}