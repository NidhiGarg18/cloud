# include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of a"<<endl;
    cin>>a;
    c=a-b;
    try
    {
        if(c!=0)
        {
            cout<<a/c;
        }
        else{
            throw c;
        }
    }
    catch(int c)
    {
        cout<<"exception catch"<< c <<endl;
    }
}