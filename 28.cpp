//  #include<iostream>   //example of friend function.
//  using namespace std;
//  
//  class y;
//  class x
//  {
//      int num;
//      public:
//      void setNumber(int value)
//      {
//          num = value;
//      }
//      friend void add(x ,y );
//  };
//  
//  class y
//  {
//      int data;
//      public:
//      void setNumber(int value)
//      {
//          data = value;
//      }
//      friend void add(x ,y );
//  };
//  
//  void add(x o1,y o2)
//  {
//      cout<<"the sum is "<< o1.num + o2.data<<endl;
//  }
//  
//  int main()
//  {
//      int a,b;
//      cout<<"enter the value of class x"<<endl;
//      cin>>a;
//      cout<<"enter the value of class y"<<endl;
//      cin>>b;
//  
//      x o1;
//      y o2;
//      o1.setNumber(a);
//      o2.setNumber(b);
//      add(o1,o2);
//      return 0;
//  }

#include<iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void setNumber(int a)
    {
        val1=a;
    }
     void display()
    {
        cout<<"the number in c1 is"<<val1<<endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void setNumber(int a)
    {
        val2=a;
    }
    void display()
    {
        cout<<"the number in c2 is"<<val2<<endl;
    }
};

void exchange(c1 &o1,c2 &o2)
{
    int temp=o1.val1;
    o1.val1=o2.val2;
    o2.val2=temp;
}

int main()
{
    int num1,num2;
    cout<<"enter the number of class c1"<<endl;
    cin>>num1;
    cout<<"enter the number of class c2"<<endl;
    cin>>num2;

    c1 o1;
    c2 o2;
    o1.setNumber(num1);
    o2.setNumber(num2);

    exchange(o1,o2);
    o1.display();
    o2.display();

    return 0;

}