#include<iostream>
using namespace std;
int main()
{
    int cp,sp,loss,profit;
    cout<<"enter the value of cp,sp"<<endl;
    cin>>cp>>sp;
    if(cp>sp)
    cout<<"loss"<<cp-sp<<endl;
    else if(sp>cp)
     cout<<"profit"<<sp-cp<<endl;
    else
    cout<<"no profit,no loss"<<endl;

}