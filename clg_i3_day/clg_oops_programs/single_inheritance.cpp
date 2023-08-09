#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int getdata()
    {
        cout<<"value of a"<<endl;
        cin>>a;
    }
};
class B:public A
{
    public:
    int sum()
    {
        a=a+1;
    }
};
int main()
{
    B o1;
    o1.a=100;
    o1.sum();
}