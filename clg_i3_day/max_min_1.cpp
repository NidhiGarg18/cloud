#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter the value of a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
   if(a>b)
   {
    if(a>c)
    {
    if(a>d)
    cout<<"a is max"<<a<<endl;
    else
    cout<<"d is max"<<c<<endl;
   }
   else
   {
    if(c>d)
    cout<<"c is max"<<c<<endl;
    else    
    cout<<"c is max"<<c<<endl;
   }
   else 
    if(b>c)
    {
    if(b>d)
    cout<<"b is max"<<b<<endl;
    else
    cout<<"c is max"<<c<<endl;
   }
   else
    if (c>d)
   {
    cout<<"c is max"<<c<<endl;
    else
     cout<<"d is max"<<d<<endl;
   }
   

}