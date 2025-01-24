// exercise day:

// Question:
/*
 create 2 classes:
 1.simpleCalculator - Takes input of 2 numbers using a utility function and performs +,-,/,* and displays the results using another function.
 2.scientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

 Create another class HybridCalculator and inherit it using 2 classes:
 Q1. What type  of inheritance are you using?
 Q2. Which mode of Inheritance  are you using?
 Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
 Q4. How is code reusability implemented.
*/

#include <iostream>
using namespace std;

class simpleCalculator
{
    int a, b;

    public:
    void set(int num1, int num2);
    void operations()
    {
        cout << "sum = " << a + b << endl;
        cout << "subtraction = " << a - b << endl;
        cout << "multiplication = " << a * b << endl;
        cout << "division = " << a / b << endl;
    }
};

void simpleCalculator :: set(int num1, int num2)
{
    a = num1;
    b = num2;
}

class scientificCalculator
{


};

int main()
{
    return 0;
}