//  #include<iostream>
//  using namespace std;
//  
//  class complex 
//  {
//      int a,b;
//      public:
//         complex(int,int);
//         void printNumber()
//         {
//          cout<<"the value of complex number is "<<a<< " + "<<b<<"i"<<endl;
//         }
//  };
//  
//  complex :: complex(int x,int y)
//  {
//      a=x;
//      b=y;
//  }
//  
//  int main()
//  {
//      complex c1(4,5);
//      c1.printNumber();
//  
//      complex q=complex(5,7);
//      q.printNumber();
//      return 0;
//  }

 #include<iostream>  //parameterized connstructor.
  using namespace std;
  
  class complex 
  {
      int a,b;
      public:
         complex(int x,int y)
         {
            x=a;
            y=b;
         }
         void printNumber()
         {
          cout<<"the value of complex number is "<<a<< " + "<<b<<"i"<<endl;
         }
  };
  
  int main()
  {
      complex c1(4,5);
      c1.printNumber();
  
      complex q=complex(5,7);
      q.printNumber();
      return 0;
  }
  
  