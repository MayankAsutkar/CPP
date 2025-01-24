#include<iostream>
using namespace std;

class bankdeposit
{
    int principal,years,interestRate;
    float returnValue;
    public:
     bankdeposit(){}
     bankdeposit(int p,int y,int i);
     bankdeposit(int p,int y,float i);
     void show();
};

bankdeposit :: bankdeposit(int p,int y,int i)
{
    principal = p;
    years = y;
    interestRate = float(i)/100;
    returnValue = principal*(1+interestRate);
}

bankdeposit :: bankdeposit(int p,int y,float i)
{
    principal = p;
    years = y;
    interestRate = i;
    returnValue = principal*(1+i);
}

void bankdeposit :: show()
{
    cout<<" principal amount was "<<principal<<" returnvalue after years "<< years <<" is "<<returnValue<<endl;
}
int main()
{
    bankdeposit b1,b2,b3;
    int p,y;
    float r;
    int R;

    cout<<"enter the value of p,y and r"<<endl;
    cin>>p>>y>>r;
    b1=bankdeposit(p,y,r);
    b1.show();

    cout<<"enter the value of p,y and R"<<endl;
    cin>>p>>y>>r;
    b1=bankdeposit(p,y,R);
    b2.show();
    return 0;
}
