#include<iostream>
using namespace std;
template<class T>
class A
{
    T a;
    T b;
    public:
    T getdata(T c,T d)
    {
        a=c,b=d;
        cout<<a+b<<endl;
        cout<<a-b<<endl;
        cout<<a*b<<endl;
        cout<<a/b<<endl;
    }
};
int main()
{
    A<int>B;
    B.getdata(2,3);
}