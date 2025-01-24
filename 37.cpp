#include<iostream>
using namespace std;

class employee   ///base class
{
    public:
        int id;
        float salary;
      employee(int inpId)
      {
        id=inpId;
        salary=34.0;
        cout<<salary<<endl;
      }
      employee(){}
           
};

//derived class syntax:-
// {{class derived-class name }} : {{visibility-mode}} {{base-class-name}}
//{
//    class members/methods/etc....
//}

// creating a programmerclass derived from employee base class
/*
  Notes:
  1.Default visibiltity mode is private.
  2.Private visibility mode:Public members of the base class becomes private members of the derived class.
  3.public visibility mode:public members of the base class becomes public members of the derived class.
  4.private members are never inherited. 
*/
class programmer : employee
{
    public:
    programmer(int inpId)
    {
       id = inpId;
    }
    void getdata()
    {
      cout<<id<<endl;
    }
    int languagecode=9;
};
class programmer1 : public employee
{
    public:
    programmer1(int inpId)
    {
       id = inpId;
    }
    void getdata()
    {
      cout<<id<<endl;
    }
    int languagecode=9;
};
int main()
{
    employee harry(1),rohan(2);
    // cout<<harry.salary<<endl;
    // cout<<rohan.salary<<endl;
    programmer skillf(1);
    cout<<skillf.languagecode<<endl;
    // cout<<skillf.id<<endl;//this line will throw error since id is private for programmer class.
    skillf.getdata();
    programmer1 watt(2);
    cout<<watt.id<<endl;
    return 0;
}