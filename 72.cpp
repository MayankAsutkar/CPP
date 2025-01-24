#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    list<int> list1;//list of 0 length.
    list<int> list2(16);//empty list of 16 elements.
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(20);
    list1.push_back(20);

    display(list1);
}