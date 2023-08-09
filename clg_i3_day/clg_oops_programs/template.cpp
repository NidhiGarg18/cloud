#include<iostream>
using namespace std;
template<class T>
class A
{
    T a;
    public:
    T getdata(T x)
    {
        a=x;
        cout<<a<<endl;
    }
};
int main()
{
    A<int>B;
    B.getdata(5);
}