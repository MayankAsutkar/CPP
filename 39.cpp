#include <iostream> //PROTECTED ACCESS MODIFIER//
using namespace std;

class Base
{
protected: // private type jaisa which can be inherited.
    int a;

private:
    int b;
};
/*
   for a protected member:
                            Public Derivation   Private Derivation   Protected Derivation
   1.Private members    |     Not Inherited   |    Not Inherited   |    Not Inherited
   2.protected members  |     Protected       |    Private         |    Protected
   3.public members     |     public:         |    Private         |    Protected

*/

class Derived : protected Base
{
};
int main()
{
    Base ba;
    Derived d;
    // cout<<ba.a; //error : since a is protected in class base
    // cout<<d.a; //error : since a is protected in class derived
    return 0;
}