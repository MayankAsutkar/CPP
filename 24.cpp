// #include<iostream>     //how to use a static variable
// using namespace std;
// 
// class employee
// {
//     int i;
//     static int count; //the static variable is by default initialized as 0 
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
//     cin>>i;
//     count++;
// }
// 
// void employee :: getData()
// {
//     cout<<"The id of this employee is "<<i<<" and this is employee number"<<count+1<<endl;
// }
// 
// int main()
// {
//      employee harry,mayank,lovish;
// 
//      harry.getData();
//      harry.setData();
// 
//      mayank.getData();
//      mayank.setData();
// 
//      lovish.getData();
//      lovish.setData();
// 
//      return 0;
// 
// }

#include<iostream>
using namespace std;  // static member function 

class employee 
{
    int id;
    static int count;
    public:
      void setData();
      void getData();
      static void  getCount();
}harry,mayank,lovish;

int employee :: count;

void employee :: setData()
{
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;
}

void employee :: getData()
{
    cout<<"the id of employee is "<<id<<" and this is employee number is "<<count <<endl;
}

void employee :: getCount()
{
    cout<<"the value of count is"<<count<<endl;
}

int main()
{
    harry.setData();
    harry.getData();
    employee :: getCount();

    mayank.setData();
    mayank.getData();
    employee :: getCount();

    lovish.setData();
    lovish.getData();
    employee :: getCount();
    
    return 0;

}


