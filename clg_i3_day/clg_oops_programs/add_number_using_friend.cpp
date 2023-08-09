#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    public:
    int getdata();
    int display();
    friend int add();
};
int A::getdata()
{
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
}
int A::display()
{
    cout<<a<<"+"<<b<<endl;
}
int main()
{
    A obj1;
    obj1.getdata();
    obj1.display();
}
{
    obj2.add();
    obj2=obj1.a+obj1.b;
    return obj2;
}


