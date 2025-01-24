#include<iostream>
using namespace std;
//36-->INHERITANCE
/*
>Reusablility is a very important feature of OOPs.
>In cpp we can reuse a class and add aditional features to it.
>Reusing classes saves money and time.
>Reusing already tested and debugged class will save a lot of effort of developing and debugging the
 same thing again. 
*/

//WHAT IS INHERITANCE IN CPP
/*
 1.the concept of reusability  in cpp is supported using inheritance.
 2.we can reuse the properties of an existing class by inheriting from it.
 3.the existing class is called as the base class.
 4.the new class is called derived class.
   for ex:Employe---->programmer<------Assistant
   //here Employee and Assistant are Base classes.(there can be multiple base classes and derived classes)
   //programmer is a derived class.

 5.reusing classes saves money and time.
 6.there are differnt types of inheritance in cpp.
*/

/*
  Forms of inheritance in cpp:
  1>Multiple Inheritance
  2>Hierarchical Inheritance
  3>Multilevel Inheritance.
  4>Hybrid Inheritance.
  5>Single Inheritance
*/

//1>SINGLE INHERITANCE:
/*
  A derived class with only one base class.

    A---->B

*/
//2>MULTIPLE INHERITANCE
/*
  A derived class having more than one base class.

     A-------->B<----------C  

*/
//3>HIERARCHICAL INHERITANCE
/*
  several derived classes from a single base class.

   A<------B------->C

*/
//4>MULTILEVEL INHERITANCE
/*
   Deriving a class from alredy derived class.

   A-------->B-------->C

*/
//5>HYBRID INHERITANCE
/*
   1>Hybrid Inheritance is a combination of multiple inheritance and multilevel inheritance.
   2>A class is derived from two classes as in multiple inheritance.
   3>However one of the parent classes is not a base class.

           ------A-----
           |          |
           |          |
           |          |
           B--->D<----C
*/