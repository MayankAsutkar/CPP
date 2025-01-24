// #include<iostream>  // factorial
// using namespace std;
// 
// int factorial(int a)
// {
//     if(a<=1)
//     {
//           return 1;
//     }
//     return a*factorial(a-1);
//     
// }
// 
// int main()
// {
//     int x;
//     cout<<"enter the number"<<endl;
//     cin>>x;
// 
//     cout<<factorial(x);
// 
//     return 0;
// }

#include<iostream>
using namespace std;

int fibonacci(int n)
{
if(n<=1) 
{
    return 1;
}



    return fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;

    cout<<fibonacci(x-1);
    return 0;
}




