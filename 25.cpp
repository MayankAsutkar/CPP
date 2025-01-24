// #include<iostream>  //  array of objects
// using namespace std;
// 
// class employee
// {
//     int id;
//     static int count;
//     public:
//       void setData();
//       void getData();
// };
// 
// int employee :: count; 
// 
// void employee :: setData()
// {
//     cout<<"enter the id"<<endl;
//     cin>>id;
//     count++;
// }
// 
// void employee :: getData()
// {
//     cout<<"the id of employee is "<<id<<" and this is employee number is "<<count <<endl;
// }
// 
// int main()
// {
//   employee fb[4];
// 
//   for(int i=0;i<=4;i++)
//   {
//     fb[i].setData();
//     fb[i].getData();
// 
//   }
// 
//   return 0;
// }

#include<iostream> //passing objects as function arguements.
using namespace std;

class complex
{
  int a,b;
  public:
    void setData(int x,int y)
    {
      a=x;
      b=y;
    }

    void setDataBySum(complex o1,complex o2)
    {
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }

    void printNumber()
    {
      cout<<"your complex number is"<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
  complex c1,c2,c3;
  c1.setData(1,2);
  c1.printNumber();

  c2.setData(3,4);
  c2.printNumber();

  c3.setDataBySum(c1,c2);
  c3.printNumber();

  return 0;
}
