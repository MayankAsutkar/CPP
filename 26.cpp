//  #include<iostream>                   // friend function in c++
//  using namespace std;
//  
//  class complex 
//  {
//      int a,b;
//      public:
//        friend complex sumComplex(complex i1,complex i2);
//        void setNumber(int n1,int n2)
//        {
//          a=n1;
//          b=n2;
//        }
//        void printNumber()
//        {
//          cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
//        }
//  };
//  
//  complex sumComplex(complex i1,complex i2)
//  {
//      complex i3;
//      i3.setNumber((i1.a + i2.a),(i1.b + i2.b)) ;
//  }
//  
//  int main()
//  {
//      complex c1,c2,c3;
//      c1.setNumber(1,2);
//      c1.printNumber();
//  
//      c2.setNumber(6,4);
//      c2.printNumber();
//  
//      sumComplex(c1,c2).printNumber();
//  
//      return 0;
//  }
//  