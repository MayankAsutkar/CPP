#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet()
    {
        base2 ::greet(); // this is called ambiguity resolution.specify the class
    }
};

class b
{
    public:
    void say()
    {
        cout<<"hello world"<<endl;
    }
};

class d : public b
{
    public:
    void say() // this function overwrite the base class function.
    {
        cout<<"hello beautiful people"<<endl;
    }
};

int main()
{
    // ambiguity 1

    // base1 base1obj;
    // base1obj.greet();
    // base2 base2obj;
    // base2obj.greet();
    // derived harry;
    // harry.greet();

    // ambiguity 2

    b hari;
    hari.say();
    d harry;
    harry.say();

    return 0;
}