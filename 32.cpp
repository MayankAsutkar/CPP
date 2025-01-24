#include<iostream>  //constructors with default arguements in cpp.
using namespace std;

class simple
{
    int data1,data2,data3;
    public:
      simple(int a=12,int b=13,int c=115)
      {
        data1=a;
        data2=b;
        data3=c;
      }
      void printData()
      {
        cout<<data1<<" "<<data2<<" "<<data3<<endl;
      }
};

int main()
{
    simple s(1);
    s.printData();

    simple p(1,2);
    p.printData();

    simple q(2,4,9);
    q.printData();

    return 0;

}