#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the value of n namtural number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       sum+=i;
    }
    cout<<"value of n natural number is:"<<sum;
    return 0;
}