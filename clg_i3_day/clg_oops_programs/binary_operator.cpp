#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        x=2;
    }
    int display();
    A operator -(A);
};
int A::display()
{
    cout<<x<<endl;
}
A A::operator -(A obj)
{
    A z;
    z.x=x-obj.x;
}
int main()
{
    A o1,o2,o3;
    o3=o1-o2;
    o3.display();
}