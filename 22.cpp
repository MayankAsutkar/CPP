#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
      void read(void);
      void chk_binary(void);

};

void binary :: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_binary()
{
    for(int i=0;i<s.length();i++)
    {
        if((s.at(i)!='0') && (s.at(i)!='1'))
        {
            cout<<"not a binary number"<<endl;
            exit(0);
        }
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_binary();
    return 0;
    
}
