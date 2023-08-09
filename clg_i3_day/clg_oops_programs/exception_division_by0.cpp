// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     int b;
//     int c;
//     cout<<"value of a"<<endl;
//     cin>>a;
//     cout<<"value of b"<<endl;
//     cin>>b; 
//     c=a-b;
//     try
//     {
//         if(c!=0)
//         {
//             cout<<a/c;
//         }
//         else{
//             throw c;
//         }
//     }
//     catch(int c)
//     {
//         cout<<"exception"<<c<<endl;
//     }
    
// }
#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw"demo of exception";
    }
    catch(char * E)
    {
        cout<<"exception"<<E<<endl;
    }
    cout<<"continue after catch block"<<endl;
    
}