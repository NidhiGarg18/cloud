#include<iostream>
using namespace std;
int main()
{
    int n,i,prod=0;
    cout<<"enter the value of natural number"<<endl;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        prod*=i;
    }
    cout<<"value of n namtural number is:"<<prod;
    return 0;

}