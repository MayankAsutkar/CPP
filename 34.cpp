#include<iostream>
using namespace std;

class number
{
    int a;
    public:
      number()
      {
        a=0;
      }
      number(int num)
      {
        a=num;
      }
      number(number &obj)
      {
        cout<<"copy constructot invoked"<<endl;
        a=obj.a;
      }
      void display()
      {
        cout<<"the number is"<<a<<endl;
      }
};

int main()
{
    number x,y,z(45),z2;

    x.display();
    y.display();
    z.display();

    number z1(z);
    z1.display();

    z2=z;
    z2.display();

    number z3 = z; 
    z3.display();

    return 0;
}

