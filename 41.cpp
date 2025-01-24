#include <iostream>   //MULTIPLE INHERITANCE
using namespace std;
/*
      syntax for multiple inheritance
      class derived : visibility-mode base1,visibility-mode base2
      {
         class body
      };
    */
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "the value of base1int is " << base1int << endl;
        cout << "the value of base2int is " << base2int << endl;
        cout << "the value of base3int is " << base3int << endl;
        cout << "the sum value is " << base1int + base2int + base3int<< endl;
    }
};
/*
   the inherited derived class will look something like this:
   Data members:
      base1int --> protected
      base2int --> protected

    Member functions:
      set_base1int() --> public
      set_base2int() --> public
      set_show() --> public
*/
int main()
{
    derived harry;
    harry.set_base1int(12);
    harry.set_base2int(12);
    harry.set_base3int(36);

    harry.show();

    return 0;
}