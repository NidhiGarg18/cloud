#include<iostream>
using namespace std;
template<class T>
class A
{
    T a;
    public:
    T getdata()
    {
        cout<<a;
    }
};
int main()
{
     A<int>::getdata(5);
}
