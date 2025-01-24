// virtual Base Class
/*
  we use virtual base class to avoid inheritance of same data multiple times and avoid ambiguity while inheritance.

                                ---------student------------
                                |                           |
                                |                           |
                                |                           |
                            sports                          test
                                |                           |
                                |                           |
                                |                           |
                                |                           |
                                ----------result------------

suppose if class student inheritated an int a to both classes named sports and test.
*and both the classes decided to inherit a to result which will result in ambuguity.
*to avoid such ambiguity the class student will inherit the int a by using virtual class.
*therefore in future if one of the class inherited int a ,other class will not be able to inherit the int a.
*/
#include <iostream>
using namespace std;

class student
{
    int roll_no;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }
    void display_roll_no()
    {
        cout << "the roll_no is:" << roll_no << endl;
    }
};

class test : virtual public student
{

public:
    int maths, physics;
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void display_marks()
    {
        cout << "the result is:" << endl
             << "marks in maths: " << maths << endl
             << "marks in physics" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your PT score is: " << score << endl;
    }
};

class result : public test,public sports
{
    float total;
    public:
       void display()
       {
            total=maths+physics+score;
            print_score();
            display_marks();
            display_roll_no();
            cout<<"your total score is"<<total<<endl;
       }
};

int main()
{
    student s;
    result r;
    r.set_roll_no(101);
    r.set_marks(20,30);
    r.set_score(45.55);
    r.display();
    return 0;
}
