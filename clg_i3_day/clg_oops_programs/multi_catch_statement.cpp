#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"value of a"<<endl;
    cin>>a;
    cout<<"value of b"<<endl;
    cin>>b;
    c=a-b;
    try
    {
        if(b>a)
        {
            throw c;
        }
        else{
            cout<<a-b;
        }
    }
    catch(int c)
    {
        cout<<"exception"<<c<<endl;
    }
    catch(float c)
    {
        cout<<"exception"<<c<<endl;
    }

    
}