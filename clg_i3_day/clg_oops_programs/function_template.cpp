#include<iostream>
using namespace std;
template<class T>
int getdata(T a,T b)
{
    cout<<a*b<<endl;
}
int main()
{
    getdata<int>(4,5);
}