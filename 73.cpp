#include<iostream>
#include<map>
#include<string>
using namespace std;
void print(map<int, string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    //MAPS IN CPP
    map<int, string> m;
    m[1] = "harry";
    m[2] = "carry";
    m[4] = "merry";
    m.insert({{3,"jerry"},{6,"katie"}});
    map<int, string> :: iterator it;
    for(it = m.begin();it != m.end();it++)
    {
        cout<<(*it).first<<"  "<<(*it).second<<endl;
    }
    cout<<endl;
    print(m);
}