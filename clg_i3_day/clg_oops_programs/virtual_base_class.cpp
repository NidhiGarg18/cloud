#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    public:
    void getdata()
    {
      cout<<"in class A"<<endl;
      cout<<a<<endl;
    }
};
class B:virtual public A
{
    public:
    int a;
    public:
    void getdata()
    {
      cout<<"in class B"<<endl;
      cout<<a<<endl;
    }

};
class C:virtual public A
{
    public:
    int a;
    public:
    void getdata()
    {
      cout<<"in class C"<<endl;
      cout<<a<<endl;
    }

};
class D: public B,public C
{
    public:
    int a;
    public:
    void getdata()
    {
      cout<<"in class D"<<endl;
      cout<<a<<endl;
    }
};
int main()
{
    D obj1;
    obj1.a=20;
    obj1.getdata();
}

