#include <iostream> //MULTILEVEL INHERITANCE
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "the roll number is" << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float a, float b)
{
    maths = a;
    physics = b;
}

void exam ::get_marks()
{
    cout << "the marks obtained in maths are: " << maths << endl;
    cout << "the marks obtained in phyics are:" << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is" << (maths + physics) / 2 << endl;
    }
};
int main()
{
    /*
       Notes:
         if we are inheriting b from a and c from b: a-->b-->c
         1.a is the base class for b and b is the base class for c.
         2.a-->b-->c is called inheritance path.
    */
    result harry;
    harry.set_roll_number(21);
    harry.set_marks(94, 90);
    harry.display();
    return 0;
}