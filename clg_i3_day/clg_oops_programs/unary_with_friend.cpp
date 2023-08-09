#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A()
    {
        x=2 ;
        y=2;
    }
    int display();
    A friend operator --(A);
};
int A::display()
{
    cout<<x<<endl;
    cout<<y<<endl;
}
A operator --(A obj)
{
    obj.x=--obj.x;
    obj.y=--obj.y;
    return obj;
}
int main()
{
    A o1;
    o1.display();
    o1=--o1;
    o1.display();
}